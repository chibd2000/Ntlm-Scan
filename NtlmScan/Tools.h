#ifndef TOOLS_H_H
#define TOOLS_H_H
#define _CRT_SECURE_NO_WARNINGS
#include "public.h"
#define _IP_MARK "."
char* WcharToChar(wchar_t* wc);
wstring StringToWString(const std::string& str);
int cidr2ipmask(char* cidr, unsigned int* ip, unsigned int* mask);
string int2ip(unsigned int num);
#endif
#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
void DectoHex(char * dec);//十进制到十六进制
void DectoBit(char* dec);//十进制到二进制
void BittoDec(char* dec);//二进制转化位十进制
void BittoHex(char* dec);//二进制转化位十进制
//void DectoOct(char* decnum);//十进制到八进制
void HextoDec(char* dec);//十六进制到十进制
void HextoBit(char* dec);//十六进制到二进制

#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//ȡ��scanf����ֵ�ľ���
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
void DectoHex(char * dec);//ʮ���Ƶ�ʮ������
void DectoBit(char* dec);//ʮ���Ƶ�������
void BittoDec(char* dec);//������ת��λʮ����
void BittoHex(char* dec);//������ת��λʮ����
//void DectoOct(char* decnum);//ʮ���Ƶ��˽���
void HextoDec(char* dec);//ʮ�����Ƶ�ʮ����
void HextoBit(char* dec);//ʮ�����Ƶ�������

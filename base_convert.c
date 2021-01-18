#include "base_convert.h"
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告
int toDecNum(char* decnum)//转化成十进制数字
{
	int sum = 0;
	int ret;
	int numlen = strlen(decnum);
	for (int i=numlen-1;i>=0;i--)
	{
		ret = *(decnum+i) - '0';
		ret = ret * pow(10, numlen - i-1);
		sum += ret;
	}
	return sum;
}
void DectoHex(char* dec)
{
	int decnum = toDecNum(dec);
	int num[20] = { 0 };
	int i = 0;
	while (decnum)
	{

		num[i++] = decnum % 16;
		decnum = decnum / 16;
	}

	for (i--; i >= 0; i--)
	{
		if (num[i] >= 0 && num[i] <= 9)
		{
			printf("%d", num[i]);
		}
		else
			printf("%c", '7' + num[i]);
	}
	printf("\n\n");
}

void DectoBit(char* dec)
{
	int decnum = toDecNum(dec);
	int num[32] = { 0 };
	int i = 0;
	while (decnum)
	{

		num[i++] = decnum % 2;
		decnum = decnum / 2;
	}

	for (i--; i >= 0; i--)
	{

		printf("%d", num[i]);

	}
	printf("\n\n");
}

void BittoDec(char* dec)
{
	int numlen = strlen(dec);
	int sum = 0, ret;
	for (int i = 0; i < numlen; i++)
	{
		ret = *(dec + i) - '0';
		ret = ret * pow(2, numlen-i-1);
		sum += ret;
	}
	printf("%d\n\n", sum);
	
}

void BittoHex(char* dec)
{
	int numlen = strlen(dec);
	int sum = 0, ret;
     //判断位数
	int row = numlen / 4;
	int col = numlen % 4;
	if (col)
	{
		for (int i = 0; i < col; i++)
		{
			ret = *(dec + i) - '0';
			ret = ret * pow(2, col-i-1);
			sum += ret;
		}
		/*	if (sum>9)
			{
				printf("%c", '7' + sum);
			}*/
		printf("%d", sum);
		
	}
	sum = 0;
	for (int i = col; i < numlen-1;)
	{
		for (int j=0;j<4;j++)
		{
			ret = *(dec + i) - '0';
			ret = ret * pow(2, 4-j-1);
			sum += ret;
			i++;
		}
			if (sum>9)
			{
				printf("%c", '7' + sum);
			}
			else
			{
				printf("%d", sum);
			}
			sum = 0;
	}

	printf("\n\n");
   
}
int toDecnumto(char *dec)
{
	int sum = 0;
	int ret;
	int numlen = strlen(dec);
	for (int i=numlen-1;i>=0;i--)
	{
		if (*(dec+i)>='0'&& *(dec + i) <= '9')
		{
			ret= ret = *(dec + i) - '0';
			
		}
		else {
			
			ret = toupper(*(dec + i)) - '7';
		}
		ret = ret * pow(16, numlen - i - 1);
		sum += ret;
	}
	return sum;
}
void HextoDec(char* dec)
{
	int decnum = toDecnumto(dec);
	printf("%d", decnum);
	printf("\n\n");
}

void HextoBit(char* dec)
{
	int decnum = toDecnumto(dec);
	int num[32] = { 0 };
	int i = 0;
	while (decnum)
	{

		num[i++] = decnum % 2;
		decnum = decnum / 2;
	}

	for (i--; i >= 0; i--)
	{

		printf("%d", num[i]);

	}
	printf("\n\n");
}

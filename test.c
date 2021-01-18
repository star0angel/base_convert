#include "base_convert.h"
void menu()
{
	printf("1. 十进制转十六进制\n2. 十进制转二进制\n3. 二进制转十进制\n");
	printf("4. 二进制转十六进制\n5. 十六进制转十进制\n6. 十六进制转二进制\n");
	printf("0. 退出程序");
}
int CheckNum(char* nu, int input)
{
	if (input>=1&&input<=2)
	{
		while (*nu)
		{
			if (!(*nu>='0'&&*nu<='9'))
			{
				perror("输入不合法");
				return 1;
			}
			nu++;
		}
		return 0;
	} 
	else if(input >= 3 && input <= 4)
	{
		while (*nu)
		{
			if (!(*nu >= '0' && *nu <= '1'))
			{
				perror("输入不合法");
					return 1;
			}
			nu++;
		}
		return 0;
	}
	else
	{
		while (*nu)
		{
			if (!(*nu >= '0' && *nu <= '9'|| *nu >= 'a' && *nu <= 'f'|| *nu >= 'A' && *nu <= 'F'))
			{
				perror("输入不合法");
					return 1;
			}
			nu++;
		}
		return 0;
	}
}
int main()
{
	int input, check;
	char nu[32] = { 0 };
	do 
	{
		menu();
		check = 1;
		printf("请输入你要执行的操作（0-9）：>");
		scanf("%d", &input);
		
		
		while (input >= 1 && input <= 6 && check == 1)
		{
			printf("输入你要转换的数：");
			scanf("%s", nu);
			check = CheckNum(nu,input);//判断输入是否合法  
		}
		
		
		switch (input)
		{
		case 0:
			printf("退出。");
			break;
		case 1:
			DectoHex(nu);
			break;
		case 2:
			DectoBit(nu);
			break;
		case 3:
			BittoDec(nu);
			break;
		case 4:
			BittoHex(nu);
			break;
		case 5:
			HextoDec(nu);
			break;
		case 6:
			HextoBit(nu);
			break;
		default:
			printf("选择错误。");
			break;
		}
	} while (input);
	return 0;

}
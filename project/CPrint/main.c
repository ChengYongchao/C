#include<stdio.h>


void printMenu();
int add();
int reversePrint();

int main(int argc, char* argv[])
{
	while (1)
	{
		int select;
		printMenu();
		scanf("%d", &select);
		switch (select)
		{
		case -1:
			exit(0);
		case 1:
			add();
			break;
		case 2:
			reversePrint();
			break;
		default:
			break;
		}
	}
}

void printMenu()
{
	printf("=================================================================\n");
	printf("*                            CTest                              *\n");
	printf("*                            1.加法                             *\n");
	printf("*                            2.逆序输出                         *\n");
	printf("请选择：\n");
}

int add()
{
	double num1,num2;
	printf("请输入数1：\n");
	scanf("%lf", &num1);
	printf("请输入数2：\n");
	scanf("%lf", &num2);
	printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
	printf("==============================End================================\n");
	return 0;
}

int reversePrint()
{
	char arr[256];
	char* p;
	printf("请输入一个字符串：\n");
	scanf("%s", arr);
	p = arr;
	reverse(p);
	printf("\n");
}
int reverse(char* p)
{
	if (*p == '\0')
	{
		return 0;
	}
	reverse(++p);
	printf("%c", *p);
}
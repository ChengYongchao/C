#include<stdio.h>
#include <stdlib.h>
#include<windows.h> 

struct MainWindow
{
	int width;
};

struct MainWindow mainWindow = { 50 };
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
		system("cls");
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
		case 3:
			runBall();
			break;
		default:
			break;
		}
		system("cls");
	}
}

void printMenu()
{
	printf("=================================================================\n");
	printf("*                            CTest                              *\n");
	printf("*                            1.�ӷ�                             *\n");
	printf("*                            2.�������                         *\n");
	printf("*                            3.��ײ��                           *\n");
	printf("=================================================================\n");
	printf("��ѡ��\n");
}

int add()
{
	double num1,num2;
	printf("��������1��\n");
	scanf("%lf", &num1);
	printf("��������2��\n");
	scanf("%lf", &num2);
	printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
	printf("==============================End================================\n");
	return 0;
}

int reversePrint()
{
	char arr[256];
	char* p;
	printf("������һ���ַ�����\n");
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
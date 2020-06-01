#include<stdio.h>
#include <stdlib.h>
#include<windows.h> 
#include"Ball.h"
#include"break.h"

struct GameWindow gWindow = { 50,20 };
struct Ball ball = { 10,10,'x',BallXRight, BallYUp };



//������Ϸ����
void printWindow()
{
	//���Ƶ�һ��
	if (ball.y == gWindow.y - 1)
	{
		for (int i = 0; i < gWindow.x; i++)
		{
			if (i == ball.x)
			{
				printf("%c", ball.body);
			}
			else {
				printf("_");
			}
		}
	}
	else
	{
		for (int i = 0; i < gWindow.x; i++)
		{
			printf("_");
		}
	}
	printf("\n");

	//�����м�����
	for (int j = gWindow.y - 1; j > 1; j--)
	{
		if (j == ball.y)
		{
			for (int i = 0; i < gWindow.x; i++)
			{
				if (i == ball.x)
				{
					printf("%c", ball.body);
				}
				else if (i == 0 || i == gWindow.x - 1)
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		else
		{
			for (int i = 0; i < gWindow.x; i++)
			{
				if (i == 0 || i == gWindow.x - 1)
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	//�������һ��
	//���Ƶ�һ��
	if (ball.y == 0)
	{
		for (int i = 0; i < gWindow.x; i++)
		{
			if (i == ball.x)
			{
				printf("%c", ball.body);
			}
			else {
				printf("_");
			}
		}
	}
	else
	{
		for (int i = 0; i < gWindow.x; i++)
		{
			printf("_");
		}
	}
	printf("\n");
}

void change()
{
	//�߽��ж�
	//1.�ұ߽�
	if (ball.x == gWindow.x - 1)
	{
		ball.xAction = BallXLeft;
	}
	//2.��߽�
	if (ball.x == 0)
	{
		ball.xAction = BallXRight;
	}
	//3.�ϱ߽�
	if (ball.y == gWindow.y - 1)
	{
		ball.yAction = BallYDown;

	}
	if (ball.y == 0)
	{
		ball.yAction = BallYUp;
	}
}

void runBall()
{

	while (1)
	{
		if (breakFromChoose())
		{
			break;
		}
		printWindow();
		change();
		ball.xAction();
		ball.yAction();
		Sleep(100);
		system("cls");

	}
}
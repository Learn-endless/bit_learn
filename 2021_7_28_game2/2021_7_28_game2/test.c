#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("*******    1.play    *******\n");
	printf("*******    0.exit    *******\n");
	printf("****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };  //存放雷的信息
	char show[ROWS][COLS] = { 0 };  //存放排除雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//埋雷
	SetMine(mine, ROW, COL, EASY_MODE);

	//DisplayBoard(mine, ROW, COL);
	
	//排雷
	MoveMine(mine, show, ROW, COL, EASY_MODE);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();  //菜单
		printf("请选择》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");         //清屏
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}
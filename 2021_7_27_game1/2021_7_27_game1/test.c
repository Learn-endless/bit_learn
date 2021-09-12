#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//打印菜单
void menu()
{
	printf("**************************\n");
	printf("********  1.play  ********\n");
	printf("********  0.exit  ********\n");
	printf("**************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != '4')
		{		
			system("cls");    //清下屏幕再打印   
		   //打印棋盘
		    DisplayBoard(board, ROW, COL);
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		system("cls");    //清下屏幕再打印
		//打印棋盘
		DisplayBoard(board, ROW, COL);	
		//判断输赢	
		ret = IsWin(board, ROW, COL);
		if (ret != '4')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
		printf("5秒后将重新开始！");
		Sleep(5000);   //显示5秒结果
		system("cls"); //清屏重新一把

	}
	else if (ret == '*')
	{
		printf("玩家赢\n");		
		printf("5秒后将重新开始！");
		Sleep(5000);   //显示5秒结果
		system("cls"); //清屏重新一把

	}
	else
	{
		printf("平局\n");
		printf("5秒后将重新开始！");
		Sleep(5000);   //显示5秒结果
		system("cls"); //清屏重新一把

	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");  //清一下屏幕
			game();
			break;
		case 0:
			system("cls");
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择》\n");
			Sleep(500);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}
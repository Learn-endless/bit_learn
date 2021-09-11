#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//打印行数
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");   //换行
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");   //换行
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("--------------------------\n");
	printf("玩家下棋》\n");
	printf("--------------------------\n");
	while (1)
	{
		printf("玩家走：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，重新输入！\n");
			}
		}
		else
		{
			printf("非法坐标，重新输入！\n");
		}
	}
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断是否平局
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0; //没有占满
		}
	}
	return 1;
}
//判断输赢
//玩家赢 - '*'
//电脑赢 - '#'
//平局 - '3'
//继续 - '4'
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断每一行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	//判断每一列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否为平局
	if (IsFull(board,ROW,COL))
	{
		return '3';
	}
	//继续
	return '4';
}
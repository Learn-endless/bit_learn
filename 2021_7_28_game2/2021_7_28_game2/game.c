#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int row, int col, char ret)
{
	int i = 0; 
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ret;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("------------------------------------\n");   //分割线
	int i = 0;
	for (i = 0; i <= row; i++)    //列的坐标
	{
		printf("%d ", i);
	}
	printf("\n");                 //坐标和棋盘之间用换行隔开
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);         //把行的坐标也给打印出来
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------------\n");   //分割线
}

//埋雷
void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;   //0 - 8 加1就变成了 1 - 9
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//统计周围雷的个数
int TotalMine(char mine[ROWS][COLS], int x, int y)
{
	return ((mine[x - 1][y - 1]) +
		   (mine[x - 1][y]) +
		   (mine[x - 1][y + 1]) +
		   (mine[x][y - 1]) +
		   (mine[x][y + 1]) +
		   (mine[x + 1][y - 1]) +
		   (mine[x + 1][y]) +
		   (mine[x + 1][y + 1])) - (8 * '0');
}

//排雷
void MoveMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	while (1)
	{
		printf("请输入排雷坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				Sleep(2000);
				system("cls");
				break;
			}
			else if (show[x][y] != '*')
			{
				printf("坐标已被占用，重新输入！\n");
			}
			else
			{
				//统计周围雷的个数
				show[x][y] = TotalMine(mine, x, y) + '0';
				system("cls");
				//打印棋盘
				DisplayBoard(show, ROW, COL);
				ret++;
				if (ret == (row * col - count))
				{
					printf("恭喜你，排雷成功！\n");
					DisplayBoard(mine, ROW, COL);
					Sleep(5000);
					system("cls");
					break;
				}
			}
		}
		else
		{
			printf("坐标不合法！\n");
		}
	}
}
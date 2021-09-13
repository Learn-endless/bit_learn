#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("------------------------------------\n");   //�ָ���
	int i = 0;
	for (i = 0; i <= row; i++)    //�е�����
	{
		printf("%d ", i);
	}
	printf("\n");                 //���������֮���û��и���
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);         //���е�����Ҳ����ӡ����
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------------\n");   //�ָ���
}

//����
void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;   //0 - 8 ��1�ͱ���� 1 - 9
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//ͳ����Χ�׵ĸ���
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

//����
void MoveMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	while (1)
	{
		printf("�������������꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				Sleep(2000);
				system("cls");
				break;
			}
			else if (show[x][y] != '*')
			{
				printf("�����ѱ�ռ�ã��������룡\n");
			}
			else
			{
				//ͳ����Χ�׵ĸ���
				show[x][y] = TotalMine(mine, x, y) + '0';
				system("cls");
				//��ӡ����
				DisplayBoard(show, ROW, COL);
				ret++;
				if (ret == (row * col - count))
				{
					printf("��ϲ�㣬���׳ɹ���\n");
					DisplayBoard(mine, ROW, COL);
					Sleep(5000);
					system("cls");
					break;
				}
			}
		}
		else
		{
			printf("���겻�Ϸ���\n");
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//��ӡ����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ������
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");   //����
		//��ӡ�ָ���
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
			printf("\n");   //����
		}
	}
}

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("--------------------------\n");
	printf("������塷\n");
	printf("--------------------------\n");
	while (1)
	{
		printf("����ߣ�");
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
				printf("�����ѱ�ռ�ã��������룡\n");
			}
		}
		else
		{
			printf("�Ƿ����꣬�������룡\n");
		}
	}
}

//��������
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

//�ж��Ƿ�ƽ��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0; //û��ռ��
		}
	}
	return 1;
}
//�ж���Ӯ
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� - '3'
//���� - '4'
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int flag = 1;
	//�ж�ÿһ��
	for (i = 0; i < row; i++)
	{
		int temp = 1;  //�������
		int j = 0; 
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] != board[i][j + 1])
			{
				temp = 0;
				break;
			}
		}
		if (temp == 1 && board[i][j] != ' ')
		{
			return board[i][j];
		}
	}

	//�ж�ÿһ��
	for (i = 0; i < row; i++)
	{
		int temp = 1;
		int j = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[j][i] != board[j + 1][i])
			{
				temp = 0;
				break;
			}
		}
		if (temp == 1 && board[j][i] != ' ')
		{
			return board[j][i];
		}
	}

	//�ж϶Խ���
	for (i = 1; i < row; i++)
	{
		if (board[0][0] != board[i][i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1 && board[0][0] != ' ')
	{
		return board[0][0];
	}

	flag = 1;
	for (i = 1; i < col; i++)
	{
		if (board[0][col - 1] != board[i][i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1 && board[0][col - 1] != ' ')
	{
		return board[0][col - 1];
	}

	//�ж��Ƿ�Ϊƽ��
	if (IsFull(board,ROW,COL))
	{
		return '3';
	}
	//����
	return '4';
}
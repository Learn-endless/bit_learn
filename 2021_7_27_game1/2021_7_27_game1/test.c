#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//��ӡ�˵�
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
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != '4')
		{		
			system("cls");    //������Ļ�ٴ�ӡ   
		   //��ӡ����
		    DisplayBoard(board, ROW, COL);
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		system("cls");    //������Ļ�ٴ�ӡ
		//��ӡ����
		DisplayBoard(board, ROW, COL);	
		//�ж���Ӯ	
		ret = IsWin(board, ROW, COL);
		if (ret != '4')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
		printf("5������¿�ʼ��");
		Sleep(5000);   //��ʾ5����
		system("cls"); //��������һ��

	}
	else if (ret == '*')
	{
		printf("���Ӯ\n");		
		printf("5������¿�ʼ��");
		Sleep(5000);   //��ʾ5����
		system("cls"); //��������һ��

	}
	else
	{
		printf("ƽ��\n");
		printf("5������¿�ʼ��");
		Sleep(5000);   //��ʾ5����
		system("cls"); //��������һ��

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//system("cls");  //��һ����Ļ
			game();
			break;
		case 0:
			//system("cls");
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			//Sleep(500);
			//system("cls");
			break;
		}
	} while (input);
	return 0;
}
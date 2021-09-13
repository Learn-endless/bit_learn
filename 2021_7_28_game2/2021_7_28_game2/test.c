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
	char mine[ROWS][COLS] = { 0 };  //����׵���Ϣ
	char show[ROWS][COLS] = { 0 };  //����ų��׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//����
	SetMine(mine, ROW, COL, EASY_MODE);

	//DisplayBoard(mine, ROW, COL);
	
	//����
	MoveMine(mine, show, ROW, COL, EASY_MODE);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();  //�˵�
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");         //����
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}
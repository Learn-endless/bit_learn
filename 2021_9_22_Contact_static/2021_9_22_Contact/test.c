#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("************************************\n");
	printf("******    0.exit     1.add    ******\n");
	printf("******    2.del      3.search ******\n");
	printf("******    4.modify   5.dis    ******\n");
	printf("******    6.cls      7.sort   ******\n");
	printf("************************************\n");
}
int main()
{
	int input = 0;      //����ѡ��
	//����һ��ͨѶ¼
	struct Contact con = { 0 };
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{	
		//��ӡ�����
		menu();
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�ͨѶ¼��\n");
			break;
		case 1:
			AddPeople(&con);
			break;
		case 2:
			DelPeople(&con);
			break;
		case 3:
			SearchPeople(&con);
			break;
		case 4:
			ModPeople(&con);
			break;
		case 5:
			Display(&con);
			break;
		case 6:
			ClsContact(&con);
			break;
		case 7:
			NameSort(&con);
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ��
//  1.�������һ�������
//  2.�û�����������
//  3.�����û��������֣�������ʾ
//  4.���ղ¶�
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//void menu()
//{
//	printf("************************\n");
//	printf("*******  1.play  *******\n");
//	printf("*******  0.exit  *******\n");
//	printf("*  ע�⣺10�����ڲ¶�  *\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//���������
//	int ret = rand() % 100 + 1;    //0-99  +1  1-100
//	//������
//	//printf("%d\n", ret);
//	int num = 0;
//	int flag = 0;
//	while (flag < 10)                 //���ֻ�ܲ�10��
//	{
//		printf("�����֡�");   //��ʾһ��
//		scanf("%d", &num);
//		if (num < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (num > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
//			Sleep(2000);
//			break;              //�¶��ˣ��˳�ѭ��
//		}
//		flag++;
//		if (flag == 10)
//		{
//			printf("10���ѵ���δ�³�����Ϸ������\n");
//			Sleep(2000);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  //������������������
//	do
//	{
//		menu();      //��Ϸ�˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		//����ѡ��Ƿ�ʼ��Ϸ
//		switch (input)
//		{
//		case 1:
//			game();    //��ʼ����Ϸ
//			system("cls");
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��");
//			system("cls");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto����ʹ��д��
//#include<stdio.h>
//int main()
//{
//flag:  //���
//	printf("hello\n");
//	goto flag;
//	return 0;
//}

//�ػ�С����
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	// ���Թػ�
//	system("shutdown -s -t 180");
//agin:
//	// ��ʾһ��
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ��������ȡ���������룺������\n");
//	scanf("%s", input);
//	//�ж��ǲ��ǣ�������
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");  //ȡ���ػ�
//	}
//	else
//	{
//		goto agin;  //���¿�ʼ
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	// ���Թػ�
	system("shutdown -s -t 180");
	while (1)
	{
		// ��ʾһ��
		printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ��������ȡ���������룺������\n");
		scanf("%s", input);
		//�ж��ǲ��ǣ�������
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");  //ȡ���ػ�
			break;
		}
	}
	return 0;
}
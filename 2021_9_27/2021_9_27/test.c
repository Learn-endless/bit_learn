#define _CRT_SECURE_NO_WARNINGS 1

//�ļ��������д
//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//    if (NULL == pf)
//    {
//	    perror("fopen");
//	    return -1;
//    }
//	//���ļ�
//	fseek(pf, 2, SEEK_SET);  //��λ������Ҫ���ļ�λ��
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, -2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);      //���㵱ǰ�ļ�ָ������ʼ�ص��ƫ����
//	printf("%d\n", ret);
//
//	rewind(pf);  //�õ�ǰ�ļ�ָ��λ�ûص��ļ���ʼλ��	
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�������ļ����ı��ļ�
//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	int a = 10000;
//	// 00 00 27 10  - 16����д��
//	//С�˴洢 - 10 27 00 00 
//	fwrite(&a, 4, 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ַ������ı��ļ���
//	fputs("hello world!\n", pf);
//	//д�ַ�������׼�������
//	fputs("hello world!\n", stdout);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//��׼����� - stdout
//��׼������ - stdin
//��׼������ - stderr


//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 10;
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}



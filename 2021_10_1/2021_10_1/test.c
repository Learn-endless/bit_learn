#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	//��ֻд��ģʽ���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	//�ж��Ƿ�򿪳ɹ�
//	if (NULL == pf)
//	{
//		//��ӡһ�´�����Ϣ
//		perror("fopen");
//		//��������
//		return -1;
//	}
//
//	//ʹ��...
//	//�����Ȳ������ܣ����潫���������ôʹ��
//
//	//�ر��ļ� - һ��ֻ��Ҫ�ڴ��ļ�ʱ�ж�һ���Ƿ�ɹ�
//	fclose(pf);   
//	pf = NULL; //��Ϊ��ָ��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//��ֻд��ģʽ���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	//�ж��Ƿ�򿪳ɹ�
//	if (NULL == pf)
//	{
//		//��ӡһ�´�����Ϣ
//		perror("fopen");
//		//��������
//		return -1;
//	}
//
//	//д�ļ�
//	fputc('H', pf);
//	fputc('e', pf);
//	fputc(108, pf);
//	fputc('l', pf);
//	fputc(111, pf);
//
//	//�ر��ļ� - һ��ֻ��Ҫ�ڴ��ļ�ʱ�ж�һ���Ƿ�ɹ�
//	fclose(pf);
//	pf = NULL; //��Ϊ��ָ��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//��ֻд��ģʽ���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	//�ж��Ƿ�򿪳ɹ�
//	if (NULL == pf)
//	{
//		//��ӡһ�´�����Ϣ
//		perror("fopen");
//		//��������
//		return -1;
//	}
//	//д�ļ�
//	char str[] = "hello world!\n";
//	int a = 100;
//	char w = 'A';
//	fprintf(pf, "%s%d %c", str, a, w);
//
//	//�ر��ļ� - һ��ֻ��Ҫ�ڴ��ļ�ʱ�ж�һ���Ƿ�ɹ�
//	fclose(pf);
//	pf = NULL; //��Ϊ��ָ��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//��ֻд��ģʽ���ļ�
//	FILE* pf = fopen("data.txt", "wb");
//	//�ж��Ƿ�򿪳ɹ�
//	if (NULL == pf)
//	{
//		//��ӡһ�´�����Ϣ
//		perror("fopen");
//		//��������
//		return -1;
//	}
//	//д�ļ�
//	int a = 10000;
//	fwrite(&a, 4, 5, pf); //��a�е�ֵ�Զ����Ʒ�ʽд���ļ�������д5��
//	//�ر��ļ� - һ��ֻ��Ҫ�ڴ��ļ�ʱ�ж�һ���Ƿ�ɹ�
//	fclose(pf);
//	pf = NULL; //��Ϊ��ָ��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char str[200] = { 0 };
//	int a = 100;
//	float b = 3.14f;
//	sprintf(str, "%d %f", a, b);
//	printf("%s\n", str);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, 6, SEEK_SET);
//	//���ļ�
//	char ret = fgetc(pf);
//	printf("%c\n", ret);
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
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, 6, SEEK_SET);
//	//���ص�ǰ�ļ�ָ���������ʼλ�õ�ƫ����
//	long number = ftell(pf);
//	printf("%d\n", number);
//
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
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	//�ļ�������һ����hello world
//
//	//��λ�ļ�ָ��
//	fseek(pf, 6, SEEK_SET);
//	char ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//ʹ��rewind���������ļ�ָ�����õ��ļ���ʼλ��
//	rewind(pf);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) 
//	{
//		perror("File opening failed");
//		return -1;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	int c = 0;   //fgetc�����ķ���ֵΪ int��
//	while ((c = fgetc(pf)) != EOF) //ѭ����ȡ�ַ�������ӡ
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(pf))  //��ȡ���ļ�ĩβ����
//		puts("I/O error when reading");
//	else if (feof(pf)) //��ȡ�ļ��������
//		puts("End of file reached successfully");
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
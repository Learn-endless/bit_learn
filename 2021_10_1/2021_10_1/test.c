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


#include<stdio.h>
int main()
{
	//��ֻд��ģʽ���ļ�
	FILE* pf = fopen("data.txt", "w");
	//�ж��Ƿ�򿪳ɹ�
	if (NULL == pf)
	{
		//��ӡһ�´�����Ϣ
		perror("fopen");
		//��������
		return -1;
	}

	//д�ļ�
	char str[] = "hello world";
	fputs("Hello world!\n", pf);
	fputs(str,pf);

	//�ر��ļ� - һ��ֻ��Ҫ�ڴ��ļ�ʱ�ж�һ���Ƿ�ɹ�
	fclose(pf);
	pf = NULL; //��Ϊ��ָ��
	return 0;
}
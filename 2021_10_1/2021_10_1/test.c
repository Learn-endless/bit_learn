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


#include<stdio.h>
int main()
{
	char str[200] = { 0 };
	int a = 100;
	float b = 3.14f;
	sprintf(str, "%d %f", a, b);
	printf("%s\n", str);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	//以只写的模式打开文件
//	FILE* pf = fopen("data.txt", "w");
//	//判断是否打开成功
//	if (NULL == pf)
//	{
//		//打印一下错误信息
//		perror("fopen");
//		//结束程序
//		return -1;
//	}
//
//	//使用...
//	//这里先不做介绍，下面将具体举例怎么使用
//
//	//关闭文件 - 一般只需要在打开文件时判断一下是否成功
//	fclose(pf);   
//	pf = NULL; //置为空指针
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
//	//以只写的模式打开文件
//	FILE* pf = fopen("data.txt", "w");
//	//判断是否打开成功
//	if (NULL == pf)
//	{
//		//打印一下错误信息
//		perror("fopen");
//		//结束程序
//		return -1;
//	}
//
//	//写文件
//	fputc('H', pf);
//	fputc('e', pf);
//	fputc(108, pf);
//	fputc('l', pf);
//	fputc(111, pf);
//
//	//关闭文件 - 一般只需要在打开文件时判断一下是否成功
//	fclose(pf);
//	pf = NULL; //置为空指针
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//以只写的模式打开文件
//	FILE* pf = fopen("data.txt", "w");
//	//判断是否打开成功
//	if (NULL == pf)
//	{
//		//打印一下错误信息
//		perror("fopen");
//		//结束程序
//		return -1;
//	}
//	//写文件
//	char str[] = "hello world!\n";
//	int a = 100;
//	char w = 'A';
//	fprintf(pf, "%s%d %c", str, a, w);
//
//	//关闭文件 - 一般只需要在打开文件时判断一下是否成功
//	fclose(pf);
//	pf = NULL; //置为空指针
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//以只写的模式打开文件
//	FILE* pf = fopen("data.txt", "wb");
//	//判断是否打开成功
//	if (NULL == pf)
//	{
//		//打印一下错误信息
//		perror("fopen");
//		//结束程序
//		return -1;
//	}
//	//写文件
//	int a = 10000;
//	fwrite(&a, 4, 5, pf); //将a中的值以二进制方式写入文件，并且写5次
//	//关闭文件 - 一般只需要在打开文件时判断一下是否成功
//	fclose(pf);
//	pf = NULL; //置为空指针
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
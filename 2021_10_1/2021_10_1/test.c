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
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//定位文件指针
//	fseek(pf, 6, SEEK_SET);
//	//读文件
//	char ret = fgetc(pf);
//	printf("%c\n", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//定位文件指针
//	fseek(pf, 6, SEEK_SET);
//	//返回当前文件指针相对于起始位置的偏移量
//	long number = ftell(pf);
//	printf("%d\n", number);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	//文件里面有一个：hello world
//
//	//定位文件指针
//	fseek(pf, 6, SEEK_SET);
//	char ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//使用rewind函数，将文件指针重置到文件起始位置
//	rewind(pf);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) 
//	{
//		perror("File opening failed");
//		return -1;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	int c = 0;   //fgetc函数的返回值为 int。
//	while ((c = fgetc(pf)) != EOF) //循环读取字符，并打印
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(pf))  //读取到文件末尾结束
//		puts("I/O error when reading");
//	else if (feof(pf)) //读取文件错误结束
//		puts("End of file reached successfully");
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


#include <stdio.h>
#include <windows.h>

//VS2013 WIN10环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);

	printf("刷新缓冲区\n");

	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
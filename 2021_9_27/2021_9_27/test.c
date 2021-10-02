#define _CRT_SECURE_NO_WARNINGS 1

//文件的随机读写
//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//    if (NULL == pf)
//    {
//	    perror("fopen");
//	    return -1;
//    }
//	//读文件
//	fseek(pf, 2, SEEK_SET);  //定位我所需要的文件位置
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, -2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);      //计算当前文件指针与起始地点的偏移量
//	printf("%d\n", ret);
//
//	rewind(pf);  //让当前文件指针位置回到文件起始位置	
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//二进制文件和文本文件
//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	int a = 10000;
//	// 00 00 27 10  - 16进制写法
//	//小端存储 - 10 27 00 00 
//	fwrite(&a, 4, 1, pf);
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
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写字符串到文本文件中
//	fputs("hello world!\n", pf);
//	//写字符串到标准输出流中
//	fputs("hello world!\n", stdout);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//标准输出流 - stdout
//标准输入流 - stdin
//标准错误流 - stderr


//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
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



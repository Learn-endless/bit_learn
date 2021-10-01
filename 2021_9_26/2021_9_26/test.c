#define _CRT_SECURE_NO_WARNINGS 1

//文件
//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "w");
//	if (NULL == pc)
//	{
//		perror("fopen");  //只读操作失败
//		return -1;
//	}
//	//写文件
//	fputc('h', pc);
//	fputc('e', pc);
//	fputc('l', pc);
//	fputc('l', pc);
//	fputc('o', pc);
//	fputc(' ', pc);
//	fputc('w', pc);
//	fputc('o', pc);
//	fputc('r', pc);
//	fputc('l', pc);
//	fputc('d', pc);
//
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//标准输出流 - stdout
//标准输入流 - stdin
//标准错误流 - stderr

//#include<stdio.h>
//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//	fputc('\n', stdout);
//	fputs("hello world!\n", stdout);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "r");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	
//	//int ch = fgetc(stdin);
//	//printf("%c\n", ch);
//
//	//ch = fgetc(stdin);      //从标准流中读取数据，- 键盘上
//	//printf("%c\n", ch);
//
//	//ch = fgetc(stdin);
//	//printf("%c\n", ch);
//
//	int ch = fgetc(pc);
//	printf("%c\n", ch);
//
//	ch = fgetc(pc);
//	printf("%c\n", ch);
//
//	ch = fgetc(pc);
//	printf("%c\n", ch);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "w");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	fputs("hello world！\n", pc);
//
//	fputs("bit！\n", pc);
//
//	//fputc('h',pc);
//
//	//fputc('\n', pc);
//
//	//fputc('e', pc);
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "r");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	char str[20] = { 0 };
//	fgets(str, 13, pc);    //这个函数，每次最多读一行
//	printf(str);
//
//	fgets(str, 3, pc);
//	printf(str);
//
//	fgets(str, 4, pc);
//	printf(str);
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int n;
//	double a;
//};
//int main()
//{
//	//以只写的方式打开文件
//	struct S s = { 100, 3.14 };
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "w");
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	fprintf(pc, "%d %lf", s.n, s.a);
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int n;
//	double a;
//};
//int main()
//{
//	//以只写的方式打开文件
//	struct S s = { 0 };
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "r");
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	fscanf(pc, "%d %lf", &(s.n), &(s.a));
//	printf("%d %lf", s.n, s.a);
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//	return 0;
//}


//二进制的方式写
//#include<stdio.h>
//struct S
//{
//	int a;
//	double b;
//	char c[20];
//};
//int main()
//{
//	//要写的数据
//	struct S s = { 100,3.14,"张三" };
//	//用二进制只写的形式打开文件
//	FILE* pc = fopen("data.txt", "wb");   //wb二进制只写形式
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	fwrite(&s, sizeof(s), 1, pc);
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}

//二进制的方式读
//#include<stdio.h>
//struct S
//{
//	int a;
//	double b;
//	char c[20];
//};
//int main()
//{
//	struct S s = { 0 };
//	//用二进制只读的形式打开文件
//	FILE* pc = fopen("data.txt", "rb");   //rb二进制只读形式
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	fread(&s, sizeof(s), 1, pc);
//	printf("%d %lf %s", s.a, s.b, s.c);
//
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//sprintf() - 把格式化的数据转化为一个字符串
//sscanf() - 从一个字符串中提取格式化的数据
//#include<stdio.h>
//struct S
//{
//	int a;
//	double b;
//	char c[20];
//};
//int main()
//{
//	struct S s = { 100,3.14,"张三" };
//	char str[20] = { 0 };
//	//打开一个文件
//	FILE* pc = fopen("data.txt", "w");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//把格式化的数据转化为一个字符串
//	sprintf(str, "%d %lf %s", s.a, s.b, s.c);
//	fputs(str, pc);
//	//关闭文件
//	fclose(pc);
//	pc = NULL;
//	printf(str);
//	struct S temp = { 0 };
//	//从一个字符串中提取格式化的数据
//	sscanf(str, "%d %lf %s", &(temp.a), &(temp.b), temp.c);
//	printf("%d %lf %s\n", temp.a, temp.b, temp.c);
//
//	return 0;
//}


#include<stdio.h>
struct S
{
	int a;

	double b;
};
int main()
{
	struct S s = { 100,3.14 };

	char str[20] = { 0 };
	//把格式化的数据转化为一个字符串
	sprintf(str, "%d %lf", s.a, s.b);  //后面会放上一个\0
	printf(str);
	struct S temp = { 0 };
	//从一个字符串中提取格式化的数据
	sscanf(str, "%d %lf", &(temp.a), &(temp.b));

	printf("%d %lf\n", temp.a, temp.b);

	return 0;
}
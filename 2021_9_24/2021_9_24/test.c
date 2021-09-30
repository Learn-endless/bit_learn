#define _CRT_SECURE_NO_WARNINGS 1

// 栈，堆，数据段(静态区)， 代码段
// 栈空间：函数形参，局部变量，函数返回值
// 堆空间：动态内存开辟
// 数据段(静态区) ：静态变量，全局变量



//柔性数组
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//struct stu
//{
//	int a;       //结构中的柔性数组成员前面必须至少一个其他成员
//	int arr[];   //最后一个成员为未知大小的数组
//	//int arr[0]; //与上面的写法完全等价
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct stu));  //结果不包含柔性数组成员的大小
//
//	//配和动态内存函数一起使用开辟空间
//	struct stu* pc = (struct stu*)malloc(sizeof(struct stu) + 10 * sizeof(int)); //柔性数组这时的大小是10个元素
//	if (pc == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	//使用空间
//	pc->a = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pc->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pc->arr[i]);
//	}
//	//空间不够了，增容
//	struct stu* ps = (struct stu*)realloc(pc, sizeof(struct stu) + 20 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	pc = ps;
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		pc->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pc->arr[i]);
//	}
//	//释放
//	free(pc);
//	pc = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct ty_type
//{
//	int a;
//	int* ps;
//};
//
//int main()
//{
//	struct ty_type* pc = (struct ty_type*)malloc(sizeof(struct ty_type));
//	if (pc == NULL)
//	{
//		printf("开辟失败！\n");
//		return -1;
//	}
//	//使用
//	pc->a = 100;
//	pc->ps = (int*)malloc(10 * sizeof(int));
//	if (pc->ps == NULL)
//	{
//		printf("开辟失败！\n");
//		return -1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pc->ps[i] = i;
//	}
//
//	//空间不够了，增容
//	int* ret = (int*)realloc(pc->ps, 20 * sizeof(int));  //把数组增加至20个元素
//	if (ret == NULL)
//	{
//		printf("增容失败！\n");
//		return -1;
//	}
//	pc->ps = ret;
//
//	for (i = 0; i < 20; i++)
//	{
//		*(pc->ps + i) = i;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(pc->ps+i));
//	}
//
//	free(pc->ps);
//	pc->ps = NULL;
//	free(pc);
//	pc = NULL;
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	short num = 0;
	scanf("%hd", &num);
	printf("%hd", num);
	return 0;
}
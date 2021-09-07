#define _CRT_SECURE_NO_WARNINGS 1
//函数判断素数
//利用上面实现的函数打印100到200之间的素数。
//#include<stdio.h>
//#include<math.h>        //sqrt库函数所包含的头文件
//int my_is_prime(int n)  //判断一个数是不是素数
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)   //只需要遍历到n的平方根那个数为止
//	{
//		if (n % i == 0)     //如果能整出，则说明不是素数
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 100; i <= 200; i++)   //遍历 100 到 200 的数字
//	{
//		ret = my_is_prime(i);     //每个数都判断一下
//		if (ret)                  //返回值为1，是素数，打印这个数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//实现函数判断year是不是润年。
//#include<stdio.h>
//int judge_leap(int year)    //判断是否为闰年，是返回1，否返回0
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) //既能被4整除，有不能被100整除
//	{                                                              //或者能被400整除的年份叫闰年
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	int ret = judge_leap(year);
//	if (ret)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//#include<stdio.h>
//void my_exchange(int* x, int* y)
//{
//	*x = *x ^ *y;      //
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数的值：");
//	scanf("%d %d", &a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	my_exchange(&a, &b);
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//void my_function(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	my_function(num);
//	return 0;
//}


//strcpy库函数使用 - 拷贝字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "xxxxxxxxxxx";
//	char b[] = "hello";
//	char* ret = strcpy(a, b);   //strcpy函数会把dest的首元素地址给返回，所以这里用一个char*指针接收
//	printf("%s\n", a);
//	//打印结果为hello，说明strcpy函数在拷贝时会把 \0 也给拷贝过去
//	return 0;
//}


//memset库函数的使用 - 把从一个地址开始的num个字节空间，修改为value
// void* memset(void* dest, int c, size_t count);
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "hello world";
//	char* ret = (char*)memset(a, 'x', sizeof(a) - 1);   // - 1 表示除 \0 以外的所有元素都修改为 x .
//	//memset库函数返回的是一个 void* 类型的指针，所以我们需要对它强制类型转换
//	printf("%s\n", ret);
//	//注意memset函数只能把从dest开始往后count个字节的空间类容修改为 c，这里是一个一个字节修改的
//	return 0;
//}


//错误示例：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 5 * sizeof(int));
//	//memset函数是一个一个字节给 1 ，不是4个字节给1
//	//故每个元素是 0000 0001 0000 0001 0000 0001 0000 0001 - 16843009
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


#include<stdio.h>
void swap(int* x, int* y)   //形式参数 - 实参的一份临时拷贝，所以需要传地址。
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	swap(&a, &b);  //实际参数
	printf("a = %d b = %d\n", a, b);
	return 0;
}
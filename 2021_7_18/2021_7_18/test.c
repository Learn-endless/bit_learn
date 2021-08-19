#define _CRT_SECURE_NO_WARNINGS 1
//写代码将三个整数数按从大到小输出。
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)        //找出a和b中最大的数放到a中去
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)       //a，b，c中最大的数放到a中去
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)   //b，c中最大的数放到b中去
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//	return 0;
//}


//打印3的倍数的数 - (1-100)
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 3; i < 100; i += 3)
	{
		printf("%d ", i);
	}
	return 0;
}
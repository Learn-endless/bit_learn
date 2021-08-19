#define _CRT_SECURE_NO_WARNINGS 1
//给定两个数，求这两个数的最大公约数(辗转相除法)
//#include<stdio.h>
//int my_function(int x, int y)
//{
//	int temp = 1;
//	while (temp)      //不能被整除时继续
//	{
//		temp = x % y; //余数给temp
//		x = y;        //y的值给x
//		y = temp;     //temp的值给y
//	}
//	return x;   //当temp为0时，x中存放的就是最大公约数
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	int ret = my_function(a, b);
//	printf("最大公约数为：%d\n", ret);
//	
//	return 0;
//}


//打印1000年到2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) //能被4整除，且不能被100整除，或者能被400整除的为闰年
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//试除法-版本1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)     //遍历100-200之间的数
//	{
//		for (j = 2; j < i; j++)      //2到这个数之前的数能整除它，就break跳出，进行下一个数的遍历
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}  
//		if (j == i)                  //如果j == i说明break没有执行，是素数，打印出来
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//试除法-版本2
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)     //遍历100-200之间的数
//	{
//		for (j = 2; j <= i/2 ; j++)      //2到这个数之前的数能整除它，就break跳出，进行下一个数的遍历
//		{                                
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i/2)                  //如果j == i说明break没有执行，是素数，打印出来
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//试除法-版本3
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)     //遍历100-200之间的数
//	{
//		for (j = 2; j <= sqrt(i); j++)      //2到这个数之前的数能整除它，就break跳出，进行下一个数的遍历
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))                  //如果j == i说明break没有执行，是素数，打印出来
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int count = 0;  //计数器
//	int i = 0; //1 - 100之间的整数
//	for (i = 1; i <= 100; i++)
//	{
//		int num = i;
//		while (num)           //当num不为0时，说明这个数还没统计完
//		{
//			if (num % 10 == 9)    //如果那一位是9，计数器加1
//			{
//				count++;
//			}
//			num /= 10; //把num除10赋值给本身
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//此方法只适用于统计两位数或两位数以下
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 0;
//	double sum = 0.0;
//	for (j = 1; j <= 100; j++)
//	{
//		sum += i * 1.0 / j;
//		i = -i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10 个整数中最大值
//#include<stdio.h>
//my_find(int* arr, int a)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入10个整数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = my_find(arr, 10);
//	printf("MAX = %d\n", max);
//	return 0;
//}


//在屏幕上输出9 * 9乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-4d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include<stdio.h>
//int my_seek(int* p, int n, int f)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)        //right指向的位置有数据，所以要加等号 [left,right]
//	{
//		int mid = (left + right) / 2;
//		if (*(p + mid) < f)
//		{
//			left = mid + 1;  //左边的数据去得到，所以 mid + 1
//		}
//		else if(*(p+mid) > f)
//		{
//			right = mid - 1; //右边的数据去得到，mid - 1
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int number = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	printf("请输入需要查找的数：");
//	scanf("%d", &a);
//	int ret = my_seek(arr, number, a);
//	if (ret != -1)
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	else
//	{
//		printf("没找到！");
//	}
//	return 0;
//}


#include<stdio.h>
int my_seek(int* p, int n, int f)
{
	int left = 0;
	int right = n;
	while (left < right)        //right指向的位置没有数据，不需要加等号 [left,right)
	{
		int mid = (left + right) / 2;
		if (*(p + mid) < f)
		{
			left = mid + 1;  //左边的数据去得到，所以 mid + 1
		}
		else if (*(p + mid) > f)
		{
			right = mid; //右边的数据取不到,不用-1
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int number = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	printf("请输入需要查找的数：");
	scanf("%d", &a);
	int ret = my_seek(arr, number, a);
	if (ret != -1)
	{
		printf("找到了，下标为：%d\n", ret);
	}
	else
	{
		printf("没找到！");
	}
	return 0;
}
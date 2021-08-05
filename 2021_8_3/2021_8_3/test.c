#define _CRT_SECURE_NO_WARNINGS 1
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分
//#include<stdio.h>
//void my_swap(int* p, int n)
//{
//	int left = 0;                  
//	int right = n - 1;         
//	while (left < right)           // 只有在范围内找到的left和right才是需要交换的
//	{
//		while ((*(left + p) % 2 == 1) && (left < right))  //从左往右找第一个偶数，并且一定要在left < right这个范围内，不然就不需要交换
//		{
//			left++;
//		}
//		while ((*(right + p) % 2 == 0) && (left < right)) //从右往左找第一个奇数，同理也要在范围内
//		{
//			right--;
//		}
//		if (left < right)       //判断找到的偶数和奇数是否在left<right这个范围内，满足则需要交换，否则不用交换。
//		{
//			int temp = 0;
//			temp = *(left + p);
//			*(left + p) = *(right + p);
//			*(right + p) = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int sz = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入整数的数量：");
//	scanf("%d", &sz);                  //自己决定输入的整数的个数。
//	printf("请输入一组整数：");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	my_swap(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//调试程序：下面程序会出现什么—死循环！！！
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)        //这里的for循环循环了12次，而上面的数组只有10个元素
//    {                                //所以这里就是非法访问了，但运行程序不会报错，只会死循环
//        arr[i] = 0;                  //原因：
//        printf("hello bit\n");       //    1.局部变量的空间开辟，是在栈上。
//    }                                //    2.而栈上的使用规则：先使用高地址，后使用低地址。
//    return 0;                        //    3.数组随着下标的变大，地址也是连续变大的。
//}                                    //    4.由于程序是从上至下运行的，所以i先在栈上开辟空间，再接着开辟数组的空间。
//                                     //    而这里数组的访问是从小下标到大，并且越界访问至了下标为12的空间，把它改为了0，
//                                     //    这时就出问题了，下标为12的空间正好是变量i的空间，这就使得i也改为了0，
//                                     //    当for循环继续下去，就会判断i满足条件，就死循环了。


//探索栈上的空间使用
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//在Debug版本下地址从高到低为：&i > &arr[9] > &arr[0]
//	printf("%p\n", &i);                    //在Release版本下则是：&arr[9] > &arr[0] > &i
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//	return 0;
//}


//求n的阶乘之和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	long long sum = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入n的值》");  //提示一下
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)  //把每个数的阶乘加起来
//	{
//		long long ret = 1;          //创建一个变量存放每个数的阶乘，注意：每个求完之后都需要初始化为1。
//		for (j = 1; j <= i; j++) //求出每个的阶乘
//		{
//			ret *= j;
//		}
//		sum += ret;           //把每个数的阶乘加起来
//	}
//	printf("%lld\n", sum);
//	return 0;
//}


//调试—调用堆栈(分析现象)：先使用高地址，后使用低地址
#include<stdio.h>
void test3()
{
	;
}
void test2()
{
	test3();
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}
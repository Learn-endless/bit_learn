#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//void my_function(int n)
//{
//	if (n == 0)
//	{
//		return;
//	}
//	else
//	{	
//		my_function(n / 10);
//        printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	my_function(num);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归实现n的阶乘
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d的阶乘为：%d\n", n, ret);
//	return 0;
//}

//递归实现n的阶乘
//#include<stdio.h>
//int my_function(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * my_function(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	int ret = my_function(n);
//	printf("%d的阶乘为%d\n", n, ret);
//	return 0;
//}

//递归和非递归分别实现strlen
//非递归实现strlen
//#include<stdio.h>
//#include<assert.h>
//size_t my_total(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while ('\0' != *p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("请输入一个字符串：");
//	gets(str);
//	size_t ret = my_total(str);
//	printf("该字符串的长度为：%u", ret);
//	return 0;
//}


//递归实现strlen函数
//#include<stdio.h>
//#include<assert.h>
//size_t my_function(const char* p)
//{
//	assert(NULL != p);
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_function(++p); //这里注意需要使用前置加加，或者 p+=1 这样写
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("请输入一个字符串：");
//	gets(str);
//	size_t ret = my_function(str);
//	printf("该字符串的长度为：%u\n", ret);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* star, char* end)
//{
//	if (star>= end)
//	{
//		return;
//	}
//	else
//	{
//		char temp = *star;
//		*star = *end;
//		*end = temp;
//		reverse_string(++star, --end);
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("请输入一个字符串：");
//	gets(str);
//	int ret = strlen(str);
//	reverse_string(str, str + ret - 1); // 需要给出首字符的地址和最后一个字符的地址（不是\0）
//	printf("%s", str);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;        //加法时0没有影响
//	}
//	else
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("输入一个非负整数n：");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d的各个位的数字之和：%d\n", n, ret);
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//long long my_function(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * my_function(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k的值》");
//	scanf("%d %d", &n, &k);
//	long long ret = my_function(n, k);
//	printf("n的k次方的值为：%lld\n", ret);
//	return 0;
//}


//非递归的方法求解第n个斐波那契数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a1 = 1;
//	int a2 = 1;
//	int i = 0;
//	int an = 1;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	for (i = 0; i < n - 2; i++)
//	{
//		an = a1 + a2;
//		a1 = a2;
//		a2 = an;
//	}
//	printf("第%d个斐波那契数是%d\n", n, an);
//	return 0;
//}


//递归法求第n个斐波那契数
//#include<stdio.h>
//int my_function(int n)
//{
//	if (n <= 2)       //第一项和第二项都是 1
//	{
//		return 1;
//	}
//	else
//	{
//		return my_function(n-1) + my_function(n-2);  //要求的那一项就是前两项之和
//
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	int ret = my_function(n);
//	printf("第%d个斐波那契数是：%d\n", n, ret);
//	return 0;
//}

//函数：先声明后使用
//#include<stdio.h>
//int Add(int, int);    //声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d + %d = %d\n", a, b, ret);
//	return 0;
//}
//int Add(int x, int y)    //定义
//{ 
//	return x + y;
//}


//函数的正确使用
//#include<stdio.h>
//#include"Add.h"
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d", ret);
//	return 0;
//}


//函数递归
//输入一个整数，打印它的每一位
//#include<stdio.h>
//void print(size_t n)
//{
//	if (n > 9)      //递归的限制条件
//		print(n / 10);  //每执行一次，就会越来越逼近上面的限制条件
//
//	printf("%d ", n % 10);  //这里不能加else，这句代码必须每次都执行
//}
//int main()
//{
//	size_t n = 0;
//	scanf("%u", &n);
//	print(n);
//
//	return 0;
//}


//递归求解字符串的长度
//#include<stdio.h>
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}


//递归求解n的阶乘
//#include<stdio.h>
//int fac(int n)
//{ 
//	if (n == 1)         //n小于等于1时，阶乘为1
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);   //大于1时，n的阶乘就等于 n 乘上 n - 1 的阶乘
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d的阶乘为》%d\n", n, ret);
//	return 0;
//}


//用递归实现求第n个斐波那契数 - 最好不要使用递归
//#include<stdio.h>
//int fib1(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib1(n - 1) + fib1(n - 2);
//	}
//}
////迭代法(循环) - 更好实现
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//汉诺塔问题
//青蛙跳台阶问题

#include<stdio.h>

void Mergelist(int* La, int* Lb, int* Lc)
{
	InitList(Lc);
	int i = 1;
	int j = 1;
	int k = 0;
	int ai = 0;
	int bj = 0;
	int La_len = ListLength(La);
	int Lb_len = ListLength(Lb);
	while ((i <= La_len) && (j <= Lb_len))
	{
		GetElem(La, i, ai);
		GetElem(Lb, j, bj);
		if (ai <= bj)
		{
			ListInsert(Lc, ++k, ai);
			++i;
		}
		else
		{
			ListInsert(Lc, ++k, bj);
			++j;
		}
	}
	while (i <= La_len)
	{
		GerElem(La, i++, ai);
		ListInsert(Lc, ++k, ai);
	}
	while (j <= Lb_len)
	{
		GerElem(Lb, j++, bj);
		ListInsert(Lc, ++k, bj);
	}
}
int main()
{
	int arr1[10] = { 1,4,2,5,3 };
	int arr2[10] = { 6,8,9,10,7 };
	int arr3[100] = { 0 };
	int i = 0;
	//归并
	Mergelist(arr1, arr2, arr3);
	//打印排序后的数据
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(arr3 + i));
	}
	return 0;
}
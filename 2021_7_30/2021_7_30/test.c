#define _CRT_SECURE_NO_WARNINGS 1

//多组输入
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)    //打印的行数
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)  //每行打印的内容
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)  //第一行、最后一行、第一列 和 最后一列 均打印 *+空格
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");   //别的地方打印两个空格
//				}
//			}
//			printf("\n");  //一行打印完换行
//		}
//	}
//	return 0;
//}

//输入一组数 - 7个整数，去掉最大值和最小值，求平均值
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int i = 0;      //用来控制循环次数
//	int input = 0;  //接收输入的数据
//	int max = INT_MIN;    //用来存放最大值
//	int min = INT_MAX;    //用来存放最小值
//	int sum = 0;    //用来存放7个数的和
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &input);
//		sum += input;          //每次累加在一起
//		if (max < input)
//		{
//			max = input;       //比max大，更新一下max的值
//		}
//		if (min > input)
//		{
//			min = input;       //比min小，更新一下min的值
//		}
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}


//输入a，b，c三条边的值，判断是否能构成三角形，并且所构成的三角形的类型是什么
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)   //多组输入a，b，c的值
//	{
//		//判断能否构成三角形
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			//判断是否为特殊的三角形
//			if (a == b && b == c)   //先判是不是等边
//			{
//				printf("Equilateral triandle!\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))  //再判是不是等腰
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else   //其他的就是普通三角形
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}


//交换两个整形数组的内容
//#include<stdio.h>
//void exchange(int* a1, int* a2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = *(a1 + i);
//		*(a1 + i) = *(a2 + i);
//		*(a2 + i) = temp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
//
//	int sz = sizeof(arr1) / sizeof(arr2[0]);  //计算数组的元素个数
//	exchange(arr1, arr2, sz);
//
//	int i = 0;
//	for (i = 0 ; i < sz; i++)
//	{
//		printf("%d ", *(arr1 + i));
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr2 + i));
//	}
//
//	return 0;
//}


//对一个整形数组进行初始化、逆序和打印 - 用函数实现
//#include<stdio.h>
//void InitFunction(int* p, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(p + i) = i;
//	}
//}
//
//void Print(int* p, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//void Reverse(int* p, int n)
//{
//	int* left = p;
//	int* right = p + n - 1;
//	while (left < right)
//	{
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 8,8,8,8,8,8,8,8,8,8,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	InitFunction(arr, sz);   //初始化为0 1 2 3 4 5 6 7
//	Print(arr, sz);   //打印函数
//	Reverse(arr, sz);  //逆序函数
//	printf("\n");
//	Print(arr, sz);
//
//	return 0;
//}

//下标引用操作符
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	// [] :仅仅只是一个操作符
//	printf("%d\n", arr[4]);
//	printf("%d\n", 4[arr]);
//	// arr[4] -> *(arr + 4) -> *(4 + arr) -> 4[arr]   - 完全等价
//	//说明[]是一个操作符，arr和4只是它的两个操作数
//
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%p -- %p\n", &arr[i], arr + i);
//	//}
//	return 0;
//}


//函数调用操作符 - ()
//#include<stdio.h>
//#include<string.h>
//void test()
//{
//	printf("hello world\n");
//}
//int main()
//{
//	char ch[] = "abcdef";
//	printf("%d\n", strlen(ch));
//	printf("%u\n", strlen(ch));
//
//	test(); //在调用函数时，即使没有参数，也不能省略括号
//
//	return 0;
//}


//结构体成员访问操作符 - 结构体变量名.成员 / 结构体变量地址 -> 成员
#include<stdio.h>
#include<string.h>

struct book   //定义一个结构体类型book
{
	char name[50];
	float price;
	char id[20];
};

void print1(struct book b)  //传值调用
{
	printf("书名：%s\n", b.name);
	printf("价格：%.2f\n", b.price);
	printf("ID：%s\n", b.id);
}

void print2(struct book* b)   //传址调用
{
	printf("书名：%s\n", b -> name);
	printf("价格：%.2f\n", b -> price);
	printf("ID：%s\n", b -> id);

	printf("书名：%s\n", (*b).name);
	printf("价格：%.2f\n", (*b).price);
	printf("ID：%s\n", (*b).id);
}
int main()
{

	struct book b = { "C语言程序设计",35.5f,"C20210915" };  //创建一个结构体变量

	print1(b);
	b.price = 100.0f;
	strcpy(b.name, "数据结构"); //数组名大多时候是首元素地址
	print1(b);

	print2(&b);
	//在调用结构体变量时，最好采用址传递，减少栈空间的浪费

	return 0;
}
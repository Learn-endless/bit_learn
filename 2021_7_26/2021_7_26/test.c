#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));       // 1   字节
//	printf("%d\n", sizeof(short));      // 2   字节
//	printf("%d\n", sizeof(int));        // 4   字节
//	printf("%d\n", sizeof(long));       // 4/8 字节
//	printf("%d\n", sizeof(long long));  // 8   字节
//	printf("%d\n", sizeof(float));      // 4   字节
//	printf("%d\n", sizeof(double));     // 8   字节
//	return 0;
//}


//#include<stdio.h>
//int a = 100;           //全局变量--在代码块外部定义的变量
//int main()
//{                      
//	int a = 10;        //局部变量--在代码块中定义的变量
//
//	printf("a = %d \n", a); //全局变量与局部变量的变量名冲突时，局部优先。
//	return 0;
//}

//practise：
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	//在vs中如果想要正常使用scanf函数，就需要在工程的第一行加上：#define _CRT_SECURE_NO_WARNINGS1
//	scanf("%d %d", &a, &b);   
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//写一个函数求两个整数的较大值
#include<stdio.h>

int my_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	int Max = 0;
	scanf("%d %d", &a, &b);
	Max = my_max(a, b);
	printf("Max = %d\n", Max);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1  // 在vs中想正常使用stdio.h头文件中的库函数，就需要加上
//#include<stdio.h>        //标准输入输出头文件
//                         //std ： 标准 i ： intput o ：output
////c++中引入的写法
//int main()               //main函数，程序的入口函数-主函数-有且只有一个
//{
//	printf("hello world!\n"); //printf库函数：使用需要引用stdio.h头文件
//	                          // \n : 转义字符 - 换行
//	return 0;
//}

//早期的写法
//void main()
//{
//
//}


//sizeof的使用 - 求所占字节的大小
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));        // 1
//	printf("%d\n", sizeof(short));       // 2
//	printf("%d\n", sizeof(int));         // 4
//	printf("%d\n", sizeof(long));        // 4/8  ,c语言规定：long的长度大于等于int就行。
//	printf("%d\n", sizeof(long long));   // 8
//	printf("%d\n", sizeof(float));       // 4
//	printf("%d\n", sizeof(double));      // 8
//	//注意 sizeof 是操作符，不是函数
//	int a = 1;
//	printf("%d\n", sizeof a);       // 4
//	return 0;
//}


//局部变量 与 全局变量
//#include<stdio.h>
//int a = 10;        //全局变量，定义在大括号外面，在全局范围内使用
//int main()
//{
//	int a = 0;    //局部变量，在大括号之间的变量，大括号之间才能使用。
//	printf("%d\n", a); //当全局变量与局部变量的变量名一样时，优先使用局部变量。
//	return 0;
//}


//在vs2013中解决程序运行一闪而逝的问题
//#include<stdio.h>
//#include<stdlib.h>             //包含系统函数的头文件
//int main()
//{
//	printf("hello world!\n");
//	system("pause");           //系统函数 - 暂停，使用需要引用 stdlib.h 头文件.
//	return 0;
//}


// 加法实现
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a和b的值》");       //提示一下  
//	while (~scanf("%d%d", &a, &b))    //~操作符：按位取反
//	{                                 //当输入ctrl+z时，scanf返回-1，-1按位取反为 0，循环停止。
//		printf("%d + %d = %d\n", a, b, a + b);
//	}
//	return 0;
//}


//创建数组，及数组有关操作符
#include<stdio.h>
void test()   //void 表示没有返回值
{
	printf("hello world!\n");
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //创建一个整形数组
	printf("%d\n", arr[0]);  // [] : 下标引用操作符
	test();                  // () : 函数调佣操作符 
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//操作符 - 2
//#include<stdio.h>
//int main()
//{
	//移位操作符的操作数只能是整数
	//float a = 9.0;
	//a = a >> 1;  //  error

	// 按位与：&
	// 按位或：|
	// 按位异或：^

	//int a = 3;
	//int b = -2;
	//int c = a & b;   //按位与
	
	//printf("%d\n", c);

	//1111 1111 1111 1111 1111 1111 1111 1110 - -2的补码
	//0000 0000 0000 0000 0000 0000 0000 0011 - 3的补码
	//0000 0000 0000 0000 0000 0000 0000 0010 - 3 & (-2)  - 2
	// %d 打印，是以有符号整数打印，结果最左边一位是0，故当成正整数打印，直接打印补码(原码，反码，补码相同)

	//1000 0000 0000 0000 0000 0000 0000 0010  -  -2的原码
	//1111 1111 1111 1111 1111 1111 1111 1101  -  -2的反码
	//1111 1111 1111 1111 1111 1111 1111 1110  -  -2的补码

	//int a = 3;
	//int b = -2;
	//int c = a | b;   //按位或

	//1111 1111 1111 1111 1111 1111 1111 1110 - -2的补码
	//0000 0000 0000 0000 0000 0000 0000 0011 - 3的补码
	//1111 1111 1111 1111 1111 1111 1111 1111 - 3 | (-2)的补码

	//1111 1111 1111 1111 1111 1111 1111 1110 - 3 | (-2)的反码
	//1000 0000 0000 0000 0000 0000 0000 0001 - 3 | (-2)的原码  - -1
	
	//printf("%d\n", c);

	//int a = 3;
	//int b = -2;
	//int c = a ^ b;   //按位异或 - 同出0，异出1

	//printf("%d\n", c);
	
	//1111 1111 1111 1111 1111 1111 1111 1110 - -2的补码
    //0000 0000 0000 0000 0000 0000 0000 0011 - 3的补码
	//1111 1111 1111 1111 1111 1111 1111 1101 - 3 ^ (-2)的补码

	//1111 1111 1111 1111 1111 1111 1111 1100 - 3 ^ (-2)的反码
	//1000 0000 0000 0000 0000 0000 0000 0011 - 3 ^ (-2)的原码  -  -3

	//int a = 1;
	//a = a & (a - 1);   //n & (n - 1)：这个式子可以去掉二进制序列最右边的那个1
	//printf("%d\n", a);

	//计算一个整数的二进制序列中有多少个1
	//int a = -1;
	//int count = 0;
	//int i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (((a >> i) & 1) == 1)
	//	{
	//		count++;
	//	}
	//}
	//printf("%d\n", count);

	//交换两个整形的变量，不能使用第三个变量 - 版本一（当两个整数足够大时，可能会导致溢出）
	//int a = 3;
	//int b = 5;
	//printf("a = %d b = %d\n", a, b);

	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a = %d b = %d\n", a, b);

	//交换两个整形的变量，不能使用第三个变量 - 版本二()
	//int a = 3;
	//int b = 5;
	//printf("a = %d b = %d\n", a, b);

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;

	//printf("a = %d b = %d\n", a, b);

	//int a = 10;
	//int b = 0;
	//int c = 20;
	//c = b = a + 1;  //连续赋值
	//printf("%d\n", c);

	//逻辑操作符
	//int a = 1;
	//if (a)   //a为真时打印helloworld
	//{
	//	printf("helloworld\n");
	//}
	//if (!a)   //a为假时打印helloworld
	//{
	//	printf("helloworld\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
	//int a = 10;
	//a = -a;
	//printf("a = %d\n", a);
	//a = -a;
	//printf("a = %d\n", a);
	
	//int a = 10;
	//int* p = &a;           //*解引用操作符
	//int b = *p;  //*p指的是p指针指向那块空间里的值  -  右值（描述的是空间里的值）
	//*p = 20;     //*p指的是p指针指向的那块空间  -  左值（描述的是那块空间）

	//printf("a = %d\n", *p);

	//int arr[3][5] = { 1,2,3,4,5,6,7,8,9 };
	//int(*p)[5] = &arr[0];
	//printf("%d ", p[0][0]);

	//char ch[10] = "123";
	//int a = sizeof(ch);
	//int b = strlen(ch);
	//printf("%d\n", a);
	//printf("%d\n", b);

	//sizeof()是操作符，不是函数
	//int a = 5;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(int));  //szieof在求类型的大小时，不能省略括号

	//int a = 5;
	//short s = 10;
	//printf("%d\n", sizeof(s = a + 2));  //sizeof()操作符，括号里面并不会真正运算
	//printf("%d\n", s);

	//  ~ :按位取反
	//int a = 0;
	//int b = ~a; 

	//printf("%d\n", b);

	//int a = 13;
	//a |= 1 << 1;
	//printf("%d\n", a);
	//a &= ~(1 << 1);
	////0000 0000 0000 0000 0000 0000 0000 1101 - 13
	////0000 0000 0000 0000 0000 0000 0000 1111 - 15
	//printf("%d\n", a);

	//int a = 10;
	//int b = a++;       //后置加加，先使用，后加加
	//printf("%d\n", b);
	//printf("%d\n", a);

	//b = ++a;          //前置加加，先加加，后使用
	//printf("%d\n", b);
	//printf("%d\n", a);

	//错误的代码
	//int a = 1;
	//int b = (++a) + (++a) + (++a); // - error

	//int a = 0;
	//a = (int)3.14;  //强制类型转换

//	return 0;
//}


//下面代码的结果是什么
//#include <stdio.h>
//
//void test1(int arr[10])//int *,本质上是一个指针
//{
//	printf("%d\n", sizeof(arr));//(2) - 4/8
//}
//void test2(char ch[10])//char*，本质上是一个指针
//{
//	printf("%d\n", sizeof(ch));//(4) - 4/8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1) - 40
//	printf("%d\n", sizeof(ch));//(3) - 10
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}


//逻辑操作符
//#include<stdio.h>
//
//int main()
//{
//	int a = 5;
//	int b = 0;
//
//	int c = a && b;    //逻辑与 - 有一个为假，另一个就不运行了，直接判定表达式为假。
//	int d = a || b;    //逻辑或 - 有一个为真，另一个就不运行了，直接判定表达式为真。
//
//	printf(" c = %d \n", c);
//	printf(" d = %d \n", d);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int age = 0;
//	if (age >= 10 && age <= 30)  //age >= 10 为假，所以 age <= 30 并不会判断
//	{
//		printf("hehe\n");
//	}
//	if (age < 10 || age>30)  // age < 10为真，所以 age > 30 也不会判断
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//下面的几段代码可以看出: && 碰到有一个为假时，直接判定整个表达式为假
//                        || 碰到有一个为真时，直接判定整个表达式为真
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
//
//	return 0;
//}


//三目操作符 / 条件操作符
//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m = 0;
//
//	m = ((a > b) ? (a) : (b));
//
//	//((a > b) ? (m = a) : (m = a));  // -- 这种写法很不常见
//
//	return 0;
//}

//逗号表达式 - 从左向右依次计算，最后一个表达式的值就是整个表达式的值
#include<stdio.h>
int main()
{
	int a = 5;
	int b = 1;
	int c = (a = 6, b = a + 5, a + b);
	//       a = 6  b = 11  c = 17
	printf("a = %d b = %d c = %d\n", a, b, c);

	return 0;

}
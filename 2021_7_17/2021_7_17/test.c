#define _CRT_SECURE_NO_WARNINGS 1
//操作符简略
#include<stdio.h>
//int main()
//{
//	int a = 7 / 2;
//	int b = 7 % 2;  //取模/余
//	float c = 7.0 / 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%f\n", c);
//
//    // <<：左移操作符，>>：右移操作符
//	int n = 12;
//	int m = n << 1;
//	//0000 0000 0000 0000 0000 0000 0000 1100 - 12
//	//0000 0000 0000 0000 0000 0000 0001 1000 - 12 << 1 - 24
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	// & : 按位与
//	// | : 按位或
//	// ^ : 按位异或
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	printf("%d\n", e ^ 5);
//	printf("%d\n", e ^ 5);
//	return 0;
//}

//int main()
//{
//	//3 + 5 //+:双目操作符
//	//3 和 5 位操作数
//	//!3  //!:单目操作符
//	int flag = 3; //C语言中怎么判断真或假
//	//在C语言中0为假，非0为真
//
//	if (flag != 0)  //等价于：if(flag)
//	{
//		printf("hello\n");
//	}
//	if (!flag)   //如果 flag 为假，打印haha
//	{ 
//		printf("haha\n");
//	}
//	flag = 0;
//	int b = !flag;     //!0 == 1
//	printf("%d\n", b);
//
//	return 0;
//}

int main()
{
	int a = 0;
	printf("%d\n", sizeof(char));   //sizeof:它是一个操作符,不是函数
	printf("%d\n", sizeof(short));  //sizeof short :不能这么写，编译器不能识别这两个关键字在一起所表达的意思
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof a);   //等价于sizeof(a)

	//计算数组元素的个数：
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	//strlen 是库函数，后面必须加括号，也要引头文件<string.h>
	return 0;
}
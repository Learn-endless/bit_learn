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

//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(char));   //sizeof:它是一个操作符,不是函数
//	printf("%d\n", sizeof(short));  //sizeof short :不能这么写，编译器不能识别这两个关键字在一起所表达的意思
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof a);   //等价于sizeof(a)
//
//	//计算数组元素的个数：
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//strlen 是库函数，后面必须加括号，也要引头文件<string.h>
//	return 0;
//}


// ++ 和 --
//int main()
//{
//	int a = 10;
//	int b = a++;         //后置++
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int c = 10;
//	int d = ++c;          //前置++
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	int n = 1;
//	int m = (++n) + (++n) + (++n);    //错误的代码，不同编译器下的结果会不同
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	float a = 3.0;
//	int b = (int)a;   //强制类型转换：尽量少用
//
//	int x = (3 > 5);
//	if (x)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Max = 0;
//	if (a > b)
//	{
//		Max = a;
//	}
//	else
//	{
//		Max = b;
//	}
//	int MAX = a > b ? a : b;  //C语言中唯一一个三目操作符，
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 6;
//	int d = (a -= 2, b = a + c, c = a - b);    //逗号表达式（逗号表达式的优先级小于赋值操作符）
//	printf("%d\n", d);                         //整个表达式的值就是最后一个表达式的值
//	return 0;
//}

//int main()
//{
//	float a = 0.0;
//	a = 3.14f;  //3.14默认的是double类型的，加f表示它是float类型
//	auto int b = 10;   //auto:自动,通常省略掉
//	// extern:函数声明关键字
//	//register:寄存器关键字
//	return 0;
//}


//static修饰局部变量：延长了局部变量的生命周期，但是作用域没变
//static修饰全局变量：让它的外部链接属性变成了内部链接属性，使它只能在这个.c文件中使用
        //全局变量本身就有外部链接属性
//static修饰函数：与修饰全局变量一样。
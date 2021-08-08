#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，可以逆序字符串的内容，并打印出来
//#include<stdio.h>
//#include<string.h>
//char* reverse_order(char* n)      
//{
//	char* left = n;                 //创建一个指针，指向数组的首元素地址
//	char* right = n + strlen(n) - 1;//创建一个指针，指向数组的最后一个元素的地址，\0之前的那个元素
//	while (left < right)            //当左指针的地址小于有指针的地址时，循环进行
//	{
//		char temp = *left;          //创建一个临时变量，用来交换 left 和 right 指针指向的内容
//		*left = *right;
//		*right = temp;
//		left++;             //每循环一次，左边的指针右移一位
//		right--;            //右边的指针左移一位
//	}
//	return n;          //返回首元素地址
//}
//int main()
//{
//	char arr[100] = { 0 };  //创建一个数组，用来存放字符串
//	char* p = NULL;         //定义一个空指针，用来接收逆转函数的返回值
//	printf("请输入一个字符串》"); 
//	gets(arr); 
//	p = reverse_order(arr);
//	printf("%s\n", p);
//	return 0;
//}



//打印菱形
//#include<stdio.h>
//void my_printf(int line)
//{
//	int i = 0;
//	int j = 0;
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印每一行的内容
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			//先打印每一行之前的空格
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1 ; j++)
//		{
//			//打印空格之后的*号
//			printf("*");
//		}
//		printf("\n");   //每一行打印之后，换行。
//
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印每一行的内容
//		for (j = 0; j <= i ; j++)
//		{
//			//先打印每一行之前的空格
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line - 1 - i) - 1; j++)
//		{
//			//打印空格之后的*号
//			printf("*");
//		}
//		printf("\n");   //每一行打印之后，换行。
//	}
//}
//int main()
//{
//	int line = 0;
//	printf("请输入菱形上半部分的行数》");
//	scanf("%d", &line);
//	my_printf(line);        //自定义打印函数
//	return 0;
//}



//printf函数后面可以直接跟数组名或地址
//#include<stdio.h>
//int main()
//{
//	char arr[] = "Hello world!";     //创建一个数组，并初始化 "Hello world!" 。
//	char* p = "Hello world!";        //创建一个指针，指向常量字符串 "Hello world!" 中 H 的地址
//	printf("Hello world!\n");        //直接使用库函数，打印 "Hello world!"。
//	printf(p);                       //printf（）库函数，直接传指针 p
//	printf("\n");
//	printf(arr);                     //printf（）库函数，直接传 arr 数组的首元素地址
// //结果上面的输出结果是一模一样的。
//	return 0;
//}



//喝汽水
//#include<stdio.h>
//int main()
//{
//	int total = 0;
//	int empty = 0;
//	int money = 0;
//	printf("请输入钱数》");
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = money * 2 - 1;
//		printf("%d\n", total);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	return 0;
//}


//数据存储——剖析
//#include<stdio.h>
//int main()
//{
//	signed int a1 = 0;
//	signed short int b1 = 0;   
//	signed long int c1 = 0;
//
//// 以上的代码，可以省略为：（在任何编译器中，上面和下面都是等价的）
//	int a = 0;
//	short b = 0;
//	long c = 0;
//// 如果需要无符号的数：(就需要以下定义)
//	unsigned int d1 = 0;
//	unsigned short d2 = 0;
//	unsigned long d3 = 0;
//
//// 有一个特例，就是 char 
//	char o = 0;  //这时我们定义的 char 到底是 signed 还是 unsigned 这完全取决于我们所用的编译器是怎么认为的。
//
//	return 0;
//}


//C语言标准：只规定了 库函数 的返回值类型，参数类型，和 函数对应需要实现的功能。
//比如：size_t strlen( const char *string );
//库函数 和 C语言标准 之间没有直接的连接
//生产编译器的厂商，他们自己来选择是否携带库函数。


//了解在内存中，无符号数和有符号数的存放
//#include<stdio.h>
//int main()
//{
//	unsigned char a = 255;
//	char b = 255;
//	printf("%d\n", a);     
//	printf("%d\n", b);     
////由于255的原码：                                                             1111 1111 1111 1111 1111 1111 1111 1111
////在unsigned char 中内存就会把它看成一个无符号数，没有符号位，所以都是有效位：%d打印就是255
////而在 char 中，又因为vs2019 会把它看成 signed char 所以，二进制位的第一位便是符号位：
////   1111 1111  --原码
////   1000 0000  --反码
////   1000 0001  --补码（内存中所存储的）
////   %d 打印出来就是 -1
//
////所以在内存中，unsigned char 的范围就是：0 - 255
////              signed char 的范围就是：-128 - 127
//// 注意：计算机遇到 1000 0000 -原码，就会直接看成 -128
//	return 0;
//}


//void的使用
//#include<stdio.h>
//void test(void)             //当我们不想要参数时，可以不写括号里的内容，但有时，函数明明没有参数，我们却不小心
//{                           //给它传了一个参数，这时如果不填，编译器就不会给我们提示，这里如果填上 void 
//	printf("hello world\n");//那么即使我们不小心传参了，这时就会报警告
//}
//int main()
//{
//	test(100);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
////1000 0000 0000 0000 0000 0000 0000 0001  - 原码
////1111 1111 1111 1111 1111 1111 1111 1110  - 反码
////1111 1111 1111 1111 1111 1111 1111 1111  - 补码
//	return 0;
//}


//探讨数据存储的顺序，什么是大端字节序存储模式，什么又是小端字节序存储模式。
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int b = 0x12345678;
//	return 0;
//}


//判断机器是大端存储，还是小端存储 - 用函数实现
//#include<stdio.h>
//int check(void)           //函数不需要参数。
//{
//	int a = 1;
//	char* p = (char*)&a;  //用一个 char* 的指针指向a的地址。
//	return (*p);       //返回 char* 指针解引用一个字节的内容。
//}
//
//int main()
//{
//	int ret = check(); //自定义函数，返回1时——小端字节序存储
//	if (ret)           //            返回0时——大端字节序存储
//	{
//		printf("小端字节序存储！\n");
//	}
//	else
//	{
//		printf("大端字节序存储！\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234; unsigned char b = *(unsigned char*)&a;
//	return 0;
//}



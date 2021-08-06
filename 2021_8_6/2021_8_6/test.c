#define _CRT_SECURE_NO_WARNINGS 1
//8_6的练习
//获取月份和天数
//#include<stdio.h>
//#include<assert.h>                 //断言的头文件
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };   // 创建一个数组，存放一年中每月的天数。
//    while (~scanf("%d %d", &year, &month)) //多组输入，当输入错误时结束程序。
//    {
//        assert(month > 0);                 //加上断言，确保输入的年份和月份有效。
//        assert(year > 0);
//        if (month == 2)                    //判断一下是否为2月。
//        {
//            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)      // 判断是否为闰年的二月。
//            {
//                printf("%d\n", 29);         //闰年的2月只有29天。
//            } 
//            else
//            {
//                printf("%d\n", arr[1]);     //不是闰年的2月，天数为28。
//            }
//        }
//        else
//        {
//            printf("%d\n", arr[month - 1]); //其它的月份，依照数组的内容打印即可。                               
//        }                                   //注意：这里输入的是1-12，而数组的下标是从0开始的。
//
//    }
//    return 0;
//}



//7_29练习
//下面这段代码的结果：
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;           //前置++， a = 6, c = 6
//	b = ++c, c++, ++a, a++; // ，的优先级比 = 号高， b = 7 ， c = 8 , a = 8
//	b += a++ + c; //+ 号的优先级比 += 高，b = 23， a = 9， c = 8
//	printf("a = %d b = %d c = %d\n:", a, b, c);  //结果：a = 9， b = 23， c = 8
//	return 0;
//}




//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子:
//         1999 2299
//输出例子:7
//#include<stdio.h>
//int count(int x, int y)  //自定义统计函数
//{
//    int count = 0;       //计数器
//    int temp = x ^ y;    //把 a 与 b 异或的值放到 temp 中      按位异或：同出0，异出1
//    while (temp)         //当 temp 为 0 时，结束循环
//    {
//        temp = temp & (temp - 1);   //每次消除最右边的那个 1 。
//        count++;         //消除一个，计一个数
//    } 
//    return count;        //把不同位的个数返回去
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int ret = 0;
//    scanf("%d %d", &a, &b); // 输入需要比较的两个数
//    ret = count(a, b);      // ret接收返回的不同位的个数
//    printf("%d\n", ret);
//    return 0;
//}



//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	printf("请输入一个整数》");          //提示一下
//	scanf("%d", &n);                     //输入一个整数
//	printf("偶数位的二进制序列：");      //提示：偶数位打印
//	for (i = 31; i >= 1; i -= 2)         //先打印高位，后打印低位 ，从第32位开始
//	{
//		ret = (n >> i) & 1;              //左移 i 位 & 1，结果就是那个二进制位
//		printf("%d ", ret);
//	}
//	printf("\n奇数位的二进制序列：");    //提示：奇数位打印
//	for (i = 30; i >= 0; i -= 2)         //从第31位开始
//	{
//		ret = (n >> i) & 1;
//		printf("%d ", ret);
//	}
//	return 0;
//}



// 写一个函数返回参数二进制中 1 的个数。
// 比如： 15    0000 1111    4 个 1
//#include<stdio.h>
//size_t my_stat_bit_1(int x)
//{
//	unsigned int count = 0;              //计数器
//	while (x)
//	{
//		x = x & (x - 1);        //每次去掉该二进制位最右边的那个1
//		count++;                //计数器加1
//	}
//	return count;               //返回1的个数
//}
//int main()
//{
//	int n = 0;
//	unsigned int ret = 0;                     //创建一个变量，用于接收函数的返回值
//	printf("请输入一个整数》");      //提示一下
//	scanf("%d", &n);      
//	ret = my_stat_bit_1(n);          //函数调用
//	printf("1的个数为：%u\n", ret);
//	return 0;
//}



//不允许创建临时变量，交换两个整数的内容
//#include<stdio.h>
//void Exchange(int* x, int* y) //函数没有返回值
//{
//	*x = *x ^ *y;           //先把 a 与 b 的值异或，放到 a 中
//	*y = *x ^ *y;           //再把异或的值与 b 异或得到原来 a 的值，放到 b 中
//	*x = *x ^ *y;           //最后异或的值与现在的 b 异或得到原来 b 的值，放到 a 中去。
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数》");
//	scanf("%d %d", &a, &b);  
//	printf("a = %d , b = %d\n", a, b);      //原来a和b中存放的值。
//	Exchange(&a, &b);     //用传地址的方法。
//	printf("a = %d , b = %d\n", a, b);      //交换后a和b中存放的值。
//	return 0;
//}



//函数栈帧
//用下面的简单代码，了解一下函数栈帧
#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("%d\n", c);
	return 0;
}
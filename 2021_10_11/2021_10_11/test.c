#define _CRT_SECURE_NO_WARNINGS 1
//定义一个宏，用来交换一个整数的二进制序列中的奇数位和偶数位
//#include<stdio.h>
//#define EXCHANGE(m) (((m&0xaaaaaaaa)>>1) + ((m&0x55555555)<<1))
////1010 1010 1010 1010 1010 1010 1010 1010 - 0xaaaaaaaa - 保留奇数位
////0101 0101 0101 0101 0101 0101 0101 0101 - 0x55555555 - 保留偶数位
////然后分别右移和左移，结果相加起来
//int main()
//{
//	int n = 10;
//	int ret = EXCHANGE(n);
//	printf("%d\n", ret);
//	return 0;
//}


//用宏模拟实现offsetof库函数
//size_t offsetof( structName, memberName );
//offsetof：求结构体变量中成员的偏移量
//#include<stdio.h>
//#include<stddef.h>
//#define OFFSETOF(type_name,name) (int)&(((type_name*)0) -> name)
//struct stu
//{
//	int a;      //对齐数4
//	char b;     //对齐数1
//	double c;   //对齐数8
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct stu, a));
//    printf("%d\n", OFFSETOF(struct stu, b));
//    printf("%d\n", OFFSETOF(struct stu, c));
//
//	//printf("%d\n", offsetof(struct stu, a)); //offsetof的参数是类型名和变量名
//	//printf("%d\n", offsetof(struct stu, b));
//	//printf("%d\n", offsetof(struct stu, c));
//
//	return 0;
//}


//#include<stdio.h>
//#define N 4
//#define Y(n) ((N+2)*n) /*这种定义在编程规范中是严格禁止的*/
//int main()
//{
//	int z = 0;
//	z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	return 0;
//}


#include<stdio.h>
#define A 2+2
#define B 3+3
#define C A*B
int main()
{
	printf("%d\n", C);
	return 0;
}
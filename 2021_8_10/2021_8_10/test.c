#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	for (k = 0; k < 4; k++) 
//	{
//		q[k] = &a[k * 3];
//	}
//		printf("%d\n", q[3][1]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        Sleep(1000); //每打印一个停一段时间
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d\n", i);// 用有符号十进制整数打印
//        Sleep(1000); //每打印一个停一段时间
//    }
//    return 0;
//}

#include<stdio.h>
#include<windows.h>
int main()
{
    int i;
    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", i);// 用有符号十进制整数打印
        Sleep(1000); //每打印一个停一段时间
    }
    return 0;
}
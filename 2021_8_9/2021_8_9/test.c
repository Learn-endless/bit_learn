#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	//0000 0000 0000 0000 0000 0000 1100 1000
//	//1100 1000
//	unsigned char b = 100;
//	//0000 0000 0000 0000 0000 0000 0110 0100
//	//0110 0100
//	//0000 0000 0000 0000 0000 0001 0010 1100 - 300
//	//0010 1100 - 44
//	unsigned char c = 0;
//	c = a + b;
//	printf("% d % d", a + b, c);
//	return 0;
//}


//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{//-1,-2,-3,-4 ... -128,127,126,125,124 ... 1,0,-1,-2,-3 ...
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); //只统计到 \0 处。128+127 = 255
//	return 0;
//}

//#include <stdio.h>
//
//void swapArgs(int* a, int* b) //交换函数
//{
//	int tmp;
//
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

//void diveRank(int* p, int n)
//{
//	if (n >= 5) //此时的n也是用来控制循环层数的。
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//			(p[4] == 4) + (p[0] == 1) == 1)   //我第四，A第一
//			//由于此时是执行的全排列，所以查重也省了。
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	int i;
//	for (i = n; i < 5; i++) //这个递归方式就完成了对1~5的全排列，方法是从后向前不停的执行交换。可以参考改进二和原代码，将这个递归程序写回成循环后，可以更好的理解。
//	{
//		swapArgs(p + i, p + n);
//		diveRank(p, n + 1);
//		swapArgs(p + i, p + n);
//	}
//}
//
//int main()
//{
//	int p[5] = { 1, 2, 3, 4, 5 }; //当然由于是全排列，所以初值必须给好。
//
//	diveRank(p, 0);
//
//	return 0;
//}


//题1
//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}


//题2
//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    return 0;
//}


//题3
//#include <stdio.h>
//int main()
//{
//    char a = 128;
//    printf("%u\n", a);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}


//题四
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}


//题5
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}


//题6
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//	return 0;
//}


//题7
//#include<stdio.h>
//
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		//printf("%u\n", i);    //用于查看i的值是不是总是大于等于0。
//	}
//
//	return 0;
//}


//浮点数的存储
#include<stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	return 0;
}
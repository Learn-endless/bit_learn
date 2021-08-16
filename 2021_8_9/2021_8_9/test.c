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
//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	return 0;
//}


//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//#include<stdio.h>
//int my_function(int* p)
//{
//	int n[7] = { 0 };  //arr数组中最高可存放到6，故 n 需要 7 个元素空间//初始化为 0 ，表示没有标记
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (1 == n[p[i]]) //表示有重复，返回0.
//		{
//			return 0;     
//		}
//		n[p[i]] = 1; //没有重复，标记为 1
//	}
//	return 1; //没有一次重复，返回 1 
//}                      
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 }; //定义一个数组，存放 a b c d
//	for (arr[0] = 1; arr[0] <= 5; arr[0]++)   //循环当a为 1 2 3 4 5名时
//	{
//		for (arr[1] = 1; arr[1] <= 5; arr[1]++)   //循环当b为 1 2 3 4 5名时
//		{
//			for (arr[2] = 1; arr[2] <= 5; arr[2]++)   //循环当c为 1 2 3 4 5名时
//			{
//				for (arr[3] = 1; arr[3] <= 5; arr[3]++)   //循环当d为 1 2 3 4 5名时
//				{
//					for (arr[4] = 1; arr[4] <= 5; arr[4]++)   //循环当e为 1 2 3 4 5名时
//					{
//						if ((arr[1] == 2) + (arr[0] == 3) == 1 &&  //判断每个人说的话是不是只对了一半
//							(arr[1] == 2) + (arr[4] == 4) == 1 &&
//							(arr[2] == 1) + (arr[3] == 2) == 1 &&
//							(arr[2] == 5) + (arr[3] == 3) == 1 &&
//							(arr[4] == 4) + (arr[0] == 1) == 1 &&
//							my_function(arr))  // 查重函数，重复返回0，不重复返回1
//						{
//							for (i = 0; i < 5; i++)    //循环打印满足要求的那一组数
//							{
//								printf("%d ", arr[i]);
//							}
//							printf("\n");     //打印完之后换行
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{

	return 0;
}


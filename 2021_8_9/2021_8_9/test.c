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
//int my_check(int* p)
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
//							my_check(arr))  // 查重函数，重复返回0，不重复返回1
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


//查重函数，版本二
//#include<stdio.h>
//int my_check(int* p)
//{
//	int i = 0;
//	char n = 0;
//	for (i = 0; i < 5; i++)
//	{
//		n |= 1 << p[i];    //把 1 左移 p[i] 位的值或起来放到 n 中去
//	}
//	if (0x3e == n)         //最终 n 的值为 0011 1110(0x3e) 时，表示没有重复，返回 1
//	{
//		return 1;
//	}
//	return 0;
//
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
//							my_check(arr))  // 查重函数，重复返回0，不重复返回1
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


//版本3，优化遍历——使用递归
//#include<stdio.h>
//int my_check(int* p)
//{
//	int i = 0;
//	char n = 0;
//	for (i = 0; i < 5; i++)
//	{
//		n |= 1 << p[i];    //把 1 左移 p[i] 位的值或起来放到 n 中去
//	}
//	if (0x3e == n)         //最终 n 的值为 0011 1110(0x3e) 时，表示没有重复，返回 1
//	{
//		return 1;
//	}
//	return 0;
//
//}
//void my_erg(int* arr,int n)   //遍历函数
//{
//	if (n >= 5)      //控制最外层循环5次以上（满足 5 ^ 5 种情况）
//	{
//		int i = 0;
//		if ((arr[1] == 2) + (arr[0] == 3) == 1 &&  //判断每个人说的话是不是只对了一半
//			(arr[1] == 2) + (arr[4] == 4) == 1 &&
//			(arr[2] == 1) + (arr[3] == 2) == 1 &&
//			(arr[2] == 5) + (arr[3] == 3) == 1 &&
//			(arr[4] == 4) + (arr[0] == 1) == 1 &&
//			my_check(arr))  // 查重函数，重复返回0，不重复返回1
//		{
//			for (i = 0; i < 5; i++)    //循环打印满足要求的那一组数
//			{
//				printf("%d ", arr[i]);
//			}
//			printf("\n");     //打印完之后换行
//		}
//		return;     // 递归结束条件，到这里跳回上一层递归
//	}
//	for (arr[n] = 1; arr[n] <= 5; arr[n]++) //递归，相当于遍历每种情况
//	{
//		my_erg(arr, n + 1);
//	}
//}
//int main()
//{
//	int arr[5];
//	my_erg(arr, 0);
//
//	return 0;
//}



//版本四
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 0;
//	int arr[5] = { 1,2,3,4,5 };   //假设 a，b，c，d，e的名次依次为 1，2, 3, 4, 5。
//	int temp = 0;
//	if ((arr[1] == 2) + (arr[0] == 3) == 1 &&  //率先判断一下猜想是不是对的
//		(arr[1] == 2) + (arr[4] == 4) == 1 &&
//		(arr[2] == 1) + (arr[3] == 2) == 1 &&
//		(arr[2] == 5) + (arr[3] == 3) == 1 &&
//		(arr[4] == 4) + (arr[0] == 1) == 1)
//	{
//		for (j = 0; j < 5; j++)            //是对的打印出来
//		{
//			printf("%d ", arr[j]);
//		}
//		return 0;        //提前结束程序
//	}                    //不是就开始循环
//	for (n = 4; n >= 0; n--)
//	{
//		for (i = n + 1; i < 5; i++)
//		{	temp = arr[i];                   //不满足，就交换，等待下一次判断
//			arr[i] = arr[n];
//			arr[n] = temp;
//
//			if ((arr[1] == 2) + (arr[0] == 3) == 1 &&  //判断每个人说的话是不是只对了一半
//				(arr[1] == 2) + (arr[4] == 4) == 1 &&
//				(arr[2] == 1) + (arr[3] == 2) == 1 &&
//				(arr[2] == 5) + (arr[3] == 3) == 1 &&
//				(arr[4] == 4) + (arr[0] == 1) == 1)
//			{
//				for (j = 0; j < 5; j++)            //把满足要求的数组元素打印出来
//				{
//					printf("%d ", arr[j]);
//				}
//				break;
//			}
//		}
//		if (6 == j)               // j 为 6 表示找到了那一组数，不用循环了，返回
//		{
//			break;
//		}
//	}
//	return 0;
//}


//版本四用函数表达
#include<stdio.h>
int my_judge(int arr[])      //判断数组是否满足条件
{
	if ((arr[1] == 2) + (arr[0] == 3) == 1 &&  //判断条件：每个人说的话有一半是对的
		(arr[1] == 2) + (arr[4] == 4) == 1 &&
		(arr[2] == 1) + (arr[3] == 2) == 1 &&
		(arr[2] == 5) + (arr[3] == 3) == 1 &&
		(arr[4] == 4) + (arr[0] == 1) == 1)    //运用交换，不需要查重处理
	{
		return 1;        // 满足条件返回 1
	}
	return 0;      //不满足返回 0
}

void my_printf(int arr[])         //打印函数
{
	int i = 0;
	for (i = 0; i < 5; i++)            
	{
		printf("%d ", arr[i]);
	}
}

void my_swap(int arr[], int n, int i)      //交换两个元素
{
	int temp = 0;
	temp = arr[i];                  
	arr[i] = arr[n];
	arr[n] = temp;
}

int my_erg(int arr[])            //遍历函数，遍历交换直至找到满足要求的数组，返回 1 找到了；0，没找到。
{
	int i = 0;
	int n = 0;
	int temp = 0;
	for (n = 4; n >= 0; n--)   
	{
		for (i = n +1  ; i < 5 ; i++)
		{
			my_swap(arr, n, i);        //交换函数，交换两个元素
			if (my_judge(arr))           // 满足判断，提前结束函数
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };   //首先猜测五人的名次
	int ret = my_judge(arr);      //判断猜测是否完全满足要求
	if (ret)                      //为真，满足要求
	{
		my_printf(arr);       //打印出来
	} 
	else                     //猜测不对，进行遍历交换
	{
		if (my_erg(arr))     //遍历函数,返回值为 1 时，说明找到了
		{
			my_printf(arr);  //遍历找到后再打印出来
		}
		else
		{
			printf("该条件找不到所符合的数组！");
		}
		
	}
	return 0;
}
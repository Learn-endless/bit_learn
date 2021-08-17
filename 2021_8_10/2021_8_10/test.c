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

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d\n", i);// 用有符号十进制整数打印
//        Sleep(1000); //每打印一个停一段时间
//    }
//    return 0;
//}



//写一个函数，用于实现左旋字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int num = 0;
//	char arr[50] = { 0 };     //给一个数组，用来存放字符串
//	printf("请输入一个字符串：");
//	gets(arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	printf("请输入需要旋转的字符个数：");
//
//
//	return 0;
//}



void leftRound(char* src, int time)
{
	int i, j, tmp;
	int len = strlen(src);
	time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
	for (i = 0; i < time; i++) //执行k次的单次平移
	{
		tmp = src[0];
		for (j = 0; j < len - 1; j++) //单次平移
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;
	}
}
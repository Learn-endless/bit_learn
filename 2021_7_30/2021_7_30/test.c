#define _CRT_SECURE_NO_WARNINGS 1

//多组输入
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)    //打印的行数
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)  //每行打印的内容
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)  //第一行、最后一行、第一列 和 最后一列 均打印 *+空格
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");   //别的地方打印两个空格
//				}
//			}
//			printf("\n");  //一行打印完换行
//		}
//	}
//	return 0;
//}

//输入一组数 - 7个整数，去掉最大值和最小值，求平均值
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int i = 0;      //用来控制循环次数
//	int input = 0;  //接收输入的数据
//	int max = INT_MIN;    //用来存放最大值
//	int min = INT_MAX;    //用来存放最小值
//	int sum = 0;    //用来存放7个数的和
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &input);
//		sum += input;          //每次累加在一起
//		if (max < input)
//		{
//			max = input;       //比max大，更新一下max的值
//		}
//		if (min > input)
//		{
//			min = input;       //比min小，更新一下min的值
//		}
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}


//输入a，b，c三条边的值，判断是否能构成三角形，并且所构成的三角形的类型是什么
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)   //多组输入a，b，c的值
	{
		//判断能否构成三角形
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			//判断是否为特殊的三角形
			if (a == b && b == c)   //先判是不是等边
			{
				printf("Equilateral triandle!\n");
			}
			else if ((a == b) || (a == c) || (b == c))  //再判是不是等腰
			{
				printf("Isosceles triangle!\n");
			}
			else   //其他的就是普通三角形
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}
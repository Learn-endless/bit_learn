#define _CRT_SECURE_NO_WARNINGS 1
//a和b的最大公约数 - 普通方法
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? b : a;     //把a和b中最小的那个数给min
//	int i = 0;
//	for (i = min; i >= 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)  //a和b都能被i整除，就跳出
//			break;
//	}
//	if (i != 0)
//		printf("%d\n", i);
//	return 0;
//}

//辗转相除法
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}



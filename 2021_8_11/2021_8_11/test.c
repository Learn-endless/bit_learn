#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数》");
	scanf("%d %d", &a, &b);
	int ret = Add(a, b);
	printf("%d + %d = %d\n", a, b, ret);
	return 0;
}
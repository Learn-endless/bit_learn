#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 3;
	int b = 5;
	int ret = add(a, b);
	printf("%d\n", ret);
	return 0;
}
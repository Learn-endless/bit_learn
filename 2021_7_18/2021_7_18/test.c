#define _CRT_SECURE_NO_WARNINGS 1
//д���뽫�������������Ӵ�С�����
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)        //�ҳ�a��b���������ŵ�a��ȥ
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)       //a��b��c���������ŵ�a��ȥ
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)   //b��c���������ŵ�b��ȥ
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//	return 0;
//}


//��ӡ3�ı������� - (1-100)
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 3; i < 100; i += 3)
	{
		printf("%d ", i);
	}
	return 0;
}
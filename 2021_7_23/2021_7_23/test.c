#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include<stdio.h>
//void my_function(int n)
//{
//	if (n == 0)
//	{
//		return;
//	}
//	else
//	{	
//		my_function(n / 10);
//        printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������:");
//	scanf("%d", &num);
//	my_function(num);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ�ʵ��n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d�Ľ׳�Ϊ��%d\n", n, ret);
//	return 0;
//}

//�ݹ�ʵ��n�Ľ׳�
//#include<stdio.h>
//int my_function(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * my_function(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	int ret = my_function(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�ʵ��strlen
//#include<stdio.h>
//#include<assert.h>
//size_t my_total(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while ('\0' != *p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("������һ���ַ�����");
//	gets(str);
//	size_t ret = my_total(str);
//	printf("���ַ����ĳ���Ϊ��%u", ret);
//	return 0;
//}


//�ݹ�ʵ��strlen����
//#include<stdio.h>
//#include<assert.h>
//size_t my_function(const char* p)
//{
//	assert(NULL != p);
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_function(++p); //����ע����Ҫʹ��ǰ�üӼӣ����� p+=1 ����д
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("������һ���ַ�����");
//	gets(str);
//	size_t ret = my_function(str);
//	printf("���ַ����ĳ���Ϊ��%u\n", ret);
//	return 0;
//}

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* star, char* end)
//{
//	if (star>= end)
//	{
//		return;
//	}
//	else
//	{
//		char temp = *star;
//		*star = *end;
//		*end = temp;
//		reverse_string(++star, --end);
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("������һ���ַ�����");
//	gets(str);
//	int ret = strlen(str);
//	reverse_string(str, str + ret - 1); // ��Ҫ�������ַ��ĵ�ַ�����һ���ַ��ĵ�ַ������\0��
//	printf("%s", str);
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;        //�ӷ�ʱ0û��Ӱ��
//	}
//	else
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("����һ���Ǹ�����n��");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d�ĸ���λ������֮�ͣ�%d\n", n, ret);
//	return 0;
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include<stdio.h>
//long long my_function(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * my_function(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("������n��k��ֵ��");
//	scanf("%d %d", &n, &k);
//	long long ret = my_function(n, k);
//	printf("n��k�η���ֵΪ��%lld\n", ret);
//	return 0;
//}


//�ǵݹ�ķ�������n��쳲�������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a1 = 1;
//	int a2 = 1;
//	int i = 0;
//	int an = 1;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	for (i = 0; i < n - 2; i++)
//	{
//		an = a1 + a2;
//		a1 = a2;
//		a2 = an;
//	}
//	printf("��%d��쳲���������%d\n", n, an);
//	return 0;
//}


//�ݹ鷨���n��쳲�������
//#include<stdio.h>
//int my_function(int n)
//{
//	if (n <= 2)       //��һ��͵ڶ���� 1
//	{
//		return 1;
//	}
//	else
//	{
//		return my_function(n-1) + my_function(n-2);  //Ҫ�����һ�����ǰ����֮��
//
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	int ret = my_function(n);
//	printf("��%d��쳲��������ǣ�%d\n", n, ret);
//	return 0;
//}

//��������������ʹ��
//#include<stdio.h>
//int Add(int, int);    //����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d + %d = %d\n", a, b, ret);
//	return 0;
//}
//int Add(int x, int y)    //����
//{ 
//	return x + y;
//}


//��������ȷʹ��
//#include<stdio.h>
//#include"Add.h"
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d", ret);
//	return 0;
//}


//�����ݹ�
//����һ����������ӡ����ÿһλ
//#include<stdio.h>
//void print(size_t n)
//{
//	if (n > 9)      //�ݹ����������
//		print(n / 10);  //ÿִ��һ�Σ��ͻ�Խ��Խ�ƽ��������������
//
//	printf("%d ", n % 10);  //���ﲻ�ܼ�else�����������ÿ�ζ�ִ��
//}
//int main()
//{
//	size_t n = 0;
//	scanf("%u", &n);
//	print(n);
//
//	return 0;
//}


//�ݹ�����ַ����ĳ���
//#include<stdio.h>
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}


//�ݹ����n�Ľ׳�
//#include<stdio.h>
//int fac(int n)
//{ 
//	if (n == 1)         //nС�ڵ���1ʱ���׳�Ϊ1
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);   //����1ʱ��n�Ľ׳˾͵��� n ���� n - 1 �Ľ׳�
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d�Ľ׳�Ϊ��%d\n", n, ret);
//	return 0;
//}


//�õݹ�ʵ�����n��쳲������� - ��ò�Ҫʹ�õݹ�
#include<stdio.h>
int fib1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fib1(n - 1) + fib1(n - 2);
	}
}
//������(ѭ��) - ����ʵ��
int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib2(n);
	printf("%d\n", ret);
	return 0;
}

//��ŵ������
//������̨������
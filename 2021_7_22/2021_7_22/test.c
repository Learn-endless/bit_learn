#define _CRT_SECURE_NO_WARNINGS 1
//�����ж�����
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include<stdio.h>
//#include<math.h>        //sqrt�⺯����������ͷ�ļ�
//int my_is_prime(int n)  //�ж�һ�����ǲ�������
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)   //ֻ��Ҫ������n��ƽ�����Ǹ���Ϊֹ
//	{
//		if (n % i == 0)     //�������������˵����������
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 100; i <= 200; i++)   //���� 100 �� 200 ������
//	{
//		ret = my_is_prime(i);     //ÿ�������ж�һ��
//		if (ret)                  //����ֵΪ1������������ӡ�����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ������ꡣ
//#include<stdio.h>
//int judge_leap(int year)    //�ж��Ƿ�Ϊ���꣬�Ƿ���1���񷵻�0
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) //���ܱ�4�������в��ܱ�100����
//	{                                                              //�����ܱ�400��������ݽ�����
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	int ret = judge_leap(year);
//	if (ret)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}


//ʵ��һ�������������������������ݡ�
//#include<stdio.h>
//void my_exchange(int* x, int* y)
//{
//	*x = *x ^ *y;      //
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������ֵ��");
//	scanf("%d %d", &a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	my_exchange(&a, &b);
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#include<stdio.h>
//void my_function(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	my_function(num);
//	return 0;
//}


//strcpy�⺯��ʹ�� - �����ַ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "xxxxxxxxxxx";
//	char b[] = "hello";
//	char* ret = strcpy(a, b);   //strcpy�������dest����Ԫ�ص�ַ�����أ�����������һ��char*ָ�����
//	printf("%s\n", a);
//	//��ӡ���Ϊhello��˵��strcpy�����ڿ���ʱ��� \0 Ҳ��������ȥ
//	return 0;
//}


//memset�⺯����ʹ�� - �Ѵ�һ����ַ��ʼ��num���ֽڿռ䣬�޸�Ϊvalue
// void* memset(void* dest, int c, size_t count);
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "hello world";
//	char* ret = (char*)memset(a, 'x', sizeof(a) - 1);   // - 1 ��ʾ�� \0 ���������Ԫ�ض��޸�Ϊ x .
//	//memset�⺯�����ص���һ�� void* ���͵�ָ�룬����������Ҫ����ǿ������ת��
//	printf("%s\n", ret);
//	//ע��memset����ֻ�ܰѴ�dest��ʼ����count���ֽڵĿռ������޸�Ϊ c��������һ��һ���ֽ��޸ĵ�
//	return 0;
//}


//����ʾ����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 5 * sizeof(int));
//	//memset������һ��һ���ֽڸ� 1 ������4���ֽڸ�1
//	//��ÿ��Ԫ���� 0000 0001 0000 0001 0000 0001 0000 0001 - 16843009
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//void swap(int* x, int* y)   //��ʽ���� - ʵ�ε�һ����ʱ������������Ҫ����ַ��
//{
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	swap(&a, &b);  //ʵ�ʲ���
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//����
//��������Ƕ�׵��ã�������Ƕ�׶���
//#include<stdio.h>
//void my_function_2()
//{
//	printf("world!");
//}
//void my_function()
//{
//	printf("hello ");
//	my_function_2();
//}
//int main()
//{
//	my_function();
//	return 0;
//}


//��������ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", strlen("abc"));        //��ʽ����
	char arr1[] = "xxxxxxxxx";
	char arr2[] = "abc";
	printf("%s\n", strcpy(arr1, arr2));   //��ʽ����
	printf("%d", printf("%d", printf("%d", 43))); 
	//printf���������ַ��ĸ������������󣬷��ظ���
	//�����4321
	//scanf�������ض�ȡ����Ч�ַ��ĸ���
	return 0;
}
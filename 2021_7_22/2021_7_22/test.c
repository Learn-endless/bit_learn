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
#include<stdio.h>
void my_function(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-4d", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	printf("�����룺");
	scanf("%d", &num);
	my_function(num);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));       // 1   �ֽ�
//	printf("%d\n", sizeof(short));      // 2   �ֽ�
//	printf("%d\n", sizeof(int));        // 4   �ֽ�
//	printf("%d\n", sizeof(long));       // 4/8 �ֽ�
//	printf("%d\n", sizeof(long long));  // 8   �ֽ�
//	printf("%d\n", sizeof(float));      // 4   �ֽ�
//	printf("%d\n", sizeof(double));     // 8   �ֽ�
//	return 0;
//}


//#include<stdio.h>
//int a = 100;           //ȫ�ֱ���--�ڴ�����ⲿ����ı���
//int main()
//{                      
//	int a = 10;        //�ֲ�����--�ڴ�����ж���ı���
//
//	printf("a = %d \n", a); //ȫ�ֱ�����ֲ������ı�������ͻʱ���ֲ����ȡ�
//	return 0;
//}

//practise��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	//��vs�������Ҫ����ʹ��scanf����������Ҫ�ڹ��̵ĵ�һ�м��ϣ�#define _CRT_SECURE_NO_WARNINGS1
//	scanf("%d %d", &a, &b);   
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//дһ�����������������Ľϴ�ֵ
#include<stdio.h>

int my_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	int Max = 0;
	scanf("%d %d", &a, &b);
	Max = my_max(a, b);
	printf("Max = %d\n", Max);
	return 0;
}


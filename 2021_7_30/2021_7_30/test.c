#define _CRT_SECURE_NO_WARNINGS 1

//��������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)    //��ӡ������
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)  //ÿ�д�ӡ������
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)  //��һ�С����һ�С���һ�� �� ���һ�� ����ӡ *+�ո�
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");   //��ĵط���ӡ�����ո�
//				}
//			}
//			printf("\n");  //һ�д�ӡ�껻��
//		}
//	}
//	return 0;
//}

//����һ���� - 7��������ȥ�����ֵ����Сֵ����ƽ��ֵ
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int i = 0;      //��������ѭ������
//	int input = 0;  //�������������
//	int max = INT_MIN;    //����������ֵ
//	int min = INT_MAX;    //���������Сֵ
//	int sum = 0;    //�������7�����ĺ�
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &input);
//		sum += input;          //ÿ���ۼ���һ��
//		if (max < input)
//		{
//			max = input;       //��max�󣬸���һ��max��ֵ
//		}
//		if (min > input)
//		{
//			min = input;       //��minС������һ��min��ֵ
//		}
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}


//����a��b��c�����ߵ�ֵ���ж��Ƿ��ܹ��������Σ����������ɵ������ε�������ʲô
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)   //��������a��b��c��ֵ
	{
		//�ж��ܷ񹹳�������
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			//�ж��Ƿ�Ϊ�����������
			if (a == b && b == c)   //�����ǲ��ǵȱ�
			{
				printf("Equilateral triandle!\n");
			}
			else if ((a == b) || (a == c) || (b == c))  //�����ǲ��ǵ���
			{
				printf("Isosceles triangle!\n");
			}
			else   //�����ľ�����ͨ������
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
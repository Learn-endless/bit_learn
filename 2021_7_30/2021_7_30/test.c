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
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)   //��������a��b��c��ֵ
//	{
//		//�ж��ܷ񹹳�������
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			//�ж��Ƿ�Ϊ�����������
//			if (a == b && b == c)   //�����ǲ��ǵȱ�
//			{
//				printf("Equilateral triandle!\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))  //�����ǲ��ǵ���
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else   //�����ľ�����ͨ������
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}


//���������������������
//#include<stdio.h>
//void exchange(int* a1, int* a2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = *(a1 + i);
//		*(a1 + i) = *(a2 + i);
//		*(a2 + i) = temp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
//
//	int sz = sizeof(arr1) / sizeof(arr2[0]);  //���������Ԫ�ظ���
//	exchange(arr1, arr2, sz);
//
//	int i = 0;
//	for (i = 0 ; i < sz; i++)
//	{
//		printf("%d ", *(arr1 + i));
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr2 + i));
//	}
//
//	return 0;
//}


//��һ������������г�ʼ��������ʹ�ӡ - �ú���ʵ��
//#include<stdio.h>
//void InitFunction(int* p, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(p + i) = i;
//	}
//}
//
//void Print(int* p, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//void Reverse(int* p, int n)
//{
//	int* left = p;
//	int* right = p + n - 1;
//	while (left < right)
//	{
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 8,8,8,8,8,8,8,8,8,8,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	InitFunction(arr, sz);   //��ʼ��Ϊ0 1 2 3 4 5 6 7
//	Print(arr, sz);   //��ӡ����
//	Reverse(arr, sz);  //������
//	printf("\n");
//	Print(arr, sz);
//
//	return 0;
//}

//�±����ò�����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	// [] :����ֻ��һ��������
//	printf("%d\n", arr[4]);
//	printf("%d\n", 4[arr]);
//	// arr[4] -> *(arr + 4) -> *(4 + arr) -> 4[arr]   - ��ȫ�ȼ�
//	//˵��[]��һ����������arr��4ֻ����������������
//
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%p -- %p\n", &arr[i], arr + i);
//	//}
//	return 0;
//}


//�������ò����� - ()
//#include<stdio.h>
//#include<string.h>
//void test()
//{
//	printf("hello world\n");
//}
//int main()
//{
//	char ch[] = "abcdef";
//	printf("%d\n", strlen(ch));
//	printf("%u\n", strlen(ch));
//
//	test(); //�ڵ��ú���ʱ����ʹû�в�����Ҳ����ʡ������
//
//	return 0;
//}


//�ṹ���Ա���ʲ����� - �ṹ�������.��Ա / �ṹ�������ַ -> ��Ա
#include<stdio.h>
#include<string.h>

struct book   //����һ���ṹ������book
{
	char name[50];
	float price;
	char id[20];
};

void print1(struct book b)  //��ֵ����
{
	printf("������%s\n", b.name);
	printf("�۸�%.2f\n", b.price);
	printf("ID��%s\n", b.id);
}

void print2(struct book* b)   //��ַ����
{
	printf("������%s\n", b -> name);
	printf("�۸�%.2f\n", b -> price);
	printf("ID��%s\n", b -> id);

	printf("������%s\n", (*b).name);
	printf("�۸�%.2f\n", (*b).price);
	printf("ID��%s\n", (*b).id);
}
int main()
{

	struct book b = { "C���Գ������",35.5f,"C20210915" };  //����һ���ṹ�����

	print1(b);
	b.price = 100.0f;
	strcpy(b.name, "���ݽṹ"); //���������ʱ������Ԫ�ص�ַ
	print1(b);

	print2(&b);
	//�ڵ��ýṹ�����ʱ����ò���ַ���ݣ�����ջ�ռ���˷�

	return 0;
}
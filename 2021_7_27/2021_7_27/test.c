#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char ch1[][5] = { "abcd","defg" };  //���ݴ�����������ݣ���ȷ������
//	char ch2[3][5] = {"abcd"};          //��һ��Ϊ"abcd\0",�ڶ��к͵����У���Ϊ\0
//	char ch3[][5] = { 'a','b','c','d','e','f' };//ÿ��5��Ԫ�أ���������ȷ������
//	char ch4[][5] = { {'a','b'},{'c','d'},{'e','f'} }; //��������ȷ������
//	return 0;
//}

//��ά����Ԫ�صķ���
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,10} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("arr[%d][%d] = %p ", i, j, &arr[i][j]);	 //�ڴ���������
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);     //ָ��ķ�ʽ
//		p++;
//	}
//	printf("\n");   //����
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]); //�±����ò������ķ�ʽ
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,10} };
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 15; i++)  //�Ѷ�ά���鵱��һ��һά����
//	{
//		printf("%d ", *p);    //��ַ�������ģ����Կ���ʹ�ô˷�ʽ��ӡ
//		p++;
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)   //��ͳ�ķ�ʽ��ӡ
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i <= 5; i++)   //C���Ա����ǲ���������Խ����ʵģ������������Ҳ�����
//	{
//		printf("%d ", arr[i]); //������һ�鲻�����Լ��Ŀռ䣬��û�иı����е�ֵ
//	}
//	return 0;
//}


//ð������ - ������
//#include<stdio.h>
//void Sort(int* p, int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//ÿһ��ð������ȽϵĴ���
//		int flag = 1; //�����Ѿ������� (�����Ż�)-�������ԭ���Ѿ����򣬾�ֹͣ����
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//�ж������������Ĵ�С,����������
//			if (*(p + j) > *(p + j + 1))
//			{
//				//������������ֵ
//				int temp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = temp;
//				flag = 0; //ֻҪ��������ʾ������֮ǰ���������
//			}
//		}
//		if (flag == 1)   //��ʾ������ģ�ֱ����������������
//		{
//			break;
//		}
//	}
//}
//void Print(int* p, int sz)
//{
//	int i = 0;
//	//ѭ����ӡ������ÿ��Ԫ�ص�ֵ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //����ֻ����main��������ã����ͨ�����εĻ����ή�������Ԫ�صĵ�ַ
//	Sort(arr, sz);    //ð�������� - ������
//	Print(arr, sz);   //�Զ����ӡ����
//	//���ﴫ�ε���������Ԫ�ص�ַ
//	return 0;
//}


//��������ʾ��Ԫ�ص�ַ��
//���������⣺
//sizeof���������� - ������������������Ĵ�С
//&������ - ��ʾ��������ĵ�ַ

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);      //��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);  //��Ԫ�ص�ַ
//
//	printf("%p\n", &arr);     //��������ĵ�ַ
//
//	printf("%p\n", arr + 1);     //����һ��Ԫ��
//	printf("%p\n", &arr[0] + 1); //����һ��Ԫ��
//	printf("%p\n", &arr + 1);    //����һ��������
//	return 0;
//}


//ʵ��һ�������������ð������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����������������ݣ�����һ����
#include<stdio.h>
void Print(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void Exchange(int* arr1, int* arr2, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int temp = *(arr1 + i);
		*(arr1 + i) = *(arr2 + i);
		*(arr2 + i) = temp;
	}
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Print(arr1, sz);  //�Զ����ӡ����
	printf("\n");
	Print(arr2, sz);
	Exchange(arr1, arr2, sz);
	printf("\n");
	Print(arr1, sz);  
	printf("\n");
	Print(arr2, sz);
	return 0;
}
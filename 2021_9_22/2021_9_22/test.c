#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//ģ��ʵ�� strncat - �����Ƶ��ַ���׷�Ӻ���
//#include<stdio.h>
//#include<assert.h>
//char* my_strncat(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* temp = dest;
//	while (*dest)     //�ҵ�Ŀ���ַ�����ĩβ
//	{                 //��Ŀ���ַ�����ĩβ��ʼ׷��
//		dest++;
//	}
//	while ((n > 0) && *src)
//	//���㲻������Ҫ׷�ӵĸ���������Դ�ַ���û�б�����'\0'ʱ�����и���
//	{
//		*dest++ = *src++;
//		n--;
//	}
//	*dest = '\0';
//	return temp;
//}
//int main()
//{
//	char str1[] = "abcdefgh";
//	char str2[50] = "xxx\0xxxxxxxxxxxxxxxxxxxxxx";
//
//	char* ret = my_strncat(str2, str1, 3);
//	printf(ret);
//	printf("\n");
//	printf(str2);
//
//	return 0;
//}


//ģ��ʵ��strncpy - �����Ƶ��ַ�������
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while ((count > 0) && (*dest++ = *src++))
//	{
//		count--;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[50] = "xxx\0xxxxxxxxxxxxxxxxx";  //����ȫ��ʼ��
//	char* ret = my_strncpy(str2, str1, 5);
//	printf(ret);
//
//	return 0;
//}


//
//#include <string.h>
//#include <stdio.h>
//
//void main(void)
//{
//	char str1[] = "abcdef";
//	char str2[50] = "xxx\0xxxxxxxxxxxxxxxxx";  
//	printf("Before: %s\n", str2);
//	strncpy(str2, str1, 5);
//	printf("After:  %s\n", str2);
//}


//��һ�������ҳ���ֻ����
//#include<stdio.h>
//void SearchSingleDog(int* p, size_t n)
//{
//	//�ȸ��������� - ����������
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0; 
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (p[j] > p[j + 1])
//			{
//				int temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//	//���ڵ�����Ԫ�ؽ��бȽϣ���ͬ��2������ͬ��ӡ�������ڼ�1
//	i = 0;
//	while (i < n)
//	{
//		if (p[i] == p[i + 1])
//		{
//			i += 2;
//		}
//		else
//		{
//			printf("%d ", p[i]);
//			i++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,1,2,3,5,6,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);   //�������Ԫ�ظ���
//	printf("�������ǣ�");
//	SearchSingleDog(arr, sz);   //�Զ�����ҵ�������
//	return 0;
//}


//ģ��ʵ��atoi����
//#include <stdio.h>
//#include <assert.h>
//int my_atoi(const char* str)
//{
//	assert(str);
//	//���ַ����� '-' �� '+' ��ͷʱ
//	if (*str == '-' || *str == '+')
//	{
//		char ret = *str;
//		str++;            //ָ��������һ�������¸��ַ���ʼ�ж�
//		int sum = 0;			
//		int i = 0;
//		//��ǰ�ַ��� '0' �� '9'�м���ַ�ʱ������ѭ��
//		while (*str && (*str >= '0' && *str <= '9'))
//		{
//			//�ѵ�һ�ε������ַ���Ӧ�����ֵ�ֱֵ�Ӽ���sum��
//			if (i == 0)
//			{
//				sum += (*str - '0');
//				i = 1;
//			}
//			//������ַ�����else
//			else
//			{
//				//�ӵڶ��������ַ���ʼ������sum����10����Ȼ����ϵ�ǰ��ֵ
//				sum = (sum * 10) + (*str - '0');
//			}
//			str++;  //�ж���һ���ַ�
//		}
//		//����sum��Ϊ0ʱ����
//		if (sum)
//		{
//			//��ʱ�ж��ʼ���ֵ��ַ��Ƿ�Ϊ '-'
//			if (ret == '-')
//			{
//				//����һ����ֵ
//				return -sum;
//			}
//			//�������ֱ�ӷ���
//			return sum;
//		}
//		//���е������ʾ�ڶ����ַ����������ַ�
//		return 0;
//	}
//
//	//���ַ����� '0' �� '9' ��ͷʱ
//	else if (*str >= '0' && *str <= '9')
//	{
//		int sum = 0;		
//		int i = 0;
//		//ֱ�ӿ�ʼѭ���ۼ�
//		while (*str && (*str >= '0' && *str <= '9'))
//		{
//			//��һ��ֱ���ۼӽ�sum
//			if (i == 0)
//			{
//				sum += (*str - '0');
//				i = 1;
//			}
//			//�ӵڶ��ο�ʼ�Ȱ�sum����10����Ȼ���ۼ�
//			else
//			{
//				sum = (sum * 10) + (*str - '0');
//			}
//			str++;  //�ж���һ���ַ�
//		}
//		//ֱ�ӷ���sum
//		return sum;
//	}
//
//	//����������0
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	char str[] = "-123abc";
//	n = my_atoi(str);
//
//	printf("string = %s\ninteger = %d\n", str, n);
//
//	return 0;
//}


int my_atoi(const char* str) 
{

	int result = 0;

	int signal = 1; /* Ĭ��Ϊ���� */

	if ((*str >= '0' && *str <= '9') || *str == '-' || *str == '+') {

		if (*str == '-' || *str == '+') {

			if (*str == '-')

				signal = -1; /* ���븺�� */

			str++;

		}

	}

	else return 0;

	//��ʼת��
	while (*str >= '0' && *str <= '9')

		result = result * 10 + (*str++ - '0');

	return signal * result;

}
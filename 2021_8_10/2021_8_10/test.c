#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	for (k = 0; k < 4; k++) 
//	{
//		q[k] = &a[k * 3];
//	}
//		printf("%d\n", q[3][1]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        Sleep(1000); //ÿ��ӡһ��ͣһ��ʱ��
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d\n", i);// ���з���ʮ����������ӡ
//        Sleep(1000); //ÿ��ӡһ��ͣһ��ʱ��
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d\n", i);// ���з���ʮ����������ӡ
//        Sleep(1000); //ÿ��ӡһ��ͣһ��ʱ��
//    }
//    return 0;
//}


//дһ������������ʵ�������ַ���
//#include<stdio.h>
//#include<string.h>
//void left_revolve(char* str, int time)
//{
//	int i = 0;
//	int j = 0;
//	int len = (int)strlen(str);  //ǿ������ת��һ�£����⾯��
//	time %= len;  //����Ϊ5ʱ����ת6���൱��1�Σ�����Ϊ6ʱ����ת7��Ҳ�൱1��
//	for (i = 0; i < time; i++)   //��ת���ٴΣ���ѭ�����ٴ�
//	{
//		char temp = str[0];      //ÿ���Ȱ���Ԫ���ó���һ��
//		for (j = 0; j < len - 1; j++) //ÿһ�ΰѺ�����ַ���ǰƽ��
//		{
//			str[j] = str[j + 1];   //��һ��Ԫ����ǰƽ��һλ
//		}
//		str[j] = temp;       //����Ԫ�طŵ����һ���ռ�
//	}
//}
//int main()
//{
//	int time = 0;  //���ڴ����ת�Ĵ���
//	char str[20] = { 0 };  //���ڴ��������ַ���
//	printf("�������ַ�����");
//	gets(str);
//	printf("������");
//	scanf("%d", &time);
//	left_revolve(str, time);
//	printf("%s\n", str);
//
//	return 0;
//}


//�汾��
//#include<stdio.h>
//#include<string.h>
//void left_revolve(char* str, int time)
//{
//	char arr[100] = { 0 }; //�����һ�㹻����ַ���
//	int len = (int)strlen(str);  //ǿ������ת��һ�£����⾯��
//	time %= len;  //����Ϊ5ʱ����ת6���൱��1�Σ�����Ϊ6ʱ����ת7��Ҳ�൱1��
//	strcpy(arr, str + time);
//	strncat(arr, str, time);    //strncat(str1, str2, number) : �� str2 �ַ�����ǰ number ��Ԫ�طŵ� str1 ��ȥ
//	strcpy(str, arr);
//
//}
//int main()
//{
//	int time = 0;  //���ڴ����ת�Ĵ���
//	char str[20] = { 0 };  //���ڴ��������ַ���
//	printf("�������ַ�����");
//	gets(str);
//	printf("������");
//	scanf("%d", &time);
//	left_revolve(str, time);
//	printf("%s\n", str);
//
//	return 0;
//}


//�汾��
//#include<stdio.h>
//#include<string.h>
//void reverse_order(char* star, char* end)    //������
//{
//	while (star < end)       //��ߵĵ�ַС���ұߵĵ�ַ
//	{
//		char temp = 0;
//		temp = *star;       //����
//		*star = *end;
//		*end = temp;
//		star++;             //ָ������
//		end--;              //ָ������
//	}
//}
//
//int main()
//{
//	int time = 0;  //���ڴ����ת�Ĵ���
//	char str[20] = { 0 };  //���ڴ��������ַ���
//	printf("�������ַ�����");
//	gets(str);
//	int ret = (int)strlen(str);
//	printf("������");
//	scanf("%d", &time);
//	time %= ret;                             //��Ŵ���
//	reverse_order(str, str + time - 1);      //�Ȱ���Ҫ��ת���ַ���������
//	reverse_order(str + time, str + ret - 1);//�ٰ���Ҫƽ�Ƶ��ַ�������
//	reverse_order(str, str + ret - 1);       //���������ַ�������
//	printf("%s\n", str);
//
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//#include<stdio.h>
//#include<string.h>
//void reverse_order(char* star, char* end)    //������
//{
//	while (star < end)       //��ߵĵ�ַС���ұߵĵ�ַ
//	{
//		char temp = 0;
//		temp = *star;       //����
//		*star = *end;
//		*end = temp;
//		star++;             //ָ������
//		end--;              //ָ������
//	}
//}
//int my_check(char* arr1, char* arr2)   //�жϺ������ܷ�����õ�
//{      
//	int i = 0;
//	int len = (int)strlen(arr2) ;
//	for (i = 0; i < len; i++)        //���ٸ��ַ���ѭ�����ٱ�
//	{
//		reverse_order(arr2 + 1, arr2 + len - 1);   //ÿ����תһ���ַ�
//		reverse_order(arr2, arr2 + len - 1);
//		 
//		while (*arr1 != '\0' && *arr2 != '\0')  //ѭ���Ƚ������ַ����Ƿ�һ��
//		{
//			if (*arr1 != *arr2)         //���в�һ�����ַ�ʱ�������������������
//			{
//				break;
//			}
//			arr1++;           //ָ��������
//			arr2++;
//		}
//		if (*arr1 == '\0' && *arr2 == '\0')      //�������ָ�붼ָ����'\0'���������ַ���û�в�һ���ģ����� 1
//		{
//			return 1;
//		}
//	}
//	return 0;    //ȫ��ѭ���꣬�ߵ������ʾ��ת����ַ������Ҳ���������ͬ���ַ��������� 0
//}
//int main()
//{
//	char arr1[30] = { 0 };  //�����������飬�������������ַ���
//	char arr2[30] = { 0 };
//	printf("arr1 : ");
//	gets(arr1);
//	printf("arr2 : ");
//	gets(arr2);
//	int ret = my_check(arr1, arr2);
//	if (ret)       //����ֵΪ�棬��ʾarr1����ͨ��arr2��ת�õ�
//	{
//		printf("yes!\n");
//	}
//	else
//	{
//		printf("no!\n");
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int my_find(char* arr1, char* arr2)
{
	char str[200] = { 0 };
	strcpy(str, arr1);      //�����ַ���
	strcat(str, arr1);      //ƴ���ַ���
	return strstr(str, arr2) != NULL; //ɨ���ַ���
}
int main()
{
	char arr1[30] = { 0 };
	char arr2[30] = { 0 };
	printf("arr1 ��");
	gets(arr1);
	printf("arr2 : ");
	gets(arr2);
	int ret = my_find(arr1, arr2);
	if (ret)
	{
		printf("yes��\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
//ָ��Ӽ�����
//#include<stdio.h>
//#define PE 5
//int main()
//{
//	int arr[PE] = { 0 };
//	int* p = NULL;
//	for (p = &arr[PE]; p > &arr[0];)   //ָ��֮��Ĺ�ϵ����
//	{
//		*--p = 0;
//	}
//	for (p = &arr[0]; p < &arr[PE]; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//
//}


////ָ�� - ָ��
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int* left = arr;                //�� sizeof(������)�� &(������)�⣬������������Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]); //�������ĸ���
//	int* right = &arr[sz];
//
//	printf("%d\n", right - left);  // 5
//	printf("%d\n", left - right);  //-5
//	//ָ���ָ��ľ���ֵ���������Ԫ�ظ���
//	//��Ҫʹ��ָ���ָ�룬ֻ����ͬһ��������ʹ��
//
//	return 0;
//}


//���ַ�������
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen_1(char* p)
//{
//	int count = 0;
//	assert(NULL != p);       // ��ֹҰָ��ĳ���,��ʹ����
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int my_strlen_2(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int num = strlen(arr);       //�⺯�����ַ�������
//	int my_num1 = my_strlen_1(arr); //�Զ��庯��ʵ�֣����ַ�������
//	int my_num2 = my_strlen_2(arr); //��ָ������ķ���ʵ��
//	printf("%d\n", num);
//	printf("%d\n", my_num1);
//	printf("%d\n", my_num2);
//	return 0;
//}


//ָ��Ľ����ò���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;             //������Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;       //�������Ԫ�����θ�ֵ 0����9��
//	}                       //����ָ��������ķ�ʽ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


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


//#include<stdio.h>
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf(" %s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}


//��ת�ַ���
//#include<stdio.h>
//void reverse_order(char* p, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	char temp = 0;
//	while (left < right)
//	{
//		temp = *(left + p);
//		*(left + p) = *(right + p);
//		*(right + p) = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	char* p = arr;
//	int count = 0;
//	printf("������һ���ַ��������Դ��ո�");
//	gets_s(arr, 100);       //��2019��gets������ȡ���ˣ�������gets_s(������Ԫ�ص�ַ������洢�Ŀռ�)
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	reverse_order(arr, count);
//	printf("�������ַ���Ϊ��%s\n", arr);
//	return 0;
//}


//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)          // ��ӡ���ε��ϰ벿��-7��
//	{
//		for (j = 7; j > i + 1; j--)  // ÿһ���ȴ�ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= 2*i; j++)   // �ո����Ŵ�ӡ*��
//		{
//			printf("*");
//		}
//		printf("\n");                // һ�д�ӡ����֮������
//	}
//	for (i = 0; i < 6; i++)          // ��ӡ���ε��°벿��-6��
//	{
//		for (j = 0; j <= i; j++)     // һ���ȴ�ӡ�ո�
//		{                        
//			printf(" ");              
//		}
//		for (j = 0; j < 11 - 2 * i; j++)  // �ٴ�ӡ*��
//		{
//			printf("*");
//		}
//		printf("\n");                // ��ӡһ��֮�󣬻�����
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
//˼·��
//  1.20Ԫ����һ��Ǯ��һƿ ����20
//  2.ÿ������ƿ���Ի�һƿ��ˮ����10
//  3.�����ظ���2����ֱ����ƿ�ĸ�����������
//  20   10   5    2   1   1    
//#include<stdio.h>
//int main()
//{
//	int money = 0;             // ����Ǯ������
//	int number = 0;            // �ܺ���ˮ������
//	int empty = 0;             // ��ƿ������
//	printf("������ڴ���Ǯ����Ŀ��");      // ��ʾһ��
//	scanf("%d", &money);
//	number = money;            // һ��һƿ���ж���Ǯ��һ�־��ܺȶ��ٿ���
//	empty = money;             // ͬ���ܺȶ��ٿ��֣���һ�־��ܲ������ٿ�ƿ
//	while (empty > 1)          // ͳ��֮���ÿ�ƿ�һ��Ŀ��ֵ�������ֱ����ƿ����С��2ʱ��ֹ
//	{
//		number += empty / 2;           // ��ÿһ��������ƿ�һ��Ŀ��ּӵ�������ȥ
//		empty = empty / 2 + empty % 2; // ���¿�ƿ�ĸ�����
//		                               // ע�⣺�鲻�������Ŀ�ƿ��Ҫ�ۼƵ���һ��  
//	}
//	printf("%dԪ���Ժ�%dƿ��ˮ��\n", money, number);
//
//	return 0;
//}



//���Դ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//
//	for (i = 0; i <= 12; i++)   // 12��ѭ����������Խ��
//	{
//		arr[i] = 0;             // ������Խ������±�Ϊ12���ڴ�ռ�ʱ���ҵ��Ŀռ�ǡ����i�����Ŀռ�
//		printf("hehe\n");       // i������Ϊ0������ѭ������������ѭ��
//	}                           // ���ۣ���������Ԫ��ʱҪ�ر�ע�ⲻҪԽ����ʣ�����д��BUG
//
//	return 0;
//}
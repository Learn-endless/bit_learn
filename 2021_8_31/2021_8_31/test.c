#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//�ַ�ָ��
//	char a = 'w';
//	char* pa = &a;
//	printf("%c\n", *pa);
//
//	//ָ������
//	int a1 = 10;
//	int a2 = 20;
//	int a3 = 30;
//	int* p[3] = { &a1,&a2,&a3 };
//	printf("%d %d %d\n", *p[0], *p[1], *p[2]);
//
//	//����ָ��
//	char arr1[5] = "abcd";
//	char(*p1)[5] = &arr1;    //&arr1 - ��������ĵ�ַ 
//	printf("%s\n", p1);      //p1�д�ŵľ���arr1�ĵ�ַ
//	
//	//����ָ��
//	int(*p2)(int, int) = add;  // add �� &add ��ȫ�ȼ�
//	int ret1 = p2(1, 2);     //�ú���ָ���Ӷ����  - ͬ������дΪ��(*p2)(1,2)
//	printf("%d\n", ret1);
//
//	//����ָ������
//	int (*p3[5])(int, int) = { add };  //�����Ǹ����飬��1��Ԫ�أ�Ԫ�������Ǻ���ָ��
//	int ret2 = p3[0](1, 2);          //���������е�һԪ��ָ��ĺ���
//	printf("%d\n", ret2);
//
//	//ָ����ָ�������ָ��
//	int (*(*p4)[5])(int, int) = &p3;
//	int ret3 = (*p4)[0](2, 3);
//	printf("%d\n", ret3);
//	return 0;
//}


//�ص�����
//���壺ͨ������ָ����õĺ���
//#include<stdio.h>
//int add(int x, int y)          //�ӷ�
//{
//	return x + y;
//}
//int sub(int x, int y)         //����
//{
//	return x - y;
//}
//int my_function(int(*p)(int, int),int x,int y)
//{
//	return p(x, y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	int ret = my_function(add, a, b);
//	int temp = my_function(sub, a, b);
//	printf("%d\n", ret);
//	printf("%d\n", temp);
//	return 0;
//}


//ð������
//#include<stdio.h>
//void my_sort(int arr[], int sz)          //ֻ������int�͵�����
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void my_printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_sort(arr, sz);
//	my_printf(arr, sz);
//	return 0;
//}


//qsort�⺯����Ӧ�� - �������������κ����͵����ݣ����������������ַ�����
//void qsort( void *base,      //void* - �޾�������ָ�룬�������������������͵ĵ�ַ
//            size_t num, 
//            size_t width, 
//            int (__cdecl *compare )(const void *elem1, const void *elem2 ) );



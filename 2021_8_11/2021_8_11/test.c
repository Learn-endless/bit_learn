#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);
//	printf("%d + %d = %d\n", a, b, ret);
//	return 0;
//}


//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//#include<stdio.h>
//int my_seek(int(*p)[3], int x, int y, int temp)   //x����ά���������  y����ά���������
//{
//	int i = 0;              //����͵��п�ʼ�����²���
//	int j = y - 1;          //����ߵ��п�ʼ���������
//	while (i < x && j >= 0)
//	{
//		if (*(*(p + i) + j) < temp)  //���0���������Ƚ�
//		{
//			i++;    //��tempС��������һ��������
//		}
//		else if (*(*(p + i) + j) > temp) //��temp��˵����Ҫ���ҵ���������ڣ��Ǿ�����һ�С�
//		{
//			j--;   //��������
//		}
//		else    //ֱ���Ȳ����в�С������1
//		{
//			return 1;
//		}
//	}
//	return 0; //�ߵ�����˵��������û�и���������0
//}
//
//int main()
//{
//	int arr[3][3] = { {1,3,4},
//		              {5,6,7},
//		              {8,9,10} };  //�涨���ҷ�Χ
//	int num = 0;
//	printf("�������֣�");
//	scanf("%d", &num);
//	int ret = my_seek(arr, 3, 3, num);
//	if (ret)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//qsort()����������������
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//void qsort( ������Ԫ�ص�ַ�� ����Ԫ�أ� Ԫ����ռ�ֽڴ�С�� �ȽϺ����ĵ�ַ);
//#include<stdio.h>
//#include<stdlib.h>
//int camp(const void* x, const void* y) //�ȽϺ���
//{
//	//��ǿ������ת��������Ԫ�����͵�ָ�룬Ȼ������������ͨ������ֵ�Ƚϴ�С
//	return *(int*)x - *(int*)y;   //*x > *y : return 1
//}                                 //*x < *y : return -1
//int main()                        //*x == *y : return 0
//{
//	int arr[] = { 10, 100, 25, 34, 89, 20, 65, 44, 75 };
//	int(*p)(const void*, const void*) = &camp;      //��camp�����ĵ�ַ��ŵ�����ָ��p��
//	qsort(arr, 9, 4, p);             //����Ҳ����ֱ�Ӱ�pд��camp����&camp������ȫ��ͬ
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//qsort�����ַ���
//#include<stdio.h>
//#include<stdlib.h>
//int camp(const void* x, const void* y) //�ȽϺ���
//{
//	//��ǿ������ת��������Ԫ�����͵�ָ�룬Ȼ������������ͨ������ֵ�Ƚϴ�С
//	return *(char*)x - *(char*)y;   //*x > *y : return 1
//}                                 //*x < *y : return -1
//int main()                        //*x == *y : return 0
//{
//	char arr[] ="FEDCBA";
//	int(*p)(const void*, const void*) = &camp;      //��camp�����ĵ�ַ��ŵ�����ָ��p��
//	qsort(arr, 6, 1, p);             //����Ҳ����ֱ�Ӱ�pд��camp����&camp������ȫ��ͬ
//	printf("%s\n", arr);
//
//	return 0;
//}

//qsort���򸡵�����
#include<stdio.h>
#include<stdlib.h>
int camp(const void* x, const void* y) //�ȽϺ���
{
	//��ǿ������ת��������Ԫ�����͵�ָ�룬Ȼ������������ͨ������ֵ�Ƚϴ�С
	return (int)(*(double*)x - *(double*)y);   //*x > *y : return 1
}                                 //*x < *y : return -1
int main()                        //*x == *y : return 0
{
	double arr[] = { 10.0, 100.5, 25.10, 34.30, 89.10, 20.0, 65.50, 44.40, 75.12 };
	int(*p)(const void*, const void*) = &camp;      //��camp�����ĵ�ַ��ŵ�����ָ��p��
	qsort(arr, 9, 8, p);             //����Ҳ����ֱ�Ӱ�pд��camp����&camp������ȫ��ͬ
	for (int i = 0; i < 9; i++)
	{
		printf("%.1lf ", arr[i]);
	}

	return 0;
}
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
//	printf("请输入两个数》");
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);
//	printf("%d + %d = %d\n", a, b, ret);
//	return 0;
//}


//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//#include<stdio.h>
//int my_seek(int(*p)[3], int x, int y, int temp)   //x：二维数组的行数  y：二维数组的列数
//{
//	int i = 0;              //从最低的行开始，往下查找
//	int j = y - 1;          //从最高的列开始，往左查找
//	while (i < x && j >= 0)
//	{
//		if (*(*(p + i) + j) < temp)  //与第0行最大的数比较
//		{
//			i++;    //比temp小，跳到下一行最大的数
//		}
//		else if (*(*(p + i) + j) > temp) //比temp大，说明需要查找的数如果存在，那就在这一行。
//		{
//			j--;   //列往左走
//		}
//		else    //直到既不大，有不小，返回1
//		{
//			return 1;
//		}
//	}
//	return 0; //走到这里说明数组中没有该数。返回0
//}
//
//int main()
//{
//	int arr[3][3] = { {1,3,4},
//		              {5,6,7},
//		              {8,9,10} };  //规定查找范围
//	int num = 0;
//	printf("查找数字：");
//	scanf("%d", &num);
//	int ret = my_seek(arr, 3, 3, num);
//	if (ret)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//qsort()函数排序整形数组
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//void qsort( 数组首元素地址， 数组元素， 元素所占字节大小， 比较函数的地址);
//#include<stdio.h>
//#include<stdlib.h>
//int camp(const void* x, const void* y) //比较函数
//{
//	//先强制类型转换成数组元素类型的指针，然后解引用相减，通过返回值比较大小
//	return *(int*)x - *(int*)y;   //*x > *y : return 1
//}                                 //*x < *y : return -1
//int main()                        //*x == *y : return 0
//{
//	int arr[] = { 10, 100, 25, 34, 89, 20, 65, 44, 75 };
//	int(*p)(const void*, const void*) = &camp;      //把camp函数的地址存放到函数指针p中
//	qsort(arr, 9, 4, p);             //这里也可以直接把p写成camp或者&camp，都完全等同
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//qsort排序字符串
//#include<stdio.h>
//#include<stdlib.h>
//int camp(const void* x, const void* y) //比较函数
//{
//	//先强制类型转换成数组元素类型的指针，然后解引用相减，通过返回值比较大小
//	return *(char*)x - *(char*)y;   //*x > *y : return 1
//}                                 //*x < *y : return -1
//int main()                        //*x == *y : return 0
//{
//	char arr[] ="FEDCBA";
//	int(*p)(const void*, const void*) = &camp;      //把camp函数的地址存放到函数指针p中
//	qsort(arr, 6, 1, p);             //这里也可以直接把p写成camp或者&camp，都完全等同
//	printf("%s\n", arr);
//
//	return 0;
//}

//qsort排序浮点数组
#include<stdio.h>
#include<stdlib.h>
int camp(const void* x, const void* y) //比较函数
{
	//先强制类型转换成数组元素类型的指针，然后解引用相减，通过返回值比较大小
	return (int)(*(double*)x - *(double*)y);   //*x > *y : return 1
}                                 //*x < *y : return -1
int main()                        //*x == *y : return 0
{
	double arr[] = { 10.0, 100.5, 25.10, 34.30, 89.10, 20.0, 65.50, 44.40, 75.12 };
	int(*p)(const void*, const void*) = &camp;      //把camp函数的地址存放到函数指针p中
	qsort(arr, 9, 8, p);             //这里也可以直接把p写成camp或者&camp，都完全等同
	for (int i = 0; i < 9; i++)
	{
		printf("%.1lf ", arr[i]);
	}

	return 0;
}
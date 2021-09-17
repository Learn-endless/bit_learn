#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char ch1[][5] = { "abcd","defg" };  //根据大括号里的内容，来确定行数
//	char ch2[3][5] = {"abcd"};          //第一行为"abcd\0",第二行和第三行，都为\0
//	char ch3[][5] = { 'a','b','c','d','e','f' };//每行5个元素，根据内容确定行数
//	char ch4[][5] = { {'a','b'},{'c','d'},{'e','f'} }; //根据内容确定行数
//	return 0;
//}

//二维数组元素的访问
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
//			printf("arr[%d][%d] = %p ", i, j, &arr[i][j]);	 //内存是连续的
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
//		printf("%d ", *p);     //指针的方式
//		p++;
//	}
//	printf("\n");   //隔开
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]); //下表引用操作符的方式
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,10} };
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 15; i++)  //把二维数组当成一个一维数组
//	{
//		printf("%d ", *p);    //地址是连续的，所以可以使用此方式打印
//		p++;
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)   //传统的方式打印
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
//	for (i = 0; i <= 5; i++)   //C语言本身是不会检查数组越界访问的，大多数编译器也是如此
//	{
//		printf("%d ", arr[i]); //访问了一块不属于自己的空间，并没有改变其中的值
//	}
//	return 0;
//}


//冒泡排序 - 排升序
//#include<stdio.h>
//void Sort(int* p, int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//每一趟冒泡排序比较的次数
//		int flag = 1; //假设已经有序了 (进行优化)-如果数组原先已经有序，就停止排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//判断相邻两个数的大小,按升序排序
//			if (*(p + j) > *(p + j + 1))
//			{
//				//交换两个数的值
//				int temp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = temp;
//				flag = 0; //只要交换，表示数组排之前不是有序的
//			}
//		}
//		if (flag == 1)   //表示是有序的，直接跳出，不用排了
//		{
//			break;
//		}
//	}
//}
//void Print(int* p, int sz)
//{
//	int i = 0;
//	//循环打印数组中每个元素的值
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //这里只能在main函数中求得，如果通过传参的话，会降级变成首元素的地址
//	Sort(arr, sz);    //冒泡排序函数 - 排升序
//	Print(arr, sz);   //自定义打印函数
//	//这里传参的是数组首元素地址
//	return 0;
//}


//数组名表示首元素地址：
//有两个例外：
//sizeof（数组名） - 这里计算的是整个数组的大小
//&数组名 - 表示整个数组的地址

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);      //首元素地址
//	printf("%p\n", &arr[0]);  //首元素地址
//
//	printf("%p\n", &arr);     //整个数组的地址
//
//	printf("%p\n", arr + 1);     //跳过一个元素
//	printf("%p\n", &arr[0] + 1); //跳过一个元素
//	printf("%p\n", &arr + 1);    //跳过一整个数组
//	return 0;
//}


//实现一个对整形数组的冒泡排序
#include<stdio.h>
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
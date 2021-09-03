#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//字符指针
//	char a = 'w';
//	char* pa = &a;
//	printf("%c\n", *pa);
//
//	//指针数组
//	int a1 = 10;
//	int a2 = 20;
//	int a3 = 30;
//	int* p[3] = { &a1,&a2,&a3 };
//	printf("%d %d %d\n", *p[0], *p[1], *p[2]);
//
//	//数组指针
//	char arr1[5] = "abcd";
//	char(*p1)[5] = &arr1;    //&arr1 - 整个数组的地址 
//	printf("%s\n", p1);      //p1中存放的就是arr1的地址
//	
//	//函数指针
//	int(*p2)(int, int) = add;  // add 和 &add 完全等价
//	int ret1 = p2(1, 2);     //用函数指针调佣函数  - 同样可以写为：(*p2)(1,2)
//	printf("%d\n", ret1);
//
//	//函数指针数组
//	int (*p3[5])(int, int) = { add };  //首先是个数组，有1个元素，元素类型是函数指针
//	int ret2 = p3[0](1, 2);          //调用数组中第一元素指向的函数
//	printf("%d\n", ret2);
//
//	//指向函数指针数组的指针
//	int (*(*p4)[5])(int, int) = &p3;
//	int ret3 = (*p4)[0](2, 3);
//	printf("%d\n", ret3);
//	return 0;
//}


//回调函数
//定义：通过函数指针调用的函数
//#include<stdio.h>
//int add(int x, int y)          //加法
//{
//	return x + y;
//}
//int sub(int x, int y)         //减法
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
//	printf("请输入两个数：");
//	scanf("%d %d", &a, &b);
//	int ret = my_function(add, a, b);
//	int temp = my_function(sub, a, b);
//	printf("%d\n", ret);
//	printf("%d\n", temp);
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//void my_sort(int arr[], int sz)          //只能排序int型的数据
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


//qsort库函数的应用 - 可以用来排序任何类型的数据（浮点数，整数，字符串）
//void qsort( void *base,      //void* - 无具体类型指针，可以用来接收任意类型的地址
//            size_t num, 
//            size_t width, 
//            int (__cdecl *compare )(const void *elem1, const void *elem2 ) );



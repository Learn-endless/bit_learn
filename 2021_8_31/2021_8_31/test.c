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
//#include<stdio.h>
//#include<stdlib.h>
//int cmpare(const void* e1, const void* e2)      //qsort的比较函数
//{
//	return *(int*)e1 - *(int*)e2;      //先强转类型然后相减
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmpare);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//qsort排结构体类型数据
//#include<stdio.h>
//#include<stdlib.h>         //qsort库函数的头文件
//#include<string.h>         //strcmp库函数的头文件
//struct stu      //创建一个结构体类型 - stu
//{
//	char name[20];        //名字
//	int age;              //年龄
//};
//int cmpare_name(const void* e1, const void* e2)       //名字比较函数
//{
//	return strcmp((*(struct stu*)e1).name, (*(struct stu*)e2).name);
//	//return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmpare_age(const void* e1, const void* e2)        //年龄比较函数
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//	//return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int main()
//{
//	struct stu arr[3] = { {"张三",15},{"李四",20},{"王五",10} };  //创建一个结构体数组
//	int ret = sizeof(arr) / sizeof(arr[0]);    //计算元素个数
//	//qsort(arr, ret, sizeof(arr[0]), cmpare_name);        //按名字来排序
//	qsort(arr, ret, sizeof(arr[0]), cmpare_age);           //按年龄来排序
//	
//	return 0;
//}


//自定义通用版本的冒泡排序
//#include<stdio.h>
//#include<string.h>         //strcmp库函数的头文件
//struct stu       //创建一个结构体类型 - stu
//{
//	char name[20];        //名字
//	int age;              //年龄
//};
////my_sort函数的自定义结构体比较函数 (名字比较函数)
//int cmpare_name(const void* e1, const void* e2)       
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//} 
////my_sort函数的自定义结构体比较函数 (年龄比较函数)
//int cmpare_age(const void* e1, const void* e2)      
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
////my_sort函数的自定义整形比较函数
//int cmpare_number(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void exchange(char* e1, char* e2, size_t width)  //用char类型的指针接收指向两个元素的指针
//{
//	size_t i = 0;
//	for (i = 0; i < width; i++)   //一个元素的类型是多少字节，就交换多少次
//	{                                 //采用一个字节一个字节的方式来交换
//		char temp = *e1;
//		*e1 = *e2;
//		*e2 = temp;
//		e1++;        //两个指针没循环一次，就往后位移一个char
//		e2++;
//	}
//}
////自定义通用冒泡排序函数
//void my_sort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)     //num个元素，需要比较 num-1 趟
//	{
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)      //每一趟需要两两比较 num-1-i 次 
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//		//为了能使函数通用，所以使用最细的类型char来通过width(一个元素类型的字节大小)使指针指向相邻的两个元素
//			{
//				//交换函数，交换两个元素的类容
//				exchange((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	struct stu arr2[3] = { {"张三",15},{"李四",20},{"王五",10} };   //创建一个结构体数组
//	int ret = sizeof(arr2) / sizeof(arr2[0]);     //计算元素个数
//
//	//my_sort(arr1, sz, sizeof(arr1[0]), cmpare_number);   //排arr1整形数组
//	//my_sort(arr2, ret, sizeof(arr2[0]), cmpare_name);     //排arr2结构体数组 - 名字
//	my_sort(arr2, ret, sizeof(arr2[0]), cmpare_age);      //排arr2结构体数组 - 年龄
//
//	////打印出来看看
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(*&a));  //可以等价于  printf("%d\n",sizeof(a));
	//&a 的类型为：int(*)[4] - 这是一个数组指针
    //再*则表示把指向一个数组的指针解引用，这时得到的就是整个数组
    //故结果为：16
}                                
                                 
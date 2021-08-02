#define _CRT_SECURE_NO_WARNINGS 1
//指针加减整数
//#include<stdio.h>
//#define PE 5
//int main()
//{
//	int arr[PE] = { 0 };
//	int* p = NULL;
//	for (p = &arr[PE]; p > &arr[0];)   //指针之间的关系运算
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


////指针 - 指针
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int* left = arr;                //除 sizeof(数组名)和 &(数组名)外，数组名代表首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]); //求出数组的个数
//	int* right = &arr[sz];
//
//	printf("%d\n", right - left);  // 5
//	printf("%d\n", left - right);  //-5
//	//指针减指针的绝对值就是素组的元素个数
//	//想要使用指针减指针，只能在同一块区域中使用
//
//	return 0;
//}


//求字符串长度
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen_1(char* p)
//{
//	int count = 0;
//	assert(NULL != p);       // 防止野指针的出现,即使报错
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
//	int num = strlen(arr);       //库函数求字符串长度
//	int my_num1 = my_strlen_1(arr); //自定义函数实现：求字符串长度
//	int my_num2 = my_strlen_2(arr); //用指针相减的方法实现
//	printf("%d\n", num);
//	printf("%d\n", my_num1);
//	printf("%d\n", my_num2);
//	return 0;
//}


//指针的解引用操作
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;             //素组首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;       //将素组的元素依次赋值 0——9；
//	}                       //运用指针加整数的方式
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


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


//反转字符串
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
//	printf("请输入一个字符串，可以带空格》");
//	gets_s(arr, 100);       //在2019中gets函数被取消了，所以用gets_s(数组首元素地址，所需存储的空间)
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	reverse_order(arr, count);
//	printf("逆序后的字符串为：%s\n", arr);
//	return 0;
//}


//打印菱形
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)          // 打印菱形的上半部分-7行
//	{
//		for (j = 7; j > i + 1; j--)  // 每一行先打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= 2*i; j++)   // 空格后接着打印*号
//		{
//			printf("*");
//		}
//		printf("\n");                // 一行打印完了之后换下行
//	}
//	for (i = 0; i < 6; i++)          // 打印菱形的下半部分-6行
//	{
//		for (j = 0; j <= i; j++)     // 一行先打印空格
//		{                        
//			printf(" ");              
//		}
//		for (j = 0; j < 11 - 2 * i; j++)  // 再打印*号
//		{
//			printf("*");
//		}
//		printf("\n");                // 打印一行之后，换下行
//	}
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
//思路：
//  1.20元，先一块钱喝一瓶 ——20
//  2.每两个空瓶可以换一瓶汽水——10
//  3.依次重复第2条，直到空瓶的个数不足两个
//  20   10   5    2   1   1    
//#include<stdio.h>
//int main()
//{
//	int money = 0;             // 手里钱的总数
//	int number = 0;            // 能喝汽水的数量
//	int empty = 0;             // 空瓶的数量
//	printf("请输入口袋中钱的数目：");      // 提示一下
//	scanf("%d", &money);
//	number = money;            // 一块一瓶，有多少钱第一轮就能喝多少可乐
//	empty = money;             // 同理，能喝多少可乐，第一轮就能产生多少空瓶
//	while (empty > 1)          // 统计之后用空瓶兑换的可乐的数量，直至空瓶数量小于2时终止
//	{
//		number += empty / 2;           // 把每一轮两个空瓶兑换的可乐加到总数里去
//		empty = empty / 2 + empty % 2; // 更新空瓶的个数。
//		                               // 注意：组不成两个的空瓶需要累计到下一轮  
//	}
//	printf("%d元可以喝%d瓶汽水。\n", money, number);
//
//	return 0;
//}



//调试代码
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//
//	for (i = 0; i <= 12; i++)   // 12次循环导致数组越界
//	{
//		arr[i] = 0;             // 当数组越界访问下标为12的内存空间时，找到的空间恰好是i变量的空间
//		printf("hehe\n");       // i被更改为0，满足循环条件，故死循环
//	}                           // 结论：访问数组元素时要特别注意不要越界访问，避免写出BUG
//
//	return 0;
//}
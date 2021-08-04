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


//c语言规定：地址的比较，数组中的一个地址，可以与数组最后面的后一个空间地址进行比较，
//而不能与数组最前面的前一个空间地址进行比较。
//#include<stdio.h>
//#define PE 5
//int main()
//{
//	float arr[PE] = { 0 };
//	float* p = NULL;
//	for (p = &arr[0]; p < &arr[PE]; )  // 这段代码比较了数组后面的一个float类型的空间地址，允许的方法
//	{
//		*p++ = 0;
//	}
//	for (p = &arr[PE - 1]; p >= &arr[0]; p--)  //这段代码比较了数组前一个float类型的空间地址，错误的方法。
//	{
//		*p = 0;
//	}
//	return 0;
//


//数组名在一些情况下代表的含义
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);          //数组首元素地址
//	printf("%p\n", arr + 1);      //跳过一个元素
//	printf("%p\n", &arr[0]);      //数组首元素地址
//	printf("%p\n", &arr[0] + 1);  //跳过一个元素
//
//	printf("%p\n", &arr);         //整个数组的地址
//	printf("%p\n", &arr + 1);     //跳过一整个数组
//
//	return 0;
//}


//多级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%d\n", *p);   //一级指针，用来存放变量的地址
//	printf("%d\n", **pp); //二级指针，用来存放一级指针的地址
//	return 0;
//}


//指针数组
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a, &b, &c };   //指针数组-它首先是个数组，数组里每个元素的类型是指针（地址）
//	printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(*(arr + i))); //arr+i找到每个元素的位置，*(arr+i)找到每个元素的内容，*(*(arr+i))对每个元素的内容再解引用，找到原来的a，b，c
//	}
//	return 0;
//}

//结构体——用来描述复杂对象
//#include<stdio.h>
//struct student      //用户自定义的结构体类型
//{
//	char name[10];  //结构体成员
//	int age;
//	char ID[10];
//}stu1 = { "chen", 13, "13586" };        //创建的结构体变量--全局变量（放在静态区）
//void my_printf(struct student* m)    //结构体传参
//{
//	printf("%s %d %s\n", m->name, m->age, m->ID);        //指针->成员
//	printf("%s %d %s\n", (*m).name, (*m).age, (*m).ID);  //(*指针).成员
//}
//int main()
//{
//	struct student stu2 = { "wang", 10, "13346" }; //局部变量（放在栈区）
//	struct student* p1 = &stu1;                    //结构体指针
//	struct student* p2 = &stu2;                    //结构体指针
//	//结构体成员访问操作符
//	printf("%s %d %s\n", stu2.name, stu2.age, stu2.ID);  //变量名.成员
//	printf("%s %d %s\n", p2->name, p2->age, p2->ID);     //指针->成员
//	printf("%s %d %s\n", (*p2).name, (*p2).age, (*p2).ID);//(*指针).成员
//
//	printf("%s %d %s\n", stu1.name, stu1.age, stu1.ID);
//	printf("%s %d %s\n", p1->name, p1->age, p1->ID);
//	printf("%s %d %s\n", (*p1).name, (*p1).age, (*p1).ID);
//	my_printf(&stu2);   //注意：结构体在传参时最好传地址，这样可以不需要在栈区上额外开辟空间，用来拷贝一份结构体变量
//
//	return 0;
//}


//结构体-类型重定义（typedef）
//#include<stdio.h>
//typedef struct book
//{
//	char name[30];
//	float price;
//	int ID[10];
//}S;                         //这时的 S 不是结构体变量，而是重定义的结构体类型名
//int main()
//{
//	S b = { "C语言程序设计", 35.5, { 4, 4, 3, 5, 6} };
//	S* b1 = &b;
//	printf("%s %f %d%d%d%d%d\n", b.name, b.price, b.ID[0], b.ID[1], b.ID[2], b.ID[3], b.ID[4]);   // .操作符
//	printf("%s %f %d%d%d%d%d\n", b1->name, b1->price, b1->ID[0], b1->ID[1], b1->ID[2], b1->ID[3], b1->ID[4]);  // ->操作符
//	return 0;
//}


//结构体变量的相互嵌套
//#include<stdio.h>
//struct S
//{
//	char a1[10];
//	int a2;
//	int a3[1];
//};
//struct H
//{
//	char b1[10];
//	int b2;
//	struct S b3;   //结构体 H 类型中又有结构体 S 类型。
//};
//int main()
//{
//	struct H x = { "abc", 10, {"def", 20, {1}} };
//	printf("%s %d %s %d %d\n", x.b1, x.b2, x.b3.a1, x.b3.a2, x.b3.a3[0]); //访问结构体中的结构体—名字.名字.成员
//	return 0;
//}


//函数实现加法操作
//#include<stdio.h>
//int Add(const int x, const int y) //加const修饰，防止x和y的值被改变
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//下面的代码输出什么？
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
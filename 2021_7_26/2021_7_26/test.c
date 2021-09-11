#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));       // 1   字节
//	printf("%d\n", sizeof(short));      // 2   字节
//	printf("%d\n", sizeof(int));        // 4   字节
//	printf("%d\n", sizeof(long));       // 4/8 字节
//	printf("%d\n", sizeof(long long));  // 8   字节
//	printf("%d\n", sizeof(float));      // 4   字节
//	printf("%d\n", sizeof(double));     // 8   字节
//	return 0;
//}


//#include<stdio.h>
//int a = 100;           //全局变量--在代码块外部定义的变量
//int main()
//{                      
//	int a = 10;        //局部变量--在代码块中定义的变量
//
//	printf("a = %d \n", a); //全局变量与局部变量的变量名冲突时，局部优先。
//	return 0;
//}

//practise：
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	//在vs中如果想要正常使用scanf函数，就需要在工程的第一行加上：#define _CRT_SECURE_NO_WARNINGS1
//	scanf("%d %d", &a, &b);   
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//写一个函数求两个整数的较大值
//#include<stdio.h>
//int my_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Max = 0;
//	scanf("%d %d", &a, &b);
//	Max = my_max(a, b);
//	printf("Max = %d\n", Max);
//	return 0;
//}

//assert断言的判断
//#include<stdio.h>
//#include<assert.h>
//void add(int *a, int *b)
//{
//	assert(a != NULL);
//	assert(b != NULL);     //assert断言是为真继续执行，为假报错
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//    add(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//多组输入
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF) //每次输入的时候是输入了一个字符，然后又敲了一个\n
//	{
//		putchar(ch);   //先打印字符，然后打印回车
//	}
//	return 0;
//}


//多组输入只打印数字字符
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch < '0') || (ch > '9'))  //非数字字符不打印
//		{
//			continue;        //把每次敲的回车都不打印
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//输入一串密码，然后确认
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[100] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", arr);
//	printf("请确认密码(Y/N)：");
//	while (getchar() != '\n')  //把缓存区里空格到\n之间的内容清理掉
//	{
//		;
//	}
//	ch = getchar();     //读取一个字符
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//函数返回两个数的实现 - 形参用数组
//#include<stdio.h>
//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//函数返回两个数的实现 - 形参用指针
//#include<stdio.h>
//void test(int* x,int* y)
//{
//	int a = 10;
//	int b = 20;
//	*x = a;
//	*y = b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//函数返回两个数的实现 - 使用全局变量
//#include<stdio.h>
//int a = 0;
//int b = 0;
//void test()
//{
//	int x = 10;
//	int y = 20;
//	a = x;
//	b = y;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", a, b);
//	return 0;
//}

//错误的写反 - return两个值
//#include<stdio.h>
//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;
//}
//int main()
//{
//	int ret = test();
//	printf("%d", ret);
//	return 0;
//}

//打印乘法口诀表
//#include<stdio.h>
//void my_printf_table(int n)
//{
//	int i = 0;
//	for (i = 1; i < n - 1; i++)   //控制所需要打印的行数
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)  //打印每一行的内容
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);    //左对齐两个字符
//		}
//		printf("\n");     //每一行打印后换行
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	my_printf_table(n);
//	return 0;
//}

//迭代实现字符串逆序
//#include<stdio.h>
//#include<string.h>
//void my_rever_string(char* p)
//{
//	int sz = strlen(p) - 1;
//	char* left = p;
//	char* right = p + sz;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	my_rever_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//递归实现字符串逆序
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)  //自定义求字符串函数
//{
//	assert(str);   //断言，避免野指针
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void my_rever_string1(char* str1, char* str2)
//{
//	if (str1 < str2)
//	{		
//		char temp = *str1;
//		*str1 = *str2;
//		*str2 = temp;
//		my_rever_string1(str1 + 1, str2 - 1);
//
//	}
//	else
//	{
//		return;
//	}
//}
//
//void my_rever_string2(char str[])
//{
//	int len = my_strlen(str);
//	char temp = str[0];      //把a放到temp空间中去
//	str[0] = str[len - 1];   //把f放到以前存放a的空间中去
//	str[len - 1] = '\0';     //把以前存放f的地方放上 \0
//	if (my_strlen(str + 1) >= 2) //本次逆序完成后，判断下一次需要逆序的字符串长度是否大于等于2
//	{
//		my_rever_string2(str + 1);   //大于等于2说明至少还有2个元素，继续递归
//	} 
//	str[len - 1] = temp;   //直到最后一次递归后，开始回弹存放。
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int sz = my_strlen(arr) - 1;
////	my_rever_string1(arr, arr + sz);   //把首元素地址和最后一个元素的地址传给函数
//	my_rever_string2(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//递归实现计算一个整数每一位数之和
//#include<stdio.h>
//int DitigSum(int n)
//{
//	if (n > 9)  //如果是两位数及以上，就进行递归操作
//	{
//		return DitigSum(n / 10) + n % 10;
//	}
//	else      //一位数的话，就直接将那一位数返回
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1234;
//	int ret = DitigSum(num);
//	printf("%d", ret);
//	return 0;
//}

//递归实现n的k次方
//#include<stdio.h>
//double DiGui(int n, int k)
//{
//	if (k > 0)                      //n^k     (k为正数)
//		return n * DiGui(n, k - 1);    
//	else if (k == 0)                //n^0
//		return 1.0; 
//	else                            //n^(-k)  (k为负数)
//		return 1.0 / DiGui(n, -k);
//}
//int main()
//{
//	int n = 2;
//	int k = -3;
//	double ret = DiGui(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//数组
//#include<stdio.h>
//int arr1[5];  //全局变量默认的值是0
//int main()
//{
//	int arr[20] = { 1, 2, 3 };  //不完全初始化
//	int arr2[20];   //局部变量默认随机值
//	return 0;
//}

//数组的元素在内存中的空间是连续存放的
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);
	}
	return 0;
}
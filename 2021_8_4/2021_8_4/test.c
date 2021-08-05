#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strcpy
//版本一
//#include<stdio.h>
//void my_strcpy(char* start, char* dest)
//{
//	while (*start != '\0')            //判断start指向的元素是否为 \0
//	{
//		*dest = *start;               //拷贝
//		start++;                      //指针移动
//		dest++;
//	}
//	*dest = '\0';                     //在目标字符串的末尾加上\0
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//  my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//版本二
//#include<stdio.h>
//void my_strcpy(char* start, char* dest)
//{
//	while (*dest++ = *start++)      //精简上面拷贝的过程
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//版本三
//#include<stdio.h>
//void my_strcpy(const char* start, char* dest)   //加上const修饰，防止起始字符串被修改
//{
//	while (*dest++ = *start++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//版本四
//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(const char* start, char* dest)
//{
//	assert(start != NULL);              //加上断言，避免空指针
//	assert(dest != NULL);
//	while (*dest++ = *start++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//版本五
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(const char* start, char* dest)  //加上返回值,加上const修饰，防止起始字符串被修改
//{
//	char* ret = dest;                           //记录目标字符串的首元素地址
//	assert(start != NULL);                      //加上断言，避免空指针-Release版本是可以优化掉的
//	assert(dest != NULL);                       //加上断言，避免空指针
//	while (*dest++ = *start++)
//	{
//		;
//	}
//	return ret;                                 //返回目标字符串的首元素地址
//}
//int main()
//{
//	char arr1[] = "abcdef";                 //注意：源字符串中一定要有字符串的结束标志\0
//	char arr2[20] = { 0 };                  //注意：目标数组的空间一定要够大，同时一定要能被修改
//                                          //不能写成：char* p = "xxxxxxx";
//                                          //这里p存放的是常量字符串的首地址，它是不能被修改的
//	char* ret = my_strcpy(arr1, arr2);          //接收地址
//	printf("%s\n", ret);
//	return 0;
//
//}



//模拟实现strlen
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* p)   // 加上const修饰，防止改变arr数组的内容,size_t是防止返回一个负数
//{
//	int count = 0;
//	assert(p);                 // 加上断言，防止空指针
//	while (*p++)               // 判断当*p为\0时停止循环，同时判断完之后++。
//	{
//		count++;               // 计数
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("字符串长度：%d\n", ret);
//	return 0;
//}



//const的用法
//#include<stdio.h>
//int main()
//{
//	const int a = 0;       //const修饰变量 - 常变量，变量不能被修改
//	// a = 5;              //error!
//	int b = 0;
//	const int* p = &b;     //const放在*号左边修饰指针，*p不能被修改
//	// *p = 10;             //error!
//	int const* p = &a;     //与上面的等价。
//	int c = 0;
//	int* const d = &c;     //const放在*号的右边，d不能被修改
//	// d = &a;             //error！
//	return 0;
//}



//下面时一段很危险的代码
//#include<stdio.h>
//int* test()
//{
//	int a = 0;
//	return &a;    //返回局部变量的地址是很危险的，当空间释放后，这块空间就会不知道拿来干什么
//}
//int main()
//{
//	int* p = test();   //指针一定要初始化，防止野指针，初始化时要置为空
//	*p = 0;       //更改一块陌生空间的内容，更是危险操作。
//	return 0;
//}



//探索库函数strlen（）的返回值类型，下面函数打印什么内容
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0) //库函数strlen返回类型为size_t，这是无符号整形，与unsigned int 一样。
//	{
//		printf("hehe!\n");        //此程序运行结果打印-hehe！
//	}
//	else
//	{
//		printf("haha!\n");
//	}
//	return 0;
//}



//统计一个数中二进制1的个数
//#include<stdio.h>
//size_t my_count_bit_one1(int a)   //版本一   //size_t 使得即使返回一个负数，也不会有影响。    
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)          //循环要从0开始，判断二进制最右一位不需要右移。
//	{
//		if (((a >> i) & 1) == 1)      //用右移操作符和按位与解答，缺点就是要循环32次，浪费时间。
//		{ 
//			count++;
//		}
//	}
//	return count;
//}
// size_t my_count_bit_one2(unsigned int a) //版本二
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)            //这种写法，就比上面的在时间上节约很多
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
// size_t my_count_bit_one3(a)  //版本三
// {
//	 int count = 0;
//	 while (a)
//	 {
//		 a = a & (a - 1);        // a & (a - 1):每次运行一次，就消掉最右边的一个1 （精妙算法）
//		 count++;
//	 }
//	 return count;
// }
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数》");
//	scanf("%d", &a);
//	printf("%d中二进制1的个数：%u\n", a, my_count_bit_one1(a));    //%u：打印无符号整形
//	printf("%d中二进制1的个数：%u\n", a, my_count_bit_one2(a));
//	printf("%d中二进制1的个数：%u\n", a, my_count_bit_one3(a));
//	return 0;
//}




//写一个代码，判断一个数是不是2的次方数:用 n & （n - 1）
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数》");      //提示一下
//	scanf("%d", &a);
//	a = a & (a - 1);             //整数的存储是以二进制方式存储的，并且2的次方数的二进制数里面只有一个1.
//	if (0 == a)                  //运行一遍后，a 的值为0，则是2的次方数.反之，不是.
//	{
//		printf("Yes!\n");
//	}
//	else
//	{
//		printf("No!\n");
//	}
//	return 0;
//}
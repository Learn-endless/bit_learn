#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现 strncat - 有限制的字符串追加函数
//#include<stdio.h>
//#include<assert.h>
//char* my_strncat(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* temp = dest;
//	while (*dest)     //找到目标字符串的末尾
//	{                 //从目标字符串的末尾开始追加
//		dest++;
//	}
//	while ((n > 0) && *src)
//	//满足不大于需要追加的个数，并且源字符串没有遍历到'\0'时，进行覆盖
//	{
//		*dest++ = *src++;
//		n--;
//	}
//	*dest = '\0';
//	return temp;
//}
//int main()
//{
//	char str1[] = "abcdefgh";
//	char str2[50] = "xxx\0xxxxxxxxxxxxxxxxxxxxxx";
//
//	char* ret = my_strncat(str2, str1, 3);
//	printf(ret);
//	printf("\n");
//	printf(str2);
//
//	return 0;
//}


//模拟实现strncpy - 有限制的字符串拷贝
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while ((count > 0) && (*dest++ = *src++))
//	{
//		count--;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[50] = "xxx\0xxxxxxxxxxxxxxxxx";  //不完全初始化
//	char* ret = my_strncpy(str2, str1, 5);
//	printf(ret);
//
//	return 0;
//}


//
//#include <string.h>
//#include <stdio.h>
//
//void main(void)
//{
//	char str1[] = "abcdef";
//	char str2[50] = "xxx\0xxxxxxxxxxxxxxxxx";  
//	printf("Before: %s\n", str2);
//	strncpy(str2, str1, 5);
//	printf("After:  %s\n", str2);
//}


//在一组书中找出两只单身狗
//#include<stdio.h>
//void SearchSingleDog(int* p, size_t n)
//{
//	//先给数组排序 - 这里是升序
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0; 
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (p[j] > p[j + 1])
//			{
//				int temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//	//相邻的两个元素进行比较，相同加2，不相同打印出来，在加1
//	i = 0;
//	while (i < n)
//	{
//		if (p[i] == p[i + 1])
//		{
//			i += 2;
//		}
//		else
//		{
//			printf("%d ", p[i]);
//			i++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,1,2,3,5,6,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);   //求出数组元素个数
//	printf("单身狗就是：");
//	SearchSingleDog(arr, sz);   //自定义查找单身狗函数
//	return 0;
//}


//模拟实现atoi函数
//#include <stdio.h>
//#include <assert.h>
//int my_atoi(const char* str)
//{
//	assert(str);
//	//当字符串是 '-' 和 '+' 开头时
//	if (*str == '-' || *str == '+')
//	{
//		char ret = *str;
//		str++;            //指针往后走一步，从下个字符开始判断
//		int sum = 0;			
//		int i = 0;
//		//当前字符是 '0' — '9'中间的字符时，进入循环
//		while (*str && (*str >= '0' && *str <= '9'))
//		{
//			//把第一次的数字字符对应的数字的值直接加载sum里
//			if (i == 0)
//			{
//				sum += (*str - '0');
//				i = 1;
//			}
//			//后面的字符都走else
//			else
//			{
//				//从第二个数字字符开始，先让sum扩大10倍，然后加上当前的值
//				sum = (sum * 10) + (*str - '0');
//			}
//			str++;  //判断下一个字符
//		}
//		//若果sum不为0时进入
//		if (sum)
//		{
//			//这时判断最开始出现的字符是否为 '-'
//			if (ret == '-')
//			{
//				//返回一个负值
//				return -sum;
//			}
//			//其他情况直接返回
//			return sum;
//		}
//		//运行到这里，表示第二个字符不是数字字符
//		return 0;
//	}
//
//	//当字符串是 '0' — '9' 开头时
//	else if (*str >= '0' && *str <= '9')
//	{
//		int sum = 0;		
//		int i = 0;
//		//直接开始循环累加
//		while (*str && (*str >= '0' && *str <= '9'))
//		{
//			//第一次直接累加进sum
//			if (i == 0)
//			{
//				sum += (*str - '0');
//				i = 1;
//			}
//			//从第二次开始先把sum扩大10倍，然后累加
//			else
//			{
//				sum = (sum * 10) + (*str - '0');
//			}
//			str++;  //判断下一个字符
//		}
//		//直接返回sum
//		return sum;
//	}
//
//	//其他都返回0
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	char str[] = "-123abc";
//	n = my_atoi(str);
//
//	printf("string = %s\ninteger = %d\n", str, n);
//
//	return 0;
//}


int my_atoi(const char* str) 
{

	int result = 0;

	int signal = 1; /* 默认为正数 */

	if ((*str >= '0' && *str <= '9') || *str == '-' || *str == '+') {

		if (*str == '-' || *str == '+') {

			if (*str == '-')

				signal = -1; /* 输入负数 */

			str++;

		}

	}

	else return 0;

	//开始转换
	while (*str >= '0' && *str <= '9')

		result = result * 10 + (*str++ - '0');

	return signal * result;

}
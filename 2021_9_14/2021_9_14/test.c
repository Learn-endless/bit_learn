#define _CRT_SECURE_NO_WARNINGS 1

//strcat - 字符串追加 - (不能给自己追加)
//char *strcat( char *strDestination, const char *strSource );
//返回目标字符串的首元素地址
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* my_strcat(char* destion, const char* source)
//{
//	assert(destion && source);
//
//	char* ret = destion;    //拷贝一份destion的地址
//	//找到destion里面的'\0'
//	while (*destion)     
//	{
//		destion++;
//	}
//	//追加字符串
//	while (*destion++ = *source++)
//	{
//		;
//	}
//	return ret;    //返回destion的首元素地址
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//
//	////char* n = strcat(arr2, "d"); - error
//	//char arr3[] = { 'a','b','c'};
//	//strcat(arr1, arr3); // error	
//
//	//char* p = strcat(arr1, arr2);
//	//printf("%s\n", p);
//	char* p1 = my_strcat(arr1, arr2);
//	printf("%s\n", p1);
//	return 0;
//}

//#include<stdio.h>
//void set(int arr[])
//{
//	*arr = 10;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	set(arr);
//	printf("%d", *arr);
//	return 0;
//}

//#include<stdio.h>
//void set(int* p)
//{
//	*p = 10;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	set(arr);
//	printf("%d", *arr);
//	return 0;
//}

//#include<stdio.h>
//int* set(int* p)
//{
//	*p = 10;
//	return p;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* q = set(arr);
//	printf("%d", *q);
//	return 0;
//}
//总结：数组传参的时候，传的是地址，不是值，所以地址里面的内容被改变时，主函数里面也会改变


//strcmp - 字符串比较 (比较内容)
//int strcmp( const char *string1, const char *string2 );
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
////模拟实现strcmp函数
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcd";
//
//	//int ret = strcmp(arr1, arr2);
//	//if (ret == 0)
//	//{
//	//	printf("=\n");
//	//}
//	//else if (ret > 0)
//	//{
//	//	printf(">\n");
//	//}
//	//else
//	//{
//	//	printf("<\n");
//	//}
//
//	//printf("%d\n", ret);
//
//	int temp = my_strcmp(arr1, arr2);
//	if (temp == 0)
//	{
//		printf("=\n");
//	}
//	else if (temp > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	printf("%d\n", temp);
//
//	return 0;
//}


//strcpy , strcat , strcmp 这三个库函数都是长度不受限制的库函数 (不安全)
//strncpy , strncat , strncmp - 长度受限制的字符串

//strncpy()- 有限制的字符串拷贝
//char *strncpy( char *strDest, const char *strSource, size_t count );

//当count所拷贝的数据个数大于Source字符串中的个数，以'\0'补充
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr3[] = "abcdefgh";
//	char arr2[] = "xxxx";
//
//	char* p1 = strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	printf("%s\n", p1);
//	char* p2 = strncpy(arr3, arr2, 6);   //超过，补'\0'
//	printf("%s\n", p2);
//
//	return 0;
//}

//strncat - 有限制的字符串追加函数
//char* strncat(char* strDest, const char* strSource, size_t count);
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "abc\0xxxxxxxxxxxx";
//	char arr2[] = "defgh";
//	//strncat(arr1, arr2, 3);
//	strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp - 有限制的字符串比较函数
//int strncmp(const char* string1, const char* string2, size_t count);
//size_t count:比较的个数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "ab";
//	int ret = strncmp(arr1, arr2, 4);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//strstr - 主字符串中查找子字符串函数
//char *strstr( const char *string, const char *strCharSet );
//char *:返回 strCharSet 在 string 中第一次出现的地址，没有出现，则返回空指针
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////strstr的模拟实现
//char* my_strstr(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	while (*str1)
//	{
//		s1 = str1;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return str1;
//		}
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "efabcdgh";
//	char str2[] = "abcd";
//
//	//char* ret = strstr(str1, str2);
//	//if (ret == NULL)
//	//{
//	//	printf("NULL空指针\n");
//	//}
//	//else
//	//{
//	//	printf("%s\n", ret);
//	//}
//	char* temp = my_strstr(str1, str2);
//	if (temp == NULL)
//	{
//		printf("NULL空指针\n");
//	}
//	else
//	{
//		printf("%s\n", temp);
//	}
//	return 0;
//}


//strtok - 字符串切割库函数
// char *strtok( char *strToken, const char *strDelimit );
//strtok 会更改源字符串的内容，所以在使用时，需要先将源字符串拷贝一份
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "zpw@bitedu.tech";
//	char arr2[200] = { 0 };        //用来存放arr1字符串的拷贝内容
//	char arr3[] = "@.";            //用来存放分割符的字符串
//
//	strcpy(arr2, arr1);    //使用拷贝的字符串。
//
//	char* ret = NULL;
//	for (ret = strtok(arr2, arr3); ret != NULL; ret = strtok(NULL, arr3)) //不为NULL表示还有内容，继续
//	{
//		printf("%s\n", ret);  //打印每次返回来的标识符
//	}
//
//	return 0;
//}

//memcpy - 内存拷贝函数
//void *memcpy( void *dest, const void *src, size_t count );
//这个函数在拷贝时，是一个字节一个字节来进行拷贝的
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* dest,const void* sour, size_t count)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)sour;    //一个一个字节拷贝，用最细的单位
//		dest = (char*)dest + 1;         //这样写可移植性更高
//		sour = (char*)sour + 1;          
//	}
//	return ret;     //返回目标字符串的首元素地址
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[20] = { 0 };
//
//	//模拟实现memcpy函数
//	int* ret = my_memcpy(arr2, arr1,sizeof(arr1)); // - 使用自定义函数
//	//int* ret = memcpy(arr2,arr1,sizeof(arr1));   // - 使用库函数
//
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(ret + i));
//	}
//
//	return 0;
//}


//模拟实现strlen - 统计字符的个数
#include<stdio.h>
int main()
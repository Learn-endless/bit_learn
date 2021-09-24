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
//	char* p1 = strncpy(arr1, arr2, 2);
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
//	char arr1[50] = "abc\0xxxxxxxxxxxx";
//	char arr2[] = "defgh";
//	strncat(arr1, arr2, 8);  //从第一个'\0'出开始追加。
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
//	char arr2[] = "abcd";
//	int ret = strncmp(arr1, arr2, 4);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf("=\n");
//	}
//
//	printf("%d\n", ret);
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
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* p)
//{
//	assert(p);
//	int count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}


//模拟实现strcpy函数
//char *strcpy( char *strDestination, const char *strSource );
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* p = dest;
//	assert(dest && sour);
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return p;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[200] = { 0 };
//	char* p = my_strcpy(arr2, arr1);
//	printf("%s\n", p);
//}


//模拟实现 memmove 函数 —— 内存拷贝函数(可以拷贝内存重叠的地方)
//void *memmove( void *dest, const void *src, size_t count );
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//dest 在 src 的右边，从后向前拷贝
//	if (dest > src)
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	// dest 在 src 的左边，从前往后拷贝
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest)++ = *((char*)src)++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "abcdefgh student";
//	char* p = my_memmove(arr+2, arr, 4);
//	printf("%s\n", p);
//	return 0;
//}


//strlen实例
//#include<stdio.h>
//#include<string.h>  //引头文件
//int main()
//{
//	char str1[] = "abcd\0efgh"; 
//	char str2[] = { 'a','b','c','d'}; //不放字符串结尾标志
//	size_t ret1 = strlen(str1); //接收统计的个数
//	size_t ret2 = strlen(str2);
//	printf("%u\n", ret1);      //size_t :unsigned int,故使用%u打印
//	printf("%u\n", ret2);
//	return 0;
//}


//my_strlen
//size_t strlen( const char *string );
//#include<stdio.h>
//#include<assert.h>    //断言的头文件。
//size_t my_strlen(const char* str)  // const修饰，使原字符串不会被修改。
//{
//	assert(str);      //断言：为空指针(NULL)时报错。
//	size_t count = 0; //size_t 类型的计数器，使它跟返回类型一致。
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str1[] = "abcd\0efgh";        //提前给个\0
//	char str2[] = { 'a','b','c','d' }; //不放\0
//	size_t ret1 = my_strlen(str1);   
//	size_t ret2 = my_strlen(str2);
//	printf("%u\n", ret1);     
//	printf("%u\n", ret2);
//
//	return 0;
//}


////strcpy - 字符串拷贝函数
////char *strcpy( char *strDestination, const char *strSource );
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xxxxxxxxxxxxxx";
//	char* p = strcpy(arr2, arr1);
// 
//	printf("%s\n", p);
//
//	return 0;
//}


//模拟实现 strcpy 库函数
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);   //断言，避免空指针
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;    //返回目标地址
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xxxxxxxxxxxxxx";
//	char* p = my_strcpy(arr2, arr1);
//	printf("%s\n", p);
//
//	return 0;
//}

//strcat - 字符串追加
//char* strcat(char* strDestination, const char* strSource);
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[50] = "abc\0abc";
//	strcat(str1, str1);
//	printf("%s\n", str1);
//		
//	return 0;
//}


//模拟实现my_strcat函数
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[20] = "abc";   //不完全初始化
//	char str2[] = "def";
//	char* ret = my_strcat(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}


//strcmp - 字符串比较函数
//int strcmp(const char* string1, const char* string2);
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abc";
//	int ret = strcmp(str1, str2);
//	if (ret > 0)
//	{
//		printf(">");
//	}
//	else if (ret < 0)
//	{
//		printf("<");
//	}
//	else
//	{
//		printf("=");
//	}
//	return 0;
//}


//模拟实现strcmp库函数
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 && *str1)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abcdef";
//	int ret = my_strcmp(str1, str2);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf("=\n");
//	}
//	printf("%d\n", ret);  //打印一下 my_strcmp 的返回值
//	return 0;
//}


//strstr - 在目标字符串中查找源字符串，找到后返回目标字符串中源字符串的地址，反之，返回NULL
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* ret = strstr(str, "simple");
//	if (ret == NULL)
//	{
//		printf("String not found!\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//模拟实现strstr库函数
//#include <stdio.h>
//#include<assert.h>
//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (1)
//	{
//		const char* p = str1;
//		const char* q = str2;
//		while (*p == *q && *p != '\0' && *q != '\0')
//		{
//			p++;
//			q++;
//		}
//		if (*q == '\0')
//		{
//			return str1;
//		}
//		else if (*str1 == '\0')
//		{
//			return NULL;
//		}
//		str1++;
//	}
//}
//int main()
//{
//	char str[] = "This is a simple string";
//    const char* ret = my_strstr(str, "simple");
//	if (ret == NULL)
//	{
//		printf("String not found!\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok() - 字符串分隔函数
//char *strtok( char *strToken, const char *strDelimit );
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char seq[] = " ";         //用来存储分隔符的字符串
//
//	char str1[200] = { 0 };   //strtok函数会改变源字符串的内容
//	strcpy(str1, str);        //所以拷贝一份用来使用
//	//strtok这个函数只有在第一次使用时需要传入目标字符串的首地址，
//	//往后它就会记住分隔符后面第一个字符的地址，并且每次分隔后，它
//	//就会返回分隔出的字符串的首元素地址
//	for (char* ret = strtok(str1, seq); ret != NULL; ret = strtok(NULL, seq))
//    //这个函数配和for循环特别好用，所用的都分隔完毕后，它就会返回一个NULL
//	{
//		printf("%s\n",ret);
//	}
//
//	return 0;
//}


//模拟实现my_strtok
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strtok(char* str,const char* seq)
//{	
//	assert(seq);
//	static char* Q = "abc";         //随便指向一串常量字符串，避免野指针
//	if (*Q == '\0')                 //分隔完所有字符串了
//	{
//		return NULL;
//	}     
//	if (str != NULL)                //当时第一次执行strtok时，走if，否则走else
//	{
//		char* ret = str;            //存一份起始坐标
//		char* w = str;
//		while (*w != '\0')
//		{
//			const char* temp = seq; //用来遍历分隔符字符串
//			while (*temp != '\0')
//			{
//				if (*w != *temp)   //遍历
//				{
//					temp++;       
//				}
//				else               //找到了分隔出的字符串
//				{
//					*w = '\0';     //分隔符置'\0'
//					Q = w + 1;     //下一个字符串的首元素地址放到Q中去
//					return ret;    //返回分隔出的字符串首元素地址
//				}
//			}
//			w++;
//		}
//		Q = w;                    //把字符串末尾'\0'的地址给Q，表示字符串分隔完了。
//		return ret;               //返回当前字符串的首元素地址
//	}
//	else
//	{
//		char* ret = Q;           //拷贝一份首元素地址
//		char* w = Q;             //把Q里面存放的下一个字符串的首元素地址给到w              
//		while (*w != '\0')
//		{
//			const char* temp = seq;
//			while (*temp != '\0')
//			{
//				if (*w != *temp)
//				{
//					temp++;
//				}
//				else
//				{
//					*w = '\0';
//					Q = w + 1;
//					return ret;
//				}
//			}
//			w++;
//		}
//		Q = w;
//		return ret;
//	}
//}
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char seq[] = " ";         //用来存储分隔符的字符串
//
//	char str1[200] = { 0 };   //strtok函数会改变源字符串的内容
//	strcpy(str1, str);        //所以拷贝一份用来使用
//	//strtok这个函数只有在第一次使用时需要传入目标字符串的首地址，
//	//往后它就会记住分隔符后面第一个字符的地址，并且每次分隔后，它
//	//就会返回分隔出的字符串的首元素地址
//	for (char* ret = my_strtok(str1, seq); ret != NULL; ret = my_strtok(NULL, seq))
//		//这个函数配和for循环特别好用，所用的都分隔完毕后，它就会返回一个NULL
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//必须包含的头文件
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}


//strerror() - 可以返回C语言内置的错误码对应的错误信息
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%s\n", strerror(-1));// Unknown error
//	printf("%s\n", strerror(0));// No error
//	printf("%s\n", strerror(1));// Operation not permitted
//	printf("%s\n", strerror(2));// No such file or directory
//	printf("%s\n", strerror(3));// No such process
//	printf("%s\n", strerror(4));// Interrupted function call
//	printf("%s\n", strerror(5));// Input / output error
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));   //errno - C语言里存放错误码信息的内置全局变量
//		perror("测试");//打印 ：+ 错误信息
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	char str[] = "abcdef";
	char* p = "abcdef";

	printf("abcdef\n");   //等价的
	printf(str);
	printf(p);

	return 0;
}
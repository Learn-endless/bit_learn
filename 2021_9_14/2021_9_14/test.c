#define _CRT_SECURE_NO_WARNINGS 1

//strcat - �ַ���׷�� - (���ܸ��Լ�׷��)
//char *strcat( char *strDestination, const char *strSource );
//����Ŀ���ַ�������Ԫ�ص�ַ
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* my_strcat(char* destion, const char* source)
//{
//	assert(destion && source);
//
//	char* ret = destion;    //����һ��destion�ĵ�ַ
//	//�ҵ�destion�����'\0'
//	while (*destion)     
//	{
//		destion++;
//	}
//	//׷���ַ���
//	while (*destion++ = *source++)
//	{
//		;
//	}
//	return ret;    //����destion����Ԫ�ص�ַ
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
//�ܽ᣺���鴫�ε�ʱ�򣬴����ǵ�ַ������ֵ�����Ե�ַ��������ݱ��ı�ʱ������������Ҳ��ı�


//strcmp - �ַ����Ƚ� (�Ƚ�����)
//int strcmp( const char *string1, const char *string2 );
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
////ģ��ʵ��strcmp����
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


//strcpy , strcat , strcmp �������⺯�����ǳ��Ȳ������ƵĿ⺯�� (����ȫ)
//strncpy , strncat , strncmp - ���������Ƶ��ַ���

//strncpy()- �����Ƶ��ַ�������
//char *strncpy( char *strDest, const char *strSource, size_t count );

//��count�����������ݸ�������Source�ַ����еĸ�������'\0'����
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
//	char* p2 = strncpy(arr3, arr2, 6);   //��������'\0'
//	printf("%s\n", p2);
//
//	return 0;
//}

//strncat - �����Ƶ��ַ���׷�Ӻ���
//char* strncat(char* strDest, const char* strSource, size_t count);
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[50] = "abc\0xxxxxxxxxxxx";
//	char arr2[] = "defgh";
//	strncat(arr1, arr2, 8);  //�ӵ�һ��'\0'����ʼ׷�ӡ�
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp - �����Ƶ��ַ����ȽϺ���
//int strncmp(const char* string1, const char* string2, size_t count);
//size_t count:�Ƚϵĸ���
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


//strstr - ���ַ����в������ַ�������
//char *strstr( const char *string, const char *strCharSet );
//char *:���� strCharSet �� string �е�һ�γ��ֵĵ�ַ��û�г��֣��򷵻ؿ�ָ��
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////strstr��ģ��ʵ��
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
//	//	printf("NULL��ָ��\n");
//	//}
//	//else
//	//{
//	//	printf("%s\n", ret);
//	//}
//	char* temp = my_strstr(str1, str2);
//	if (temp == NULL)
//	{
//		printf("NULL��ָ��\n");
//	}
//	else
//	{
//		printf("%s\n", temp);
//	}
//	return 0;
//}


//strtok - �ַ����и�⺯��
// char *strtok( char *strToken, const char *strDelimit );
//strtok �����Դ�ַ��������ݣ�������ʹ��ʱ����Ҫ�Ƚ�Դ�ַ�������һ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "zpw@bitedu.tech";
//	char arr2[200] = { 0 };        //�������arr1�ַ����Ŀ�������
//	char arr3[] = "@.";            //������ŷָ�����ַ���
//
//	strcpy(arr2, arr1);    //ʹ�ÿ������ַ�����
//
//	char* ret = NULL;
//	for (ret = strtok(arr2, arr3); ret != NULL; ret = strtok(NULL, arr3)) //��ΪNULL��ʾ�������ݣ�����
//	{
//		printf("%s\n", ret);  //��ӡÿ�η������ı�ʶ��
//	}
//
//	return 0;
//}


//memcpy - �ڴ濽������
//void *memcpy( void *dest, const void *src, size_t count );
//��������ڿ���ʱ����һ���ֽ�һ���ֽ������п�����
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* dest,const void* sour, size_t count)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)sour;    //һ��һ���ֽڿ���������ϸ�ĵ�λ
//		dest = (char*)dest + 1;         //����д����ֲ�Ը���
//		sour = (char*)sour + 1;          
//	}
//	return ret;     //����Ŀ���ַ�������Ԫ�ص�ַ
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[20] = { 0 };
//
//	//ģ��ʵ��memcpy����
//	int* ret = my_memcpy(arr2, arr1,sizeof(arr1)); // - ʹ���Զ��庯��
//	//int* ret = memcpy(arr2,arr1,sizeof(arr1));   // - ʹ�ÿ⺯��
//
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(ret + i));
//	}
//
//	return 0;
//}


//ģ��ʵ��strlen - ͳ���ַ��ĸ���
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


//ģ��ʵ��strcpy����
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


//ģ��ʵ�� memmove ���� ���� �ڴ濽������(���Կ����ڴ��ص��ĵط�)
//void *memmove( void *dest, const void *src, size_t count );
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//dest �� src ���ұߣ��Ӻ���ǰ����
//	if (dest > src)
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	// dest �� src ����ߣ���ǰ���󿽱�
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


//strlenʵ��
//#include<stdio.h>
//#include<string.h>  //��ͷ�ļ�
//int main()
//{
//	char str1[] = "abcd\0efgh"; 
//	char str2[] = { 'a','b','c','d'}; //�����ַ�����β��־
//	size_t ret1 = strlen(str1); //����ͳ�Ƶĸ���
//	size_t ret2 = strlen(str2);
//	printf("%u\n", ret1);      //size_t :unsigned int,��ʹ��%u��ӡ
//	printf("%u\n", ret2);
//	return 0;
//}


//my_strlen
//size_t strlen( const char *string );
//#include<stdio.h>
//#include<assert.h>    //���Ե�ͷ�ļ���
//size_t my_strlen(const char* str)  // const���Σ�ʹԭ�ַ������ᱻ�޸ġ�
//{
//	assert(str);      //���ԣ�Ϊ��ָ��(NULL)ʱ����
//	size_t count = 0; //size_t ���͵ļ�������ʹ������������һ�¡�
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str1[] = "abcd\0efgh";        //��ǰ����\0
//	char str2[] = { 'a','b','c','d' }; //����\0
//	size_t ret1 = my_strlen(str1);   
//	size_t ret2 = my_strlen(str2);
//	printf("%u\n", ret1);     
//	printf("%u\n", ret2);
//
//	return 0;
//}


////strcpy - �ַ�����������
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


//ģ��ʵ�� strcpy �⺯��
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);   //���ԣ������ָ��
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;    //����Ŀ���ַ
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

//strcat - �ַ���׷��
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


//ģ��ʵ��my_strcat����
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
//	char str1[20] = "abc";   //����ȫ��ʼ��
//	char str2[] = "def";
//	char* ret = my_strcat(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}


//strcmp - �ַ����ȽϺ���
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


//ģ��ʵ��strcmp�⺯��
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
//	printf("%d\n", ret);  //��ӡһ�� my_strcmp �ķ���ֵ
//	return 0;
//}


//strstr - ��Ŀ���ַ����в���Դ�ַ������ҵ��󷵻�Ŀ���ַ�����Դ�ַ����ĵ�ַ����֮������NULL
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


//ģ��ʵ��strstr�⺯��
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

//strtok() - �ַ����ָ�����
//char *strtok( char *strToken, const char *strDelimit );
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char seq[] = " ";         //�����洢�ָ������ַ���
//
//	char str1[200] = { 0 };   //strtok������ı�Դ�ַ���������
//	strcpy(str1, str);        //���Կ���һ������ʹ��
//	//strtok�������ֻ���ڵ�һ��ʹ��ʱ��Ҫ����Ŀ���ַ������׵�ַ��
//	//�������ͻ��ס�ָ��������һ���ַ��ĵ�ַ������ÿ�ηָ�����
//	//�ͻ᷵�طָ������ַ�������Ԫ�ص�ַ
//	for (char* ret = strtok(str1, seq); ret != NULL; ret = strtok(NULL, seq))
//    //����������forѭ���ر���ã����õĶ��ָ���Ϻ����ͻ᷵��һ��NULL
//	{
//		printf("%s\n",ret);
//	}
//
//	return 0;
//}


//ģ��ʵ��my_strtok
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strtok(char* str,const char* seq)
//{	
//	assert(seq);
//	static char* Q = "abc";         //���ָ��һ�������ַ���������Ұָ��
//	if (*Q == '\0')                 //�ָ��������ַ�����
//	{
//		return NULL;
//	}     
//	if (str != NULL)                //��ʱ��һ��ִ��strtokʱ����if��������else
//	{
//		char* ret = str;            //��һ����ʼ����
//		char* w = str;
//		while (*w != '\0')
//		{
//			const char* temp = seq; //���������ָ����ַ���
//			while (*temp != '\0')
//			{
//				if (*w != *temp)   //����
//				{
//					temp++;       
//				}
//				else               //�ҵ��˷ָ������ַ���
//				{
//					*w = '\0';     //�ָ�����'\0'
//					Q = w + 1;     //��һ���ַ�������Ԫ�ص�ַ�ŵ�Q��ȥ
//					return ret;    //���طָ������ַ�����Ԫ�ص�ַ
//				}
//			}
//			w++;
//		}
//		Q = w;                    //���ַ���ĩβ'\0'�ĵ�ַ��Q����ʾ�ַ����ָ����ˡ�
//		return ret;               //���ص�ǰ�ַ�������Ԫ�ص�ַ
//	}
//	else
//	{
//		char* ret = Q;           //����һ����Ԫ�ص�ַ
//		char* w = Q;             //��Q�����ŵ���һ���ַ�������Ԫ�ص�ַ����w              
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
//	char seq[] = " ";         //�����洢�ָ������ַ���
//
//	char str1[200] = { 0 };   //strtok������ı�Դ�ַ���������
//	strcpy(str1, str);        //���Կ���һ������ʹ��
//	//strtok�������ֻ���ڵ�һ��ʹ��ʱ��Ҫ����Ŀ���ַ������׵�ַ��
//	//�������ͻ��ס�ָ��������һ���ַ��ĵ�ַ������ÿ�ηָ�����
//	//�ͻ᷵�طָ������ַ�������Ԫ�ص�ַ
//	for (char* ret = my_strtok(str1, seq); ret != NULL; ret = my_strtok(NULL, seq))
//		//����������forѭ���ر���ã����õĶ��ָ���Ϻ����ͻ᷵��һ��NULL
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//���������ͷ�ļ�
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}


//strerror() - ���Է���C�������õĴ������Ӧ�Ĵ�����Ϣ
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
//		printf("%s\n", strerror(errno));   //errno - C�������Ŵ�������Ϣ������ȫ�ֱ���
//		perror("����");//��ӡ ��+ ������Ϣ
//	}
//	else
//	{
//		printf("���ļ��ɹ�\n");
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	char str[] = "abcdef";
	char* p = "abcdef";

	printf("abcdef\n");   //�ȼ۵�
	printf(str);
	printf(p);

	return 0;
}
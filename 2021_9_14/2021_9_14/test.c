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
//	char* p1 = strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
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
//	char arr1[20] = "abc\0xxxxxxxxxxxx";
//	char arr2[] = "defgh";
//	//strncat(arr1, arr2, 3);
//	strncat(arr1, arr2, 8);
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
//	char arr2[] = "ab";
//	int ret = strncmp(arr1, arr2, 4);
//
//	printf("%d\n", ret);
//
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
#include<stdio.h>
int main()
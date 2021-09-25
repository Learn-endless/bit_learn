#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int FindData(int* seq, int len, int x)
//{
//	int count = 0;
//	while (seq[count] != x && count < len)
//	{
//		count++;
//	}
//	if (seq[count] == x)
//	{
//		return count;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };    //查找的范围
//	int len = sizeof(arr) / sizeof(arr[0]);    //计算数组元素个数
//	int input = 0;
//	scanf("%d", &input);    //需要查找的数
//	int ret = FindData(arr, len, input);
//	if (ret == -1)
//	{
//		printf("未找到！\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//
//	return 0;
//}


//实现自己的my_memmove
//void *memmove( void *dest, const void *src, size_t count );

//#include<stdio.h>
//void* my_memmove(void* dest, void* sour, size_t count)
//{
//	//从前向后拷贝
//	if (dest < sour)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)sour;
//			dest = (char*)dest + 1;
//			sour = (char*)sour + 1;
//		}
//	}
//	//从后往前
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)sour + count);
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr, arr + 2, 16);
//
//	return 0;
//}


//#include<stdio.h>
//typedef struct pc
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}w;
//int main()
//{
//	printf("%d", sizeof(w));
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 2+3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc
//	(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d", sizeof(struct _Record_Struct));
//	return 0;
//}


//#include<stdio.h>	
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}


//#include<stdio.h>   
//#include<string.h>
//struct tagPIM
//{
//    unsigned char ucPim1;
//    unsigned char ucData0 : 1;
//    unsigned char ucData1 : 2;
//    unsigned char ucData2 : 3;
//}*pstPimData;
//
//int main()
//{
//    unsigned char puc[4];
// 
//    pstPimData = (struct tagPIM*)puc;
//
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


#include<stdio.h>
union
{
    short k;
    char i[2];
}*s, a;

int main()
{
    s = &a;
    s->i[0] = 0x39;
    s->i[1] = 0x38;
    printf("%x\n", a.k);
    return 0;
}
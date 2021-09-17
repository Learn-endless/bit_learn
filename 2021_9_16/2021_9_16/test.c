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

#include<stdio.h>
void* my_memmove(void* dest, void* sour, size_t count)
{
	//从前向后拷贝
	if (dest < sour)
	{
		while (count--)
		{
			*(char*)dest = *(char*)sour;
			dest = (char*)dest + 1;
			sour = (char*)sour + 1;
		}
	}
	//从后往前
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)sour + count);
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr, arr + 2, 16);

	return 0;
}
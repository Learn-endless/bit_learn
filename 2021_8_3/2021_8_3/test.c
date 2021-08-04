#define _CRT_SECURE_NO_WARNINGS 1
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分
//#include<stdio.h>
//void my_swap(int* p, int n)
//{
//	int left = 0;                  
//	int right = n - 1;         
//	while (left < right)           // 只有在范围内找到的left和right才是需要交换的
//	{
//		while ((*(left + p) % 2 == 1) && (left < right))  //从左往右找第一个偶数，并且一定要在left < right这个范围内，不然就不需要交换
//		{
//			left++;
//		}
//		while ((*(right + p) % 2 == 0) && (left < right)) //从右往左找第一个奇数，同理也要在范围内
//		{
//			right--;
//		}
//		if (left < right)       //判断找到的偶数和奇数是否在left<right这个范围内，满足则需要交换，否则不用交换。
//		{
//			int temp = 0;
//			temp = *(left + p);
//			*(left + p) = *(right + p);
//			*(right + p) = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int sz = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入整数的数量：");
//	scanf("%d", &sz);                  //自己决定输入的整数的个数。
//	printf("请输入一组整数：");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	my_swap(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}



#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}
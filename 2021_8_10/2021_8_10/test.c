#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	for (k = 0; k < 4; k++) 
//	{
//		q[k] = &a[k * 3];
//	}
//		printf("%d\n", q[3][1]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        Sleep(1000); //每打印一个停一段时间
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d\n", i);// 用有符号十进制整数打印
//        Sleep(1000); //每打印一个停一段时间
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d\n", i);// 用有符号十进制整数打印
//        Sleep(1000); //每打印一个停一段时间
//    }
//    return 0;
//}


//写一个函数，用于实现左旋字符串
//#include<stdio.h>
//#include<string.h>
//void left_revolve(char* str, int time)
//{
//	int i = 0;
//	int j = 0;
//	int len = (int)strlen(str);  //强制类型转换一下，避免警告
//	time %= len;  //长度为5时，旋转6次相当于1次，长度为6时，旋转7次也相当1次
//	for (i = 0; i < time; i++)   //旋转多少次，就循环多少次
//	{
//		char temp = str[0];      //每次先把首元素拿出来一份
//		for (j = 0; j < len - 1; j++) //每一次把后面的字符往前平移
//		{
//			str[j] = str[j + 1];   //后一个元素往前平移一位
//		}
//		str[j] = temp;       //把首元素放到最后一个空间
//	}
//}
//int main()
//{
//	int time = 0;  //用于存放旋转的次数
//	char str[20] = { 0 };  //用于存放输入的字符串
//	printf("请输入字符串：");
//	gets(str);
//	printf("次数：");
//	scanf("%d", &time);
//	left_revolve(str, time);
//	printf("%s\n", str);
//
//	return 0;
//}


//版本二
//#include<stdio.h>
//#include<string.h>
//void left_revolve(char* str, int time)
//{
//	char arr[100] = { 0 }; //定义个一足够大的字符串
//	int len = (int)strlen(str);  //强制类型转换一下，避免警告
//	time %= len;  //长度为5时，旋转6次相当于1次，长度为6时，旋转7次也相当1次
//	strcpy(arr, str + time);
//	strncat(arr, str, time);    //strncat(str1, str2, number) : 将 str2 字符串的前 number 个元素放到 str1 中去
//	strcpy(str, arr);
//
//}
//int main()
//{
//	int time = 0;  //用于存放旋转的次数
//	char str[20] = { 0 };  //用于存放输入的字符串
//	printf("请输入字符串：");
//	gets(str);
//	printf("次数：");
//	scanf("%d", &time);
//	left_revolve(str, time);
//	printf("%s\n", str);
//
//	return 0;
//}


//版本三
//#include<stdio.h>
//#include<string.h>
//void reverse_order(char* star, char* end)    //逆序函数
//{
//	while (star < end)       //左边的地址小于右边的地址
//	{
//		char temp = 0;
//		temp = *star;       //交换
//		*star = *end;
//		*end = temp;
//		star++;             //指针右移
//		end--;              //指针左移
//	}
//}
//
//int main()
//{
//	int time = 0;  //用于存放旋转的次数
//	char str[20] = { 0 };  //用于存放输入的字符串
//	printf("请输入字符串：");
//	gets(str);
//	int ret = (int)strlen(str);
//	printf("次数：");
//	scanf("%d", &time);
//	time %= ret;                             //存放次数
//	reverse_order(str, str + time - 1);      //先把需要旋转的字符串给逆序
//	reverse_order(str + time, str + ret - 1);//再把需要平移的字符串逆序
//	reverse_order(str, str + ret - 1);       //最后把整个字符串逆序
//	printf("%s\n", str);
//
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//#include<stdio.h>
//#include<string.h>
//void reverse_order(char* star, char* end)    //逆序函数
//{
//	while (star < end)       //左边的地址小于右边的地址
//	{
//		char temp = 0;
//		temp = *star;       //交换
//		*star = *end;
//		*end = temp;
//		star++;             //指针右移
//		end--;              //指针左移
//	}
//}
//int my_check(char* arr1, char* arr2)   //判断函数，能否逆序得到
//{      
//	int i = 0;
//	int len = (int)strlen(arr2) ;
//	for (i = 0; i < len; i++)        //多少个字符，循环多少遍
//	{
//		reverse_order(arr2 + 1, arr2 + len - 1);   //每次旋转一个字符
//		reverse_order(arr2, arr2 + len - 1);
//		 
//		while (*arr1 != '\0' && *arr2 != '\0')  //循环比较两个字符串是否一样
//		{
//			if (*arr1 != *arr2)         //当有不一样的字符时，跳出，不用往后比了
//			{
//				break;
//			}
//			arr1++;           //指针往后移
//			arr2++;
//		}
//		if (*arr1 == '\0' && *arr2 == '\0')      //如果两个指针都指向了'\0'代表两个字符串没有不一样的，返回 1
//		{
//			return 1;
//		}
//	}
//	return 0;    //全部循环完，走到这里，表示旋转后的字符串中找不到与它相同的字符串。返回 0
//}
//int main()
//{
//	char arr1[30] = { 0 };  //定义两个数组，用来存放输入的字符串
//	char arr2[30] = { 0 };
//	printf("arr1 : ");
//	gets(arr1);
//	printf("arr2 : ");
//	gets(arr2);
//	int ret = my_check(arr1, arr2);
//	if (ret)       //返回值为真，表示arr1可以通过arr2旋转得到
//	{
//		printf("yes!\n");
//	}
//	else
//	{
//		printf("no!\n");
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int my_find(char* arr1, char* arr2)
{
	char str[200] = { 0 };
	strcpy(str, arr1);      //拷贝字符串
	strcat(str, arr1);      //拼接字符串
	return strstr(str, arr2) != NULL; //扫描字符串
}
int main()
{
	char arr1[30] = { 0 };
	char arr2[30] = { 0 };
	printf("arr1 ：");
	gets(arr1);
	printf("arr2 : ");
	gets(arr2);
	int ret = my_find(arr1, arr2);
	if (ret)
	{
		printf("yes！\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

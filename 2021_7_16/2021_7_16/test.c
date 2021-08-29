#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	const int n = 0;
////	int arr[n] = { 0 };  //c99标准之前不能指定数组大小
////	int arr[n] = { 0 };  //虽然被const修饰，但n的本质上还是一个变量，只是拥有了常属性
//	//c99中引入了一个变长数组的概念
//	return 0;
//}


//#include<stdio.h>
//#define N 10  //define定义的标识符常量,不会在内存中开辟空间，只是进行替换而已
////枚举常量
//enum sex
//{
//	male,
//	female = 3,  //赋初始值
//	secret
//};
//int main()
//{
////	N = 5;    //常量不能被修改
//	int arr[N] = { 0 };
//	enum sex a = female;
//
//	printf("%d\n", male);    //  0
//	printf("%d\n", female);  //  3    
//	printf("%d\n", secret);  //  4
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//字符串："abcdef"
//	char ch[] = "abcdef";  //这样初始化后面会自己跟一个'\0'- 字符串结束标志
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };  //这样初始化编译器不会自己添加‘、0’，所以需要自己添加
//	char ch3[] = { 'a', 'b', 'c', 'd', 'e', 'f'};  //没有结束标志
//	puts(ch);
//	puts(ch2);
//	puts(ch3);
//	printf("%d\n", strlen(ch));
//	printf("%d\n", strlen(ch3));  //随机值,没有字符串的结束标志
//	return 0;
//}


//转义字符 - 转变原来的意思
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("%c\n", '\a');    //\a:电脑蜂鸣器报警
	printf("%d\n", '\162');  //八进制
	printf("%c\n", '\162');  //八进制对应的ASCII的字符
	printf("%d\n", '\x15');  //十六进制
	printf("%c\n", '\x15');  //十六进制对应的ASCII的字符
	printf("%s\n", "\f\f\f\f\f");  //进纸符-[]

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	const int n = 0;
////	int arr[n] = { 0 };  //c99��׼֮ǰ����ָ�������С
////	int arr[n] = { 0 };  //��Ȼ��const���Σ���n�ı����ϻ���һ��������ֻ��ӵ���˳�����
//	//c99��������һ���䳤����ĸ���
//	return 0;
//}


//#include<stdio.h>
//#define N 10  //define����ı�ʶ������,�������ڴ��п��ٿռ䣬ֻ�ǽ����滻����
////ö�ٳ���
//enum sex
//{
//	male,
//	female = 3,  //����ʼֵ
//	secret
//};
//int main()
//{
////	N = 5;    //�������ܱ��޸�
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
//	//�ַ�����"abcdef"
//	char ch[] = "abcdef";  //������ʼ��������Լ���һ��'\0'- �ַ���������־
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };  //������ʼ�������������Լ���ӡ���0����������Ҫ�Լ����
//	char ch3[] = { 'a', 'b', 'c', 'd', 'e', 'f'};  //û�н�����־
//	puts(ch);
//	puts(ch2);
//	puts(ch3);
//	printf("%d\n", strlen(ch));
//	printf("%d\n", strlen(ch3));  //���ֵ,û���ַ����Ľ�����־
//	return 0;
//}


//ת���ַ� - ת��ԭ������˼
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("%c\n", '\a');    //\a:���Է���������
	printf("%d\n", '\162');  //�˽���
	printf("%c\n", '\162');  //�˽��ƶ�Ӧ��ASCII���ַ�
	printf("%d\n", '\x15');  //ʮ������
	printf("%c\n", '\x15');  //ʮ�����ƶ�Ӧ��ASCII���ַ�
	printf("%s\n", "\f\f\f\f\f");  //��ֽ��-[]

	return 0;
}
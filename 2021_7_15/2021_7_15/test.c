#define _CRT_SECURE_NO_WARNINGS 1  // ��vs��������ʹ��stdio.hͷ�ļ��еĿ⺯��������Ҫ����
//#include<stdio.h>        //��׼�������ͷ�ļ�
//                         //std �� ��׼ i �� intput o ��output
////c++�������д��
//int main()               //main�������������ں���-������-����ֻ��һ��
//{
//	printf("hello world!\n"); //printf�⺯����ʹ����Ҫ����stdio.hͷ�ļ�
//	                          // \n : ת���ַ� - ����
//	return 0;
//}

//���ڵ�д��
//void main()
//{
//
//}


//sizeof��ʹ�� - ����ռ�ֽڵĴ�С
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));        // 1
//	printf("%d\n", sizeof(short));       // 2
//	printf("%d\n", sizeof(int));         // 4
//	printf("%d\n", sizeof(long));        // 4/8  ,c���Թ涨��long�ĳ��ȴ��ڵ���int���С�
//	printf("%d\n", sizeof(long long));   // 8
//	printf("%d\n", sizeof(float));       // 4
//	printf("%d\n", sizeof(double));      // 8
//	//ע�� sizeof �ǲ����������Ǻ���
//	int a = 1;
//	printf("%d\n", sizeof a);       // 4
//	return 0;
//}


//�ֲ����� �� ȫ�ֱ���
//#include<stdio.h>
//int a = 10;        //ȫ�ֱ����������ڴ��������棬��ȫ�ַ�Χ��ʹ��
//int main()
//{
//	int a = 0;    //�ֲ��������ڴ�����֮��ı�����������֮�����ʹ�á�
//	printf("%d\n", a); //��ȫ�ֱ�����ֲ������ı�����һ��ʱ������ʹ�þֲ�������
//	return 0;
//}


//��vs2013�н����������һ�����ŵ�����
//#include<stdio.h>
//#include<stdlib.h>             //����ϵͳ������ͷ�ļ�
//int main()
//{
//	printf("hello world!\n");
//	system("pause");           //ϵͳ���� - ��ͣ��ʹ����Ҫ���� stdlib.h ͷ�ļ�.
//	return 0;
//}


// �ӷ�ʵ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ��");       //��ʾһ��  
//	while (~scanf("%d%d", &a, &b))    //~����������λȡ��
//	{                                 //������ctrl+zʱ��scanf����-1��-1��λȡ��Ϊ 0��ѭ��ֹͣ��
//		printf("%d + %d = %d\n", a, b, a + b);
//	}
//	return 0;
//}


//�������飬�������йز�����
//#include<stdio.h>
//void test()   //void ��ʾû�з���ֵ
//{
//	printf("hello world!\n");
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //����һ����������
//	printf("%d\n", arr[0]);  // [] : �±����ò�����
//	test();                  // () : ������Ӷ������ 
//	return 0;
//}


#include<stdio.h>
void test(void)   //void ��ʾû����ʽ����
{
	printf("hello world!\n");
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //����һ����������
	printf("%d\n", arr[0]);  // [] : �±����ò�����
	test();                  // () : ������Ӷ������ 
	return 0;
}
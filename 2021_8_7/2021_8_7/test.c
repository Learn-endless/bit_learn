#define _CRT_SECURE_NO_WARNINGS 1
//дһ�����������������ַ��������ݣ�����ӡ����
//#include<stdio.h>
//#include<string.h>
//char* reverse_order(char* n)      
//{
//	char* left = n;                 //����һ��ָ�룬ָ���������Ԫ�ص�ַ
//	char* right = n + strlen(n) - 1;//����һ��ָ�룬ָ����������һ��Ԫ�صĵ�ַ��\0֮ǰ���Ǹ�Ԫ��
//	while (left < right)            //����ָ��ĵ�ַС����ָ��ĵ�ַʱ��ѭ������
//	{
//		char temp = *left;          //����һ����ʱ�������������� left �� right ָ��ָ�������
//		*left = *right;
//		*right = temp;
//		left++;             //ÿѭ��һ�Σ���ߵ�ָ������һλ
//		right--;            //�ұߵ�ָ������һλ
//	}
//	return n;          //������Ԫ�ص�ַ
//}
//int main()
//{
//	char arr[100] = { 0 };  //����һ�����飬��������ַ���
//	char* p = NULL;         //����һ����ָ�룬����������ת�����ķ���ֵ
//	printf("������һ���ַ�����"); 
//	gets(arr); 
//	p = reverse_order(arr);
//	printf("%s\n", p);
//	return 0;
//}




//��ӡ����
//#include<stdio.h>
//void my_printf(int line)
//{
//	int i = 0;
//	int j = 0;
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡÿһ�е�����
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			//�ȴ�ӡÿһ��֮ǰ�Ŀո�
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1 ; j++)
//		{
//			//��ӡ�ո�֮���*��
//			printf("*");
//		}
//		printf("\n");   //ÿһ�д�ӡ֮�󣬻��С�
//
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡÿһ�е�����
//		for (j = 0; j <= i ; j++)
//		{
//			//�ȴ�ӡÿһ��֮ǰ�Ŀո�
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line - 1 - i) - 1; j++)
//		{
//			//��ӡ�ո�֮���*��
//			printf("*");
//		}
//		printf("\n");   //ÿһ�д�ӡ֮�󣬻��С�
//	}
//}
//int main()
//{
//	int line = 0;
//	printf("�����������ϰ벿�ֵ�������");
//	scanf("%d", &line);
//	my_printf(line);        //�Զ����ӡ����
//	return 0;
//}



//printf�����������ֱ�Ӹ����������ַ
//#include<stdio.h>
//int main()
//{
//	char arr[] = "Hello world!";     //����һ�����飬����ʼ�� "Hello world!" ��
//	char* p = "Hello world!";        //����һ��ָ�룬ָ�����ַ��� "Hello world!" �� H �ĵ�ַ
//	printf("Hello world!\n");        //ֱ��ʹ�ÿ⺯������ӡ "Hello world!"��
//	printf(p);                       //printf�����⺯����ֱ�Ӵ�ָ�� p
//	printf("\n");
//	printf(arr);                     //printf�����⺯����ֱ�Ӵ� arr �������Ԫ�ص�ַ
// //����������������һģһ���ġ�
//	return 0;
//}



//����ˮ
//#include<stdio.h>
//int main()
//{
//	int total = 0;
//	int empty = 0;
//	int money = 0;
//	printf("������Ǯ����");
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = money * 2 - 1;
//		printf("%d\n", total);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	return 0;
//}




//���ݴ洢��������
//#include<stdio.h>
//int main()
//{
//	signed int a1 = 0;
//	signed short int b1 = 0;   
//	signed long int c1 = 0;
//
//// ���ϵĴ��룬����ʡ��Ϊ�������κα������У���������涼�ǵȼ۵ģ�
//	int a = 0;
//	short b = 0;
//	long c = 0;
//// �����Ҫ�޷��ŵ�����(����Ҫ���¶���)
//	unsigned int d1 = 0;
//	unsigned short d2 = 0;
//	unsigned long d3 = 0;
//
//// ��һ������������ char 
//	char o = 0;  //��ʱ���Ƕ���� char ������ signed ���� unsigned ����ȫȡ�����������õı���������ô��Ϊ�ġ�
//
//	return 0;
//}



//C���Ա�׼��ֻ�涨�� �⺯�� �ķ���ֵ���ͣ��������ͣ��� ������Ӧ��Ҫʵ�ֵĹ��ܡ�
//���磺size_t strlen( const char *string );
//�⺯�� �� C���Ա�׼ ֮��û��ֱ�ӵ�����
//�����������ĳ��̣������Լ���ѡ���Ƿ�Я���⺯����




//�˽����ڴ��У��޷��������з������Ĵ��
//#include<stdio.h>
//int main()
//{
//	unsigned char a = 255;
//	char b = 255;
//	printf("%d\n", a);     
//	printf("%d\n", b);     
////����255��ԭ�룺                                                             1111 1111 1111 1111 1111 1111 1111 1111
////��unsigned char ���ڴ�ͻ��������һ���޷�������û�з���λ�����Զ�����Чλ��%d��ӡ����255
////���� char �У�����Ϊvs2019 ��������� signed char ���ԣ�������λ�ĵ�һλ���Ƿ���λ��
////   1111 1111  --ԭ��
////   1000 0000  --����
////   1000 0001  --���루�ڴ������洢�ģ�
////   %d ��ӡ�������� -1
//
////�������ڴ��У�unsigned char �ķ�Χ���ǣ�0 - 255
////              signed char �ķ�Χ���ǣ�-128 - 127
//// ע�⣺��������� 1000 0000 -ԭ�룬�ͻ�ֱ�ӿ��� -128
//	return 0;
//}



//void��ʹ��
//#include<stdio.h>
//void test(void)             //�����ǲ���Ҫ����ʱ�����Բ�д����������ݣ�����ʱ����������û�в���������ȴ��С��
//{                           //��������һ����������ʱ�������������Ͳ����������ʾ������������� void 
//	printf("hello world\n");//��ô��ʹ���ǲ�С�Ĵ����ˣ���ʱ�ͻᱨ����
//}
//int main()
//{
//	test(100);
//	return 0;
//}




#include<stdio.h>
int main()
{
	int a = -1;
//1000 0000 0000 0000 0000 0000 0000 0001  - ԭ��
//1111 1111 1111 1111 1111 1111 1111 1110  - ����
//1111 1111 1111 1111 1111 1111 1111 1111  - ����
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//����һ���꣬��������һ�������Ķ����������е�����λ��ż��λ
//#include<stdio.h>
//#define EXCHANGE(m) (((m&0xaaaaaaaa)>>1) + ((m&0x55555555)<<1))
////1010 1010 1010 1010 1010 1010 1010 1010 - 0xaaaaaaaa - ��������λ
////0101 0101 0101 0101 0101 0101 0101 0101 - 0x55555555 - ����ż��λ
////Ȼ��ֱ����ƺ����ƣ�����������
//int main()
//{
//	int n = 10;
//	int ret = EXCHANGE(n);
//	printf("%d\n", ret);
//	return 0;
//}


//�ú�ģ��ʵ��offsetof�⺯��
//size_t offsetof( structName, memberName );
//offsetof����ṹ������г�Ա��ƫ����
//#include<stdio.h>
//#include<stddef.h>
//#define OFFSETOF(type_name,name) (int)&(((type_name*)0) -> name)
//struct stu
//{
//	int a;      //������4
//	char b;     //������1
//	double c;   //������8
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct stu, a));
//    printf("%d\n", OFFSETOF(struct stu, b));
//    printf("%d\n", OFFSETOF(struct stu, c));
//
//	//printf("%d\n", offsetof(struct stu, a)); //offsetof�Ĳ������������ͱ�����
//	//printf("%d\n", offsetof(struct stu, b));
//	//printf("%d\n", offsetof(struct stu, c));
//
//	return 0;
//}


//#include<stdio.h>
//#define N 4
//#define Y(n) ((N+2)*n) /*���ֶ����ڱ�̹淶�����ϸ��ֹ��*/
//int main()
//{
//	int z = 0;
//	z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	return 0;
//}


#include<stdio.h>
#define A 2+2
#define B 3+3
#define C A*B
int main()
{
	printf("%d\n", C);
	return 0;
}
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
#include<stdio.h>
#include<stddef.h>
#define OFFSETOF(type_name,name) (int)&(((type_name*)0) -> name)
struct stu
{
	int a;      //������4
	char b;     //������1
	double c;   //������8
};
int main()
{
	printf("%d\n", OFFSETOF(struct stu, a));
    printf("%d\n", OFFSETOF(struct stu, b));
    printf("%d\n", OFFSETOF(struct stu, c));

	//printf("%d\n", offsetof(struct stu, a)); //offsetof�Ĳ������������ͱ�����
	//printf("%d\n", offsetof(struct stu, b));
	//printf("%d\n", offsetof(struct stu, c));

	return 0;
}

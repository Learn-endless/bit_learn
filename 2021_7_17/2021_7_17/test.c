#define _CRT_SECURE_NO_WARNINGS 1
//����������
#include<stdio.h>
//int main()
//{
//	int a = 7 / 2;
//	int b = 7 % 2;  //ȡģ/��
//	float c = 7.0 / 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%f\n", c);
//
//    // <<�����Ʋ�������>>�����Ʋ�����
//	int n = 12;
//	int m = n << 1;
//	//0000 0000 0000 0000 0000 0000 0000 1100 - 12
//	//0000 0000 0000 0000 0000 0000 0001 1000 - 12 << 1 - 24
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	// & : ��λ��
//	// | : ��λ��
//	// ^ : ��λ���
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	printf("%d\n", e ^ 5);
//	printf("%d\n", e ^ 5);
//	return 0;
//}

//int main()
//{
//	//3 + 5 //+:˫Ŀ������
//	//3 �� 5 λ������
//	//!3  //!:��Ŀ������
//	int flag = 3; //C��������ô�ж�����
//	//��C������0Ϊ�٣���0Ϊ��
//
//	if (flag != 0)  //�ȼ��ڣ�if(flag)
//	{
//		printf("hello\n");
//	}
//	if (!flag)   //��� flag Ϊ�٣���ӡhaha
//	{ 
//		printf("haha\n");
//	}
//	flag = 0;
//	int b = !flag;     //!0 == 1
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(char));   //sizeof:����һ��������,���Ǻ���
//	printf("%d\n", sizeof(short));  //sizeof short :������ôд������������ʶ���������ؼ�����һ����������˼
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof a);   //�ȼ���sizeof(a)
//
//	//��������Ԫ�صĸ�����
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//strlen �ǿ⺯���������������ţ�ҲҪ��ͷ�ļ�<string.h>
//	return 0;
//}


// ++ �� --
//int main()
//{
//	int a = 10;
//	int b = a++;         //����++
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int c = 10;
//	int d = ++c;          //ǰ��++
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	int n = 1;
//	int m = (++n) + (++n) + (++n);    //����Ĵ��룬��ͬ�������µĽ���᲻ͬ
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	float a = 3.0;
//	int b = (int)a;   //ǿ������ת������������
//
//	int x = (3 > 5);
//	if (x)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Max = 0;
//	if (a > b)
//	{
//		Max = a;
//	}
//	else
//	{
//		Max = b;
//	}
//	int MAX = a > b ? a : b;  //C������Ψһһ����Ŀ��������
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 6;
//	int d = (a -= 2, b = a + c, c = a - b);    //���ű��ʽ�����ű��ʽ�����ȼ�С�ڸ�ֵ��������
//	printf("%d\n", d);                         //�������ʽ��ֵ�������һ�����ʽ��ֵ
//	return 0;
//}

//int main()
//{
//	float a = 0.0;
//	a = 3.14f;  //3.14Ĭ�ϵ���double���͵ģ���f��ʾ����float����
//	auto int b = 10;   //auto:�Զ�,ͨ��ʡ�Ե�
//	// extern:���������ؼ���
//	//register:�Ĵ����ؼ���
//	return 0;
//}


//static���ξֲ��������ӳ��˾ֲ��������������ڣ�����������û��
//static����ȫ�ֱ������������ⲿ�������Ա�����ڲ��������ԣ�ʹ��ֻ�������.c�ļ���ʹ��
        //ȫ�ֱ�����������ⲿ��������
//static���κ�����������ȫ�ֱ���һ����
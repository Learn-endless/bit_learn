#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	//0000 0000 0000 0000 0000 0000 1100 1000
//	//1100 1000
//	unsigned char b = 100;
//	//0000 0000 0000 0000 0000 0000 0110 0100
//	//0110 0100
//	//0000 0000 0000 0000 0000 0001 0010 1100 - 300
//	//0010 1100 - 44
//	unsigned char c = 0;
//	c = a + b;
//	printf("% d % d", a + b, c);
//	return 0;
//}


//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{//-1,-2,-3,-4 ... -128,127,126,125,124 ... 1,0,-1,-2,-3 ...
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); //ֻͳ�Ƶ� \0 ����128+127 = 255
//	return 0;
//}

//#include <stdio.h>
//
//void swapArgs(int* a, int* b) //��������
//{
//	int tmp;
//
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

//void diveRank(int* p, int n)
//{
//	if (n >= 5) //��ʱ��nҲ����������ѭ�������ġ�
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B�ڶ����ҵ���
//			(p[1] == 2) + (p[4] == 4) == 1 && //�ҵڶ���E����
//			(p[2] == 1) + (p[3] == 2) == 1 && //�ҵ�һ��D�ڶ�
//			(p[2] == 5) + (p[3] == 3) == 1 && //C����ҵ���
//			(p[4] == 4) + (p[0] == 1) == 1)   //�ҵ��ģ�A��һ
//			//���ڴ�ʱ��ִ�е�ȫ���У����Բ���Ҳʡ�ˡ�
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	int i;
//	for (i = n; i < 5; i++) //����ݹ鷽ʽ������˶�1~5��ȫ���У������ǴӺ���ǰ��ͣ��ִ�н��������Բο��Ľ�����ԭ���룬������ݹ����д�س�ѭ���󣬿��Ը��õ����⡣
//	{
//		swapArgs(p + i, p + n);
//		diveRank(p, n + 1);
//		swapArgs(p + i, p + n);
//	}
//}
//
//int main()
//{
//	int p[5] = { 1, 2, 3, 4, 5 }; //��Ȼ������ȫ���У����Գ�ֵ������á�
//
//	diveRank(p, 0);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char a = 128;
//    printf("%u\n", a);
//    return 0;
//}



#include<stdio.h>
int main()
{
	printf("hello world!\n");
	return 0;
}
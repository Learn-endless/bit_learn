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
//	for (i = n; i < 5; i++) //����ݹ鷽ʽ������˶�1~5��ȫ���У������ǴӺ���ǰ��ͣ��ִ�н��������Բο��Ľ�����ԭ���룬������ݹ����д�س�ѭ���󣬿��Ը��õ���⡣
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


//��1
//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}


//��2
//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    return 0;
//}


//��3
//#include <stdio.h>
//int main()
//{
//    char a = 128;
//    printf("%u\n", a);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}


//����
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//	return 0;
//}


//��5
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}


//��6
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//	return 0;
//}


//��7
//#include<stdio.h>
//
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		//printf("%u\n", i);    //���ڲ鿴i��ֵ�ǲ������Ǵ��ڵ���0��
//	}
//
//	return 0;
//}


//�������Ĵ洢
//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	return 0;
//}


//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//#include<stdio.h>
//int my_function(int* p)
//{
//	int n[7] = { 0 };  //arr��������߿ɴ�ŵ�6���� n ��Ҫ 7 ��Ԫ�ؿռ�//��ʼ��Ϊ 0 ����ʾû�б��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (1 == n[p[i]]) //��ʾ���ظ�������0.
//		{
//			return 0;     
//		}
//		n[p[i]] = 1; //û���ظ������Ϊ 1
//	}
//	return 1; //û��һ���ظ������� 1 
//}                      
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 }; //����һ�����飬��� a b c d
//	for (arr[0] = 1; arr[0] <= 5; arr[0]++)   //ѭ����aΪ 1 2 3 4 5��ʱ
//	{
//		for (arr[1] = 1; arr[1] <= 5; arr[1]++)   //ѭ����bΪ 1 2 3 4 5��ʱ
//		{
//			for (arr[2] = 1; arr[2] <= 5; arr[2]++)   //ѭ����cΪ 1 2 3 4 5��ʱ
//			{
//				for (arr[3] = 1; arr[3] <= 5; arr[3]++)   //ѭ����dΪ 1 2 3 4 5��ʱ
//				{
//					for (arr[4] = 1; arr[4] <= 5; arr[4]++)   //ѭ����eΪ 1 2 3 4 5��ʱ
//					{
//						if ((arr[1] == 2) + (arr[0] == 3) == 1 &&  //�ж�ÿ����˵�Ļ��ǲ���ֻ����һ��
//							(arr[1] == 2) + (arr[4] == 4) == 1 &&
//							(arr[2] == 1) + (arr[3] == 2) == 1 &&
//							(arr[2] == 5) + (arr[3] == 3) == 1 &&
//							(arr[4] == 4) + (arr[0] == 1) == 1 &&
//							my_function(arr))  // ���غ������ظ�����0�����ظ�����1
//						{
//							for (i = 0; i < 5; i++)    //ѭ����ӡ����Ҫ�����һ����
//							{
//								printf("%d ", arr[i]);
//							}
//							printf("\n");     //��ӡ��֮����
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{

	return 0;
}


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
//        Sleep(1000); //ÿ��ӡһ��ͣһ��ʱ��
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
//        printf("%d\n", i);// ���з���ʮ����������ӡ
//        Sleep(1000); //ÿ��ӡһ��ͣһ��ʱ��
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
//        printf("%d\n", i);// ���з���ʮ����������ӡ
//        Sleep(1000); //ÿ��ӡһ��ͣһ��ʱ��
//    }
//    return 0;
//}



//дһ������������ʵ�������ַ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int num = 0;
//	char arr[50] = { 0 };     //��һ�����飬��������ַ���
//	printf("������һ���ַ�����");
//	gets(arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	printf("��������Ҫ��ת���ַ�������");
//
//
//	return 0;
//}



void leftRound(char* src, int time)
{
	int i, j, tmp;
	int len = strlen(src);
	time %= len; //����Ϊ5������£���ת6��11��16...���൱��1�Σ�7��12��17...���൱��2�Σ��Դ����ơ�
	for (i = 0; i < time; i++) //ִ��k�εĵ���ƽ��
	{
		tmp = src[0];
		for (j = 0; j < len - 1; j++) //����ƽ��
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;
	}
}
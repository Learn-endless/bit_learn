#define _CRT_SECURE_NO_WARNINGS 1
//���������������������������Լ��(շת�����)
//#include<stdio.h>
//int my_function(int x, int y)
//{
//	int temp = 1;
//	while (temp)      //���ܱ�����ʱ����
//	{
//		temp = x % y; //������temp
//		x = y;        //y��ֵ��x
//		y = temp;     //temp��ֵ��y
//	}
//	return x;   //��tempΪ0ʱ��x�д�ŵľ������Լ��
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	int ret = my_function(a, b);
//	printf("���Լ��Ϊ��%d\n", ret);
//	
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) //�ܱ�4�������Ҳ��ܱ�100�����������ܱ�400������Ϊ����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//дһ�����룺��ӡ100~200֮�������
//�Գ���-�汾1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)     //����100-200֮�����
//	{
//		for (j = 2; j < i; j++)      //2�������֮ǰ����������������break������������һ�����ı���
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}  
//		if (j == i)                  //���j == i˵��breakû��ִ�У�����������ӡ����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�Գ���-�汾2
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)     //����100-200֮�����
//	{
//		for (j = 2; j <= i/2 ; j++)      //2�������֮ǰ����������������break������������һ�����ı���
//		{                                
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i/2)                  //���j == i˵��breakû��ִ�У�����������ӡ����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�Գ���-�汾3
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)     //����100-200֮�����
//	{
//		for (j = 2; j <= sqrt(i); j++)      //2�������֮ǰ����������������break������������һ�����ı���
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))                  //���j == i˵��breakû��ִ�У�����������ӡ����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int count = 0;  //������
//	int i = 0; //1 - 100֮�������
//	for (i = 1; i <= 100; i++)
//	{
//		int num = i;
//		while (num)           //��num��Ϊ0ʱ��˵���������ûͳ����
//		{
//			if (num % 10 == 9)    //�����һλ��9����������1
//			{
//				count++;
//			}
//			num /= 10; //��num��10��ֵ������
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//�˷���ֻ������ͳ����λ������λ������
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 0;
//	double sum = 0.0;
//	for (j = 1; j <= 100; j++)
//	{
//		sum += i * 1.0 / j;
//		i = -i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10 �����������ֵ
//#include<stdio.h>
//my_find(int* arr, int a)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������10��������");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = my_find(arr, 10);
//	printf("MAX = %d\n", max);
//	return 0;
//}


//����Ļ�����9 * 9�˷��ھ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-4d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include<stdio.h>
//int my_seek(int* p, int n, int f)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)        //rightָ���λ�������ݣ�����Ҫ�ӵȺ� [left,right]
//	{
//		int mid = (left + right) / 2;
//		if (*(p + mid) < f)
//		{
//			left = mid + 1;  //��ߵ�����ȥ�õ������� mid + 1
//		}
//		else if(*(p+mid) > f)
//		{
//			right = mid - 1; //�ұߵ�����ȥ�õ���mid - 1
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int number = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	printf("��������Ҫ���ҵ�����");
//	scanf("%d", &a);
//	int ret = my_seek(arr, number, a);
//	if (ret != -1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	else
//	{
//		printf("û�ҵ���");
//	}
//	return 0;
//}


//#include<stdio.h>
//int my_seek(int* p, int n, int f)
//{
//	int left = 0;
//	int right = n;
//	while (left < right)        //rightָ���λ��û�����ݣ�����Ҫ�ӵȺ� [left,right)
//	{
//		int mid = (left + right) / 2;
//		if (*(p + mid) < f)
//		{
//			left = mid + 1;  //��ߵ�����ȥ�õ������� mid + 1
//		}
//		else if (*(p + mid) > f)
//		{
//			right = mid; //�ұߵ�����ȡ����,����-1
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int number = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	printf("��������Ҫ���ҵ�����");
//	scanf("%d", &a);
//	int ret = my_seek(arr, number, a);
//	if (ret != -1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	else
//	{
//		printf("û�ҵ���");
//	}
//	return 0;
//}


//forѭ��������ʡ��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)         //i = 0ʱ��j��0ѭ����10������i = 1��2��3��4��5��6...ʱ��j���Ǵ�10��ʼ���͵���һ�ζ�����ӡ
//		{
//			printf("hehe\n");       //����ֻ���ӡ10��hehe
//		}
//	}
//	return 0;
//}


//����n�Ľ׳�
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		sum *= i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��1!+2!+3!+4!+...+n!֮��
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 1;
//	int num = 0;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		num += sum *= i++;
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int num = 1;
//		for (j = 1; j <= i; j++)
//		{
//			num *= j;
//		}
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//���ֲ��ң�����ҿ�
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);  // ����ҿ�ʱ���Դ��������һ��Ԫ�ص���һ��Ԫ�ؿ�ʼ
//	int n = 0;                               //��Ҫ���ҵ�����
//	int mid = 0;
//	scanf("%d", &n);
//	while (left < right)    //����ҿ�ʱ���üӵȺ�
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left < right)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//	}
//	else
//	{
//		printf("û�ҵ�!");
//	}
//	return 0;
//}

//����ұ�
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);  // ����ұմ��������һ��Ԫ�ؿ�ʼ
//	int n = 0;                               //��Ҫ���ҵ�����
//	int mid = 0;
//	scanf("%d", &n);
//	while (left <= right)    //����ұ�ʱ��Ҫ�ӵȺ�
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;  //����ұ���Ҫ -1
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//	}
//	else
//	{
//		printf("û�ҵ�!");
//	}
//	return 0;
//}


//��ʾ����ַ������������м����ƶ�
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "hello5world";
//	char arr2[] = "           ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//���ε�½����
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("���ε�¼ʧ��");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int arr[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr + i);
//    }
//    int num = 0;
//    scanf("%d", &num);
//    int m = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == num)
//        {
//            for (int j = i; j < n; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            i--;
//            m++;
//        }
//    }
//    for (int i = 0; i < n - m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����
//#include<stdio.h>
//int main()
//{
//    int input = 0;
//    scanf("%d", &input);
//    int i = 0;
//    int arr[200] = { 0 };
//    for (i = 0; i < input; i++)
//    {
//        scanf("%d", arr + i);
//    }
//    int flag_1 = 0;
//    int flag_2 = 0;
//    for (i = 0; i < input - 1; i++)
//    {
//        if (arr[i] >= arr[i + 1])
//        {
//            flag_1++;
//        }
//        if (arr[i] <= arr[i + 1])
//        {
//            flag_2++;
//        }
//    }
//    if (flag_1 == input - 1 || flag_2 == input - 1)
//    {
//        printf("sorted");
//    }
//    else
//    {
//        printf("unsorted");
//    }
//    return 0;
//}


//���������������е����У����������кϲ�Ϊһ���������в������
//#include<stdio.h>
//int main()
//{
//    int input_1 = 0;
//    int input_2 = 0;
//    scanf("%d %d", &input_1, &input_2);
//    int i = 0;
//    int arr_1[200] = { 0 };
//    int arr_2[200] = { 0 };
//    for (i = 0; i < input_1; i++)
//    {
//        scanf("%d", arr_1 + i);
//    }
//    for (i = 0; i < input_2; i++)
//    {
//        scanf("%d", arr_2 + i);
//    }
//    int j = 0;
//    i = 0;
//    while (1)
//    {
//        if (i == input_1)
//        {
//            printf("%d ", arr_2[j]);
//            j++;
//            if (j == input_2)
//                break;
//        }
//        else if (j == input_2)
//        {
//            printf("%d ", arr_1[i]);
//            i++;
//            if (i == input_1)
//                break;
//        }
//        else if (arr_1[i] < arr_2[j])
//        {
//            printf("%d ", arr_1[i]);
//            i++;
//        }
//        else if (arr_1[i] > arr_2[j])
//        {
//            printf("%d ", arr_2[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d %d ", arr_1[i], arr_2[j]);
//            i++;
//            j++;
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input_1 = 0;
//	int input_2 = 0;
//	scanf("%d %d", &input_1, &input_2);
//	int arr[200] = { 0 };
//	int i = 0;
//	for (i = 0; i < input_1 + input_2; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	for (i = 0; i < input_1 + input_2 - 1; i++)
//	{
//		int j = 0; 
//		for (j = 0; j < input_1 + input_2 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < input_1 + input_2; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//KiKi�μ������ġ���ѧ������Ŀ��ԣ�������ж������е���߷֡�
//�Ӽ���������������������ʾ�ķ���������ж����е���߷֡�
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (~scanf("%d %d %d", &a, &b, &c))
//    {
//        int max = a;
//        if (max < b)
//        {
//            max = b;
//        }
//        if (max < c)
//        {
//            max = c;
//        }
//        printf("%d\n", max);
//    }
//
//    return 0;
//}

//KiKi�õ�������n��m�еľ�������֪�����������Ƿ���ȣ�����ش�����
//(�����������Ӧ����Ԫ�ض����ʱ�����������)��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int arr1[50][50] = { 0 };
//    int arr2[50][50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", *(arr1 + i) + j);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", *(arr2 + i) + j);
//        }
//    }
//    int flag = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = -1;
//                break;
//            }
//        }
//        if (flag == -1)
//            break;
//    }
//    if (flag == 0)
//    {
//        printf("Yes");
//    }
//    else
//    {
//        printf("No");
//    }
//    return 0;
//}


//KiKi��һ����������֪��ת�ú�ľ���
//������������л����õ����¾����Ϊת�þ��󣩣����̰������
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[100][100] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int ret = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &ret);
//            arr[j][i] = ret;
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
//#include<stdio.h>
//void my_print(int* pc, int sz)
//{
//	int i = 0; 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pc + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_print(arr,sz);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int num = 0;
//	for (i = 0; i < 5; i++)
//	{
//		num = num * 10 + a;
//		sum += num;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<stdio.h>
#include<stdbool.h>
bool my_find(int n)
{
	int ret = n;
	int sum = 0;
	while (n / 10)
	{
		sum +=(n % 10)* (n % 10)* (n % 10);
		n = n / 10;
	}
	sum += n * n * n;
	if (sum == ret)
		return true;
	return false;

}
int main()
{
	int i = 0; 
	for (i = 0; i <= 100000; i++)
	{
		if (my_find(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}


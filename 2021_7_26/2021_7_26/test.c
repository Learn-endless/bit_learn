#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));       // 1   �ֽ�
//	printf("%d\n", sizeof(short));      // 2   �ֽ�
//	printf("%d\n", sizeof(int));        // 4   �ֽ�
//	printf("%d\n", sizeof(long));       // 4/8 �ֽ�
//	printf("%d\n", sizeof(long long));  // 8   �ֽ�
//	printf("%d\n", sizeof(float));      // 4   �ֽ�
//	printf("%d\n", sizeof(double));     // 8   �ֽ�
//	return 0;
//}


//#include<stdio.h>
//int a = 100;           //ȫ�ֱ���--�ڴ�����ⲿ����ı���
//int main()
//{                      
//	int a = 10;        //�ֲ�����--�ڴ�����ж���ı���
//
//	printf("a = %d \n", a); //ȫ�ֱ�����ֲ������ı�������ͻʱ���ֲ����ȡ�
//	return 0;
//}

//practise��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	//��vs�������Ҫ����ʹ��scanf����������Ҫ�ڹ��̵ĵ�һ�м��ϣ�#define _CRT_SECURE_NO_WARNINGS1
//	scanf("%d %d", &a, &b);   
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//дһ�����������������Ľϴ�ֵ
//#include<stdio.h>
//int my_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Max = 0;
//	scanf("%d %d", &a, &b);
//	Max = my_max(a, b);
//	printf("Max = %d\n", Max);
//	return 0;
//}

//assert���Ե��ж�
//#include<stdio.h>
//#include<assert.h>
//void add(int *a, int *b)
//{
//	assert(a != NULL);
//	assert(b != NULL);     //assert������Ϊ�����ִ�У�Ϊ�ٱ���
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//    add(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//��������
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF) //ÿ�������ʱ����������һ���ַ���Ȼ��������һ��\n
//	{
//		putchar(ch);   //�ȴ�ӡ�ַ���Ȼ���ӡ�س�
//	}
//	return 0;
//}


//��������ֻ��ӡ�����ַ�
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch < '0') || (ch > '9'))  //�������ַ�����ӡ
//		{
//			continue;        //��ÿ���õĻس�������ӡ
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//����һ�����룬Ȼ��ȷ��
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[100] = { 0 };
//	printf("���������룺");
//	scanf("%s", arr);
//	printf("��ȷ������(Y/N)��");
//	while (getchar() != '\n')  //�ѻ�������ո�\n֮������������
//	{
//		;
//	}
//	ch = getchar();     //��ȡһ���ַ�
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

//����������������ʵ�� - �β�������
//#include<stdio.h>
//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//����������������ʵ�� - �β���ָ��
//#include<stdio.h>
//void test(int* x,int* y)
//{
//	int a = 10;
//	int b = 20;
//	*x = a;
//	*y = b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//����������������ʵ�� - ʹ��ȫ�ֱ���
//#include<stdio.h>
//int a = 0;
//int b = 0;
//void test()
//{
//	int x = 10;
//	int y = 20;
//	a = x;
//	b = y;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", a, b);
//	return 0;
//}

//�����д�� - return����ֵ
//#include<stdio.h>
//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;
//}
//int main()
//{
//	int ret = test();
//	printf("%d", ret);
//	return 0;
//}

//��ӡ�˷��ھ���
//#include<stdio.h>
//void my_printf_table(int n)
//{
//	int i = 0;
//	for (i = 1; i < n - 1; i++)   //��������Ҫ��ӡ������
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)  //��ӡÿһ�е�����
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);    //����������ַ�
//		}
//		printf("\n");     //ÿһ�д�ӡ����
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	my_printf_table(n);
//	return 0;
//}

//����ʵ���ַ�������
//#include<stdio.h>
//#include<string.h>
//void my_rever_string(char* p)
//{
//	int sz = strlen(p) - 1;
//	char* left = p;
//	char* right = p + sz;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	my_rever_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//�ݹ�ʵ���ַ�������
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)  //�Զ������ַ�������
//{
//	assert(str);   //���ԣ�����Ұָ��
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void my_rever_string1(char* str1, char* str2)
//{
//	if (str1 < str2)
//	{		
//		char temp = *str1;
//		*str1 = *str2;
//		*str2 = temp;
//		my_rever_string1(str1 + 1, str2 - 1);
//
//	}
//	else
//	{
//		return;
//	}
//}
//
//void my_rever_string2(char str[])
//{
//	int len = my_strlen(str);
//	char temp = str[0];      //��a�ŵ�temp�ռ���ȥ
//	str[0] = str[len - 1];   //��f�ŵ���ǰ���a�Ŀռ���ȥ
//	str[len - 1] = '\0';     //����ǰ���f�ĵط����� \0
//	if (my_strlen(str + 1) >= 2) //����������ɺ��ж���һ����Ҫ������ַ��������Ƿ���ڵ���2
//	{
//		my_rever_string2(str + 1);   //���ڵ���2˵�����ٻ���2��Ԫ�أ������ݹ�
//	} 
//	str[len - 1] = temp;   //ֱ�����һ�εݹ�󣬿�ʼ�ص���š�
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int sz = my_strlen(arr) - 1;
////	my_rever_string1(arr, arr + sz);   //����Ԫ�ص�ַ�����һ��Ԫ�صĵ�ַ��������
//	my_rever_string2(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//�ݹ�ʵ�ּ���һ������ÿһλ��֮��
//#include<stdio.h>
//int DitigSum(int n)
//{
//	if (n > 9)  //�������λ�������ϣ��ͽ��еݹ����
//	{
//		return DitigSum(n / 10) + n % 10;
//	}
//	else      //һλ���Ļ�����ֱ�ӽ���һλ������
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1234;
//	int ret = DitigSum(num);
//	printf("%d", ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//#include<stdio.h>
//double DiGui(int n, int k)
//{
//	if (k > 0)                      //n^k     (kΪ����)
//		return n * DiGui(n, k - 1);    
//	else if (k == 0)                //n^0
//		return 1.0; 
//	else                            //n^(-k)  (kΪ����)
//		return 1.0 / DiGui(n, -k);
//}
//int main()
//{
//	int n = 2;
//	int k = -3;
//	double ret = DiGui(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//����
//#include<stdio.h>
//int arr1[5];  //ȫ�ֱ���Ĭ�ϵ�ֵ��0
//int main()
//{
//	int arr[20] = { 1, 2, 3 };  //����ȫ��ʼ��
//	int arr2[20];   //�ֲ�����Ĭ�����ֵ
//	return 0;
//}

//�����Ԫ�����ڴ��еĿռ���������ŵ�
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}


//С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ󣬶Խ���ת��������Ũ�����Ȥ��
//��Ϊ��������������6����������֪��һ������ʾΪ�����ƺ�Ľ����������������������⡣
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    int i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        arr[i] = n % 6;
//        n = n / 6;
//        i++;
//    }
//    for (i = i - 1; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}


//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
//����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
//�����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int time = 0;
//    if (n >= 12)
//    {
//        time = n / 12 * 4;
//        printf("%d", time + 2);
//    }
//    else
//    {
//        printf("2");
//    }
//    return 0;
//}


//С��������ڿ���ѧϰ����������������������Լ������С��������
//��������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣
//#include<stdio.h>
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    long long ret = 0;
//    long long min = 0;
//    scanf("%lld %lld", &n, &m);
//    min = n * m;
//    while (ret = n % m)
//    {
//        n = m;
//        m = ret;
//    }
//    min = min / m;
//    printf("%lld", min + m);
//    return 0;
//}


//������λ�����ж��ٸ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    for (i = 101; i < 1000; i += 2)
//    {
//        int j = 0;
//        int flag = 1;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���
//ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ�
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//    int store = 0;
//    int i = 0;
//    int sum = 0;
//    int max = INT_MIN;
//    int min = INT_MAX;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &store);
//        if (max < store)
//        {
//            max = store;
//        }
//        if (min > store)
//        {
//            min = store;
//        }
//        sum += store;
//    }
//    printf("%.2lf", (sum - max - min) / 5.0);
//    return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
//#include<stdio.h>
//int main()
//{
//    int num, i, j;
//    while (~scanf("%d", &num))
//    {
//        for (i = 0; i < num; i++)
//        {
//            for (j = 0; j < num; j++)
//            {
//                if (i == 0 || j == 0 || j == num - 1 || i == num - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�
//����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (~scanf("%d %d %d", &a, &b, &c))
    {
        if ((a + b > c) && (a + c > b) && (c + b > a))
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}
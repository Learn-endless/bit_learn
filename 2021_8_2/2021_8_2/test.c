#define _CRT_SECURE_NO_WARNINGS 1
//ָ��Ӽ�����
//#include<stdio.h>
//#define PE 5
//int main()
//{
//	int arr[PE] = { 0 };
//	int* p = NULL;
//	for (p = &arr[PE]; p > &arr[0];)   //ָ��֮��Ĺ�ϵ����
//	{
//		*--p = 0;
//	}
//	for (p = &arr[0]; p < &arr[PE]; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//
//}


////ָ�� - ָ��
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int* left = arr;                //�� sizeof(������)�� &(������)�⣬������������Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]); //�������ĸ���
//	int* right = &arr[sz];
//
//	printf("%d\n", right - left);  // 5
//	printf("%d\n", left - right);  //-5
//	//ָ���ָ��ľ���ֵ���������Ԫ�ظ���
//	//��Ҫʹ��ָ���ָ�룬ֻ����ͬһ��������ʹ��
//
//	return 0;
//}


//���ַ�������
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen_1(char* p)
//{
//	int count = 0;
//	assert(NULL != p);       // ��ֹҰָ��ĳ���,��ʹ����
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int my_strlen_2(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int num = strlen(arr);       //�⺯�����ַ�������
//	int my_num1 = my_strlen_1(arr); //�Զ��庯��ʵ�֣����ַ�������
//	int my_num2 = my_strlen_2(arr); //��ָ������ķ���ʵ��
//	printf("%d\n", num);
//	printf("%d\n", my_num1);
//	printf("%d\n", my_num2);
//	return 0;
//}


//ָ��Ľ����ò���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;             //������Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;       //�������Ԫ�����θ�ֵ 0����9��
//	}                       //����ָ��������ķ�ʽ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//c���Թ涨����ַ�ıȽϣ������е�һ����ַ�����������������ĺ�һ���ռ��ַ���бȽϣ�
//��������������ǰ���ǰһ���ռ��ַ���бȽϡ�
//#include<stdio.h>
//#define PE 5
//int main()
//{
//	float arr[PE] = { 0 };
//	float* p = NULL;
//	for (p = &arr[0]; p < &arr[PE]; )  // ��δ���Ƚ�����������һ��float���͵Ŀռ��ַ������ķ���
//	{
//		*p++ = 0;
//	}
//	for (p = &arr[PE - 1]; p >= &arr[0]; p--)  //��δ���Ƚ�������ǰһ��float���͵Ŀռ��ַ������ķ�����
//	{
//		*p = 0;
//	}
//	return 0;
//


//��������һЩ����´���ĺ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);          //������Ԫ�ص�ַ
//	printf("%p\n", arr + 1);      //����һ��Ԫ��
//	printf("%p\n", &arr[0]);      //������Ԫ�ص�ַ
//	printf("%p\n", &arr[0] + 1);  //����һ��Ԫ��
//
//	printf("%p\n", &arr);         //��������ĵ�ַ
//	printf("%p\n", &arr + 1);     //����һ��������
//
//	return 0;
//}


//�༶ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%d\n", *p);   //һ��ָ�룬������ű����ĵ�ַ
//	printf("%d\n", **pp); //����ָ�룬�������һ��ָ��ĵ�ַ
//	return 0;
//}


//ָ������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a, &b, &c };   //ָ������-�������Ǹ����飬������ÿ��Ԫ�ص�������ָ�루��ַ��
//	printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(*(arr + i))); //arr+i�ҵ�ÿ��Ԫ�ص�λ�ã�*(arr+i)�ҵ�ÿ��Ԫ�ص����ݣ�*(*(arr+i))��ÿ��Ԫ�ص������ٽ����ã��ҵ�ԭ����a��b��c
//	}
//	return 0;
//}

//�ṹ�塪�������������Ӷ���
//#include<stdio.h>
//struct student      //�û��Զ���Ľṹ������
//{
//	char name[10];  //�ṹ���Ա
//	int age;
//	char ID[10];
//}stu1 = { "chen", 13, "13586" };        //�����Ľṹ�����--ȫ�ֱ��������ھ�̬����
//void my_printf(struct student* m)    //�ṹ�崫��
//{
//	printf("%s %d %s\n", m->name, m->age, m->ID);        //ָ��->��Ա
//	printf("%s %d %s\n", (*m).name, (*m).age, (*m).ID);  //(*ָ��).��Ա
//}
//int main()
//{
//	struct student stu2 = { "wang", 10, "13346" }; //�ֲ�����������ջ����
//	struct student* p1 = &stu1;                    //�ṹ��ָ��
//	struct student* p2 = &stu2;                    //�ṹ��ָ��
//	//�ṹ���Ա���ʲ�����
//	printf("%s %d %s\n", stu2.name, stu2.age, stu2.ID);  //������.��Ա
//	printf("%s %d %s\n", p2->name, p2->age, p2->ID);     //ָ��->��Ա
//	printf("%s %d %s\n", (*p2).name, (*p2).age, (*p2).ID);//(*ָ��).��Ա
//
//	printf("%s %d %s\n", stu1.name, stu1.age, stu1.ID);
//	printf("%s %d %s\n", p1->name, p1->age, p1->ID);
//	printf("%s %d %s\n", (*p1).name, (*p1).age, (*p1).ID);
//	my_printf(&stu2);   //ע�⣺�ṹ���ڴ���ʱ��ô���ַ���������Բ���Ҫ��ջ���϶��⿪�ٿռ䣬��������һ�ݽṹ�����
//
//	return 0;
//}


//�ṹ��-�����ض��壨typedef��
//#include<stdio.h>
//typedef struct book
//{
//	char name[30];
//	float price;
//	int ID[10];
//}S;                         //��ʱ�� S ���ǽṹ������������ض���Ľṹ��������
//int main()
//{
//	S b = { "C���Գ������", 35.5, { 4, 4, 3, 5, 6} };
//	S* b1 = &b;
//	printf("%s %f %d%d%d%d%d\n", b.name, b.price, b.ID[0], b.ID[1], b.ID[2], b.ID[3], b.ID[4]);   // .������
//	printf("%s %f %d%d%d%d%d\n", b1->name, b1->price, b1->ID[0], b1->ID[1], b1->ID[2], b1->ID[3], b1->ID[4]);  // ->������
//	return 0;
//}


//�ṹ��������໥Ƕ��
//#include<stdio.h>
//struct S
//{
//	char a1[10];
//	int a2;
//	int a3[1];
//};
//struct H
//{
//	char b1[10];
//	int b2;
//	struct S b3;   //�ṹ�� H ���������нṹ�� S ���͡�
//};
//int main()
//{
//	struct H x = { "abc", 10, {"def", 20, {1}} };
//	printf("%s %d %s %d %d\n", x.b1, x.b2, x.b3.a1, x.b3.a2, x.b3.a3[0]); //���ʽṹ���еĽṹ�塪����.����.��Ա
//	return 0;
//}


//����ʵ�ּӷ�����
//#include<stdio.h>
//int Add(const int x, const int y) //��const���Σ���ֹx��y��ֵ���ı�
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("������������:");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����Ĵ������ʲô��
//#include<stdio.h>
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf(" %s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}


//��ת�ַ���
//#include<stdio.h>
//void reverse_order(char* p, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	char temp = 0;
//	while (left < right)
//	{
//		temp = *(left + p);
//		*(left + p) = *(right + p);
//		*(right + p) = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	char* p = arr;
//	int count = 0;
//	printf("������һ���ַ��������Դ��ո�");
//	gets_s(arr, 100);       //��2019��gets������ȡ���ˣ�������gets_s(������Ԫ�ص�ַ������洢�Ŀռ�)
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	reverse_order(arr, count);
//	printf("�������ַ���Ϊ��%s\n", arr);
//	return 0;
//}


//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)          // ��ӡ���ε��ϰ벿��-7��
//	{
//		for (j = 7; j > i + 1; j--)  // ÿһ���ȴ�ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= 2*i; j++)   // �ո����Ŵ�ӡ*��
//		{
//			printf("*");
//		}
//		printf("\n");                // һ�д�ӡ����֮������
//	}
//	for (i = 0; i < 6; i++)          // ��ӡ���ε��°벿��-6��
//	{
//		for (j = 0; j <= i; j++)     // һ���ȴ�ӡ�ո�
//		{                        
//			printf(" ");              
//		}
//		for (j = 0; j < 11 - 2 * i; j++)  // �ٴ�ӡ*��
//		{
//			printf("*");
//		}
//		printf("\n");                // ��ӡһ��֮�󣬻�����
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
//˼·��
//  1.20Ԫ����һ��Ǯ��һƿ ����20
//  2.ÿ������ƿ���Ի�һƿ��ˮ����10
//  3.�����ظ���2����ֱ����ƿ�ĸ�����������
//  20   10   5    2   1   1    
//#include<stdio.h>
//int main()
//{
//	int money = 0;             // ����Ǯ������
//	int number = 0;            // �ܺ���ˮ������
//	int empty = 0;             // ��ƿ������
//	printf("������ڴ���Ǯ����Ŀ��");      // ��ʾһ��
//	scanf("%d", &money);
//	number = money;            // һ��һƿ���ж���Ǯ��һ�־��ܺȶ��ٿ���
//	empty = money;             // ͬ���ܺȶ��ٿ��֣���һ�־��ܲ������ٿ�ƿ
//	while (empty > 1)          // ͳ��֮���ÿ�ƿ�һ��Ŀ��ֵ�������ֱ����ƿ����С��2ʱ��ֹ
//	{
//		number += empty / 2;           // ��ÿһ��������ƿ�һ��Ŀ��ּӵ�������ȥ
//		empty = empty / 2 + empty % 2; // ���¿�ƿ�ĸ�����
//		                               // ע�⣺�鲻�������Ŀ�ƿ��Ҫ�ۼƵ���һ��  
//	}
//	printf("%dԪ���Ժ�%dƿ��ˮ��\n", money, number);
//
//	return 0;
//}



//���Դ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//
//	for (i = 0; i <= 12; i++)   // 12��ѭ����������Խ��
//	{
//		arr[i] = 0;             // ������Խ������±�Ϊ12���ڴ�ռ�ʱ���ҵ��Ŀռ�ǡ����i�����Ŀռ�
//		printf("hehe\n");       // i������Ϊ0������ѭ������������ѭ��
//	}                           // ���ۣ���������Ԫ��ʱҪ�ر�ע�ⲻҪԽ����ʣ�����д��BUG
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strcpy
//�汾һ
//#include<stdio.h>
//void my_strcpy(char* start, char* dest)
//{
//	while (*start != '\0')            //�ж�startָ���Ԫ���Ƿ�Ϊ \0
//	{
//		*dest = *start;               //����
//		start++;                      //ָ���ƶ�
//		dest++;
//	}
//	*dest = '\0';                     //��Ŀ���ַ�����ĩβ����\0
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//  my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//�汾��
//#include<stdio.h>
//void my_strcpy(char* start, char* dest)
//{
//	while (*dest++ = *start++)      //�������濽���Ĺ���
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//�汾��
//#include<stdio.h>
//void my_strcpy(const char* start, char* dest)   //����const���Σ���ֹ��ʼ�ַ������޸�
//{
//	while (*dest++ = *start++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//�汾��
//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(const char* start, char* dest)
//{
//	assert(start != NULL);              //���϶��ԣ������ָ��
//	assert(dest != NULL);
//	while (*dest++ = *start++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}


//�汾��
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(const char* start, char* dest)  //���Ϸ���ֵ,����const���Σ���ֹ��ʼ�ַ������޸�
//{
//	char* ret = dest;                           //��¼Ŀ���ַ�������Ԫ�ص�ַ
//	assert(start != NULL);                      //���϶��ԣ������ָ��-Release�汾�ǿ����Ż�����
//	assert(dest != NULL);                       //���϶��ԣ������ָ��
//	while (*dest++ = *start++)
//	{
//		;
//	}
//	return ret;                                 //����Ŀ���ַ�������Ԫ�ص�ַ
//}
//int main()
//{
//	char arr1[] = "abcdef";                 //ע�⣺Դ�ַ�����һ��Ҫ���ַ����Ľ�����־\0
//	char arr2[20] = { 0 };                  //ע�⣺Ŀ������Ŀռ�һ��Ҫ����ͬʱһ��Ҫ�ܱ��޸�
//                                          //����д�ɣ�char* p = "xxxxxxx";
//                                          //����p��ŵ��ǳ����ַ������׵�ַ�����ǲ��ܱ��޸ĵ�
//	char* ret = my_strcpy(arr1, arr2);          //���յ�ַ
//	printf("%s\n", ret);
//	return 0;
//
//}



//ģ��ʵ��strlen
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* p)   // ����const���Σ���ֹ�ı�arr���������,size_t�Ƿ�ֹ����һ������
//{
//	int count = 0;
//	assert(p);                 // ���϶��ԣ���ֹ��ָ��
//	while (*p++)               // �жϵ�*pΪ\0ʱֹͣѭ����ͬʱ�ж���֮��++��
//	{
//		count++;               // ����
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("�ַ������ȣ�%d\n", ret);
//	return 0;
//}



//const���÷�
//#include<stdio.h>
//int main()
//{
//	const int a = 0;       //const���α��� - ���������������ܱ��޸�
//	// a = 5;              //error!
//	int b = 0;
//	const int* p = &b;     //const����*���������ָ�룬*p���ܱ��޸�
//	// *p = 10;             //error!
//	int const* p = &a;     //������ĵȼۡ�
//	int c = 0;
//	int* const d = &c;     //const����*�ŵ��ұߣ�d���ܱ��޸�
//	// d = &a;             //error��
//	return 0;
//}



//����ʱһ�κ�Σ�յĴ���
//#include<stdio.h>
//int* test()
//{
//	int a = 0;
//	return &a;    //���ؾֲ������ĵ�ַ�Ǻ�Σ�յģ����ռ��ͷź����ռ�ͻ᲻֪��������ʲô
//}
//int main()
//{
//	int* p = test();   //ָ��һ��Ҫ��ʼ������ֹҰָ�룬��ʼ��ʱҪ��Ϊ��
//	*p = 0;       //����һ��İ���ռ�����ݣ�����Σ�ղ�����
//	return 0;
//}



//̽���⺯��strlen�����ķ���ֵ���ͣ����溯����ӡʲô����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0) //�⺯��strlen��������Ϊsize_t�������޷������Σ���unsigned int һ����
//	{
//		printf("hehe!\n");        //�˳������н����ӡ-hehe��
//	}
//	else
//	{
//		printf("haha!\n");
//	}
//	return 0;
//}



//ͳ��һ�����ж�����1�ĸ���
//#include<stdio.h>
//size_t my_count_bit_one1(int a)   //�汾һ   //size_t ʹ�ü�ʹ����һ��������Ҳ������Ӱ�졣    
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)          //ѭ��Ҫ��0��ʼ���ж϶���������һλ����Ҫ���ơ�
//	{
//		if (((a >> i) & 1) == 1)      //�����Ʋ������Ͱ�λ����ȱ�����Ҫѭ��32�Σ��˷�ʱ�䡣
//		{ 
//			count++;
//		}
//	}
//	return count;
//}
// size_t my_count_bit_one2(unsigned int a) //�汾��
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)            //����д�����ͱ��������ʱ���Ͻ�Լ�ܶ�
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
// size_t my_count_bit_one3(a)  //�汾��
// {
//	 int count = 0;
//	 while (a)
//	 {
//		 a = a & (a - 1);        // a & (a - 1):ÿ������һ�Σ����������ұߵ�һ��1 �������㷨��
//		 count++;
//	 }
//	 return count;
// }
//int main()
//{
//	int a = 0;
//	printf("������һ��������");
//	scanf("%d", &a);
//	printf("%d�ж�����1�ĸ�����%u\n", a, my_count_bit_one1(a));    //%u����ӡ�޷�������
//	printf("%d�ж�����1�ĸ�����%u\n", a, my_count_bit_one2(a));
//	printf("%d�ж�����1�ĸ�����%u\n", a, my_count_bit_one3(a));
//	return 0;
//}




//дһ�����룬�ж�һ�����ǲ���2�Ĵη���:�� n & ��n - 1��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("������һ��������");      //��ʾһ��
//	scanf("%d", &a);
//	a = a & (a - 1);             //�����Ĵ洢���Զ����Ʒ�ʽ�洢�ģ�����2�Ĵη����Ķ�����������ֻ��һ��1.
//	if (0 == a)                  //����һ���a ��ֵΪ0������2�Ĵη���.��֮������.
//	{
//		printf("Yes!\n");
//	}
//	else
//	{
//		printf("No!\n");
//	}
//	return 0;
//}
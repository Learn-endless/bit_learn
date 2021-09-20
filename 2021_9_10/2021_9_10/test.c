#define _CRT_SECURE_NO_WARNINGS 1
//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
#include<stdio.h>
#include<string.h>
struct stu
{
	char name[10];
	int age;
};
int my_compare(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2) -> name);   //�Ƚ�����
	//return ((struct stu*)e1)->age - ((struct stu*)e2)->age;      //�Ƚ�����
}
void Exchange(char* x, char* y,size_t size)
{
	size_t i = 0;
	for (i = 0; i < size; i++)
	{
		char temp = *x;
		*x = *y;
		*y = temp;
		x++;      //ÿ�ν�����һ���ֽڣ�ָ��������
		y++;
	}
}
void my_qsort(void* base, size_t num, size_t size)
{
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if(my_compare((char*)base + (j * size),(char*)base + ((j + 1) * size)) > 0)  // >0 :��һ�������ڵڶ�������������
			{
				Exchange((char*)base + (j * size), (char*)base + ((j + 1) * size), size);
			}
		}
	}
}
int main()
{
	//char arr[] = "hgfedcba";
	struct stu arr[2] = { {"����",20},{"����",15} };
	int sz = sizeof(arr) / sizeof(arr[0]);

	my_qsort(arr, sz, sizeof(arr[0]));

	//int i = 0; 
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("%s", arr);
	return 0;
}
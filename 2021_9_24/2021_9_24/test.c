#define _CRT_SECURE_NO_WARNINGS 1

// ջ���ѣ����ݶ�(��̬��)�� �����
// ջ�ռ䣺�����βΣ��ֲ���������������ֵ
// �ѿռ䣺��̬�ڴ濪��
// ���ݶ�(��̬��) ����̬������ȫ�ֱ���



//��������
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//struct stu
//{
//	int a;       //�ṹ�е����������Աǰ���������һ��������Ա
//	int arr[];   //���һ����ԱΪδ֪��С������
//	//int arr[0]; //�������д����ȫ�ȼ�
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct stu));  //������������������Ա�Ĵ�С
//
//	//��Ͷ�̬�ڴ溯��һ��ʹ�ÿ��ٿռ�
//	struct stu* pc = (struct stu*)malloc(sizeof(struct stu) + 10 * sizeof(int)); //����������ʱ�Ĵ�С��10��Ԫ��
//	if (pc == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	//ʹ�ÿռ�
//	pc->a = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pc->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pc->arr[i]);
//	}
//	//�ռ䲻���ˣ�����
//	struct stu* ps = (struct stu*)realloc(pc, sizeof(struct stu) + 20 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	pc = ps;
//	//ʹ��
//	for (i = 0; i < 10; i++)
//	{
//		pc->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pc->arr[i]);
//	}
//	//�ͷ�
//	free(pc);
//	pc = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct ty_type
//{
//	int a;
//	int* ps;
//};
//
//int main()
//{
//	struct ty_type* pc = (struct ty_type*)malloc(sizeof(struct ty_type));
//	if (pc == NULL)
//	{
//		printf("����ʧ�ܣ�\n");
//		return -1;
//	}
//	//ʹ��
//	pc->a = 100;
//	pc->ps = (int*)malloc(10 * sizeof(int));
//	if (pc->ps == NULL)
//	{
//		printf("����ʧ�ܣ�\n");
//		return -1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pc->ps[i] = i;
//	}
//
//	//�ռ䲻���ˣ�����
//	int* ret = (int*)realloc(pc->ps, 20 * sizeof(int));  //������������20��Ԫ��
//	if (ret == NULL)
//	{
//		printf("����ʧ�ܣ�\n");
//		return -1;
//	}
//	pc->ps = ret;
//
//	for (i = 0; i < 20; i++)
//	{
//		*(pc->ps + i) = i;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(pc->ps+i));
//	}
//
//	free(pc->ps);
//	pc->ps = NULL;
//	free(pc);
//	pc = NULL;
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	short num = 0;
	scanf("%hd", &num);
	printf("%hd", num);
	return 0;
}
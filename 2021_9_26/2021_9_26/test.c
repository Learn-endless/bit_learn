#define _CRT_SECURE_NO_WARNINGS 1

//�ļ�
//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "w");
//	if (NULL == pc)
//	{
//		perror("fopen");  //ֻ������ʧ��
//		return -1;
//	}
//	//д�ļ�
//	fputc('h', pc);
//	fputc('e', pc);
//	fputc('l', pc);
//	fputc('l', pc);
//	fputc('o', pc);
//	fputc(' ', pc);
//	fputc('w', pc);
//	fputc('o', pc);
//	fputc('r', pc);
//	fputc('l', pc);
//	fputc('d', pc);
//
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//��׼����� - stdout
//��׼������ - stdin
//��׼������ - stderr

//#include<stdio.h>
//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//	fputc('\n', stdout);
//	fputs("hello world!\n", stdout);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "r");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	
//	//int ch = fgetc(stdin);
//	//printf("%c\n", ch);
//
//	//ch = fgetc(stdin);      //�ӱ�׼���ж�ȡ���ݣ�- ������
//	//printf("%c\n", ch);
//
//	//ch = fgetc(stdin);
//	//printf("%c\n", ch);
//
//	int ch = fgetc(pc);
//	printf("%c\n", ch);
//
//	ch = fgetc(pc);
//	printf("%c\n", ch);
//
//	ch = fgetc(pc);
//	printf("%c\n", ch);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "w");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fputs("hello world��\n", pc);
//
//	fputs("bit��\n", pc);
//
//	//fputc('h',pc);
//
//	//fputc('\n', pc);
//
//	//fputc('e', pc);
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "r");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	char str[20] = { 0 };
//	fgets(str, 13, pc);    //���������ÿ������һ��
//	printf(str);
//
//	fgets(str, 3, pc);
//	printf(str);
//
//	fgets(str, 4, pc);
//	printf(str);
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int n;
//	double a;
//};
//int main()
//{
//	//��ֻд�ķ�ʽ���ļ�
//	struct S s = { 100, 3.14 };
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "w");
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fprintf(pc, "%d %lf", s.n, s.a);
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int n;
//	double a;
//};
//int main()
//{
//	//��ֻд�ķ�ʽ���ļ�
//	struct S s = { 0 };
//	FILE* pc = fopen("C:\\Users\\19833\\Desktop\\data.txt", "r");
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	fscanf(pc, "%d %lf", &(s.n), &(s.a));
//	printf("%d %lf", s.n, s.a);
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//	return 0;
//}


//�����Ƶķ�ʽд
//#include<stdio.h>
//struct S
//{
//	int a;
//	double b;
//	char c[20];
//};
//int main()
//{
//	//Ҫд������
//	struct S s = { 100,3.14,"����" };
//	//�ö�����ֻд����ʽ���ļ�
//	FILE* pc = fopen("data.txt", "wb");   //wb������ֻд��ʽ
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(s), 1, pc);
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}

//�����Ƶķ�ʽ��
//#include<stdio.h>
//struct S
//{
//	int a;
//	double b;
//	char c[20];
//};
//int main()
//{
//	struct S s = { 0 };
//	//�ö�����ֻ������ʽ���ļ�
//	FILE* pc = fopen("data.txt", "rb");   //rb������ֻ����ʽ
//	if (NULL == pc)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	fread(&s, sizeof(s), 1, pc);
//	printf("%d %lf %s", s.a, s.b, s.c);
//
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//
//	return 0;
//}


//sprintf() - �Ѹ�ʽ��������ת��Ϊһ���ַ���
//sscanf() - ��һ���ַ�������ȡ��ʽ��������
//#include<stdio.h>
//struct S
//{
//	int a;
//	double b;
//	char c[20];
//};
//int main()
//{
//	struct S s = { 100,3.14,"����" };
//	char str[20] = { 0 };
//	//��һ���ļ�
//	FILE* pc = fopen("data.txt", "w");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//�Ѹ�ʽ��������ת��Ϊһ���ַ���
//	sprintf(str, "%d %lf %s", s.a, s.b, s.c);
//	fputs(str, pc);
//	//�ر��ļ�
//	fclose(pc);
//	pc = NULL;
//	printf(str);
//	struct S temp = { 0 };
//	//��һ���ַ�������ȡ��ʽ��������
//	sscanf(str, "%d %lf %s", &(temp.a), &(temp.b), temp.c);
//	printf("%d %lf %s\n", temp.a, temp.b, temp.c);
//
//	return 0;
//}


#include<stdio.h>
struct S
{
	int a;

	double b;
};
int main()
{
	struct S s = { 100,3.14 };

	char str[20] = { 0 };
	//�Ѹ�ʽ��������ת��Ϊһ���ַ���
	sprintf(str, "%d %lf", s.a, s.b);  //��������һ��\0
	printf(str);
	struct S temp = { 0 };
	//��һ���ַ�������ȡ��ʽ��������
	sscanf(str, "%d %lf", &(temp.a), &(temp.b));

	printf("%d %lf\n", temp.a, temp.b);

	return 0;
}
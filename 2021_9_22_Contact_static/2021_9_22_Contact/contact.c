#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc)
{
	pc->sz = 0;  //���㣬��ʾͨѶ¼��û����

	//ʹ��memset�����Դ����ϵ�˵������ʼ��
	//memset(pc->Data, 0, sizeof(struct PeoInfo) * PEOPLE_MAX);   //����1���������
	memset(pc->Data, 0, sizeof(pc->Data));                        //����2��sizeof(������) - ����������Ĵ�С

}

//�����ϵ����Ϣ
void AddPeople(struct Contact* pc)
{
	struct PeoInfo temp = { 0 };     //������ʱ��ŵ����˵���Ϣ
	
	if (pc->sz == PEOPLE_MAX)
	{
		printf("ͨѶ¼����!\n");
	}
	else
	{
		printf("������������");
		scanf("%s", temp.name);
		printf("�������Ա�");
		scanf("%s", temp.sex);
		printf("���������䣺");
		scanf("%d", &temp.age);
		printf("������绰���룺");
		scanf("%s", temp.number);
		printf("�������ַ��");
		scanf("%s", temp.address);

		pc->Data[pc->sz] = temp;      //������˵���Ϣ������ŵ�ͨѶ¼��
		pc->sz++;                     //��������1
		printf("��ӳɹ�!\n");

	}
}

//ɾ����ϵ����Ϣ
void DelPeople(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ�ܣ�\n");
	}
	else
	{
		char name[NAME_MAX] = { 0 };      //��ʱ���Ҫɾ������ϵ������

		printf("������Ҫɾ����ϵ�˵����֣�");
		scanf("%s", name);
		//���Ҹ���ϵ��
		int ret = FindPeople(pc, name);
		if (ret == -1)
		{
			printf("����ϵ�˲����ڣ�\n");
		}
		else
		{
			int j = 0;
			for (j = ret; j < pc->sz - 1; j++)
			{
				pc->Data[j] = pc->Data[j + 1];    //�Ѹ���ϵ�˵���Ϣ�����ǵ�
			}
			pc->sz--;
			printf("ɾ���ɹ���\n");
		}
	}
}

//������ϵ��
int FindPeople(struct Contact* pc, char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->Data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//��ʾͨ��¼�����ϵ��
void Display(struct Contact* pc)
{
	printf("%10s\t%2s\t%4s\t%8s\t%10s\n\n", "name", "sex", "age", "number", "address");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s\t%2s\t%4d\t%8s\t%10s\n", 
			pc->Data[i].name, pc->Data[i].sex, pc->Data[i].age, pc->Data[i].number, pc->Data[i].address);
	}
}

//������ϵ�˲���ӡ����Ϣ
void SearchPeople(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("��������ϵ�˵����֣�");
	scanf("%s", name);
	int ret = FindPeople(pc, name);
	if (ret == -1)
	{
		printf("����ϵ�˲����ڣ�\n");
	}
	else
	{
		printf("%10s\t%2s\t%4s\t%8s\t%10s\n\n", "name", "sex", "age", "number", "address");
		printf("%10s\t%2s\t%4d\t%8s\t%10s\n",
			pc->Data[ret].name, pc->Data[ret].sex, pc->Data[ret].age, pc->Data[ret].number, pc->Data[ret].address);
	}
}

//�޸�ָ����ϵ����Ϣ
void ModPeople(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("��������Ҫ�޸ĵ���ϵ�����֣�");
	scanf("%s", name);
	int ret = FindPeople(pc, name);
	if (ret == -1)
	{
		printf("����ϵ�˲����ڣ�\n");
	}
	else
	{
		struct PeoInfo temp = { 0 };
		printf("�������µ����֣�");
		scanf("%s", temp.name);
		printf("�������µ��Ա�");
		scanf("%s", temp.sex);
		printf("�������µ����䣺");
		scanf("%d", &temp.age);
		printf("�������µĵ绰��");
		scanf("%s", temp.number);
		printf("�������µĵ�ַ��");
		scanf("%s", temp.address);

		pc->Data[ret] = temp;
		printf("�޸ĳɹ���\n");
	}
}

//������������ͨѶ¼
int name_sort(void* e1, void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

//����������ͨѶ¼ - ����
void NameSort(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ʧ�ܣ�\n");
	}
	else
	{
		//ʹ��qsort��������
		qsort(pc->Data, pc->sz, sizeof(struct PeoInfo), name_sort);
		printf("����ɹ���(����)��\n");
	}
}

//���������ϵ��
void ClsContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("û����ϵ�ˣ����ʧ�ܣ�\n");
	}
	else
	{ 
		//ֱ�ӳ�ʼ��ͨѶ¼
		InitContact(pc);
		printf("����ɹ���\n");
	}
}
#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//初始化通讯录
void InitContact(struct Contact* pc)
{
	pc->sz = 0;  //归零，表示通讯录里没有人

	//使用memset函数对存放联系人的数组初始化
	//memset(pc->Data, 0, sizeof(struct PeoInfo) * PEOPLE_MAX);   //方法1：便于理解
	memset(pc->Data, 0, sizeof(pc->Data));                        //方法2：sizeof(数组名) - 求整个数组的大小

}

//添加联系人信息
void AddPeople(struct Contact* pc)
{
	struct PeoInfo temp = { 0 };     //用来临时存放单个人的信息
	
	if (pc->sz == PEOPLE_MAX)
	{
		printf("通讯录已满!\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", temp.name);
		printf("请输入性别：");
		scanf("%s", temp.sex);
		printf("请输入年龄：");
		scanf("%d", &temp.age);
		printf("请输入电话号码：");
		scanf("%s", temp.number);
		printf("请输入地址：");
		scanf("%s", temp.address);

		pc->Data[pc->sz] = temp;      //把这个人的信息真正存放到通讯录中
		pc->sz++;                     //总人数加1
		printf("添加成功!\n");

	}
}

//删除联系人信息
void DelPeople(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，删除失败！\n");
	}
	else
	{
		char name[NAME_MAX] = { 0 };      //临时存放要删除的联系人名字

		printf("请输入要删除联系人的名字：");
		scanf("%s", name);
		//查找该联系人
		int ret = FindPeople(pc, name);
		if (ret == -1)
		{
			printf("该联系人不存在！\n");
		}
		else
		{
			int j = 0;
			for (j = ret; j < pc->sz - 1; j++)
			{
				pc->Data[j] = pc->Data[j + 1];    //把该联系人的信息给覆盖掉
			}
			pc->sz--;
			printf("删除成功！\n");
		}
	}
}

//查找联系人
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

//显示通信录里的联系人
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

//查找联系人并打印其信息
void SearchPeople(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入联系人的名字：");
	scanf("%s", name);
	int ret = FindPeople(pc, name);
	if (ret == -1)
	{
		printf("该联系人不存在！\n");
	}
	else
	{
		printf("%10s\t%2s\t%4s\t%8s\t%10s\n\n", "name", "sex", "age", "number", "address");
		printf("%10s\t%2s\t%4d\t%8s\t%10s\n",
			pc->Data[ret].name, pc->Data[ret].sex, pc->Data[ret].age, pc->Data[ret].number, pc->Data[ret].address);
	}
}

//修改指定联系人信息
void ModPeople(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入需要修改的联系人名字：");
	scanf("%s", name);
	int ret = FindPeople(pc, name);
	if (ret == -1)
	{
		printf("该联系人不存在！\n");
	}
	else
	{
		struct PeoInfo temp = { 0 };
		printf("请输入新的名字：");
		scanf("%s", temp.name);
		printf("请输入新的性别：");
		scanf("%s", temp.sex);
		printf("请输入新的年龄：");
		scanf("%d", &temp.age);
		printf("请输入新的电话：");
		scanf("%s", temp.number);
		printf("请输入新的地址：");
		scanf("%s", temp.address);

		pc->Data[ret] = temp;
		printf("修改成功！\n");
	}
}

//按名字升序排通讯录
int name_sort(void* e1, void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

//以名字排序通讯录 - 升序
void NameSort(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，排序失败！\n");
	}
	else
	{
		//使用qsort快速排序
		qsort(pc->Data, pc->sz, sizeof(struct PeoInfo), name_sort);
		printf("排序成功！(升序)！\n");
	}
}

//清空所有联系人
void ClsContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("没有联系人，清除失败！\n");
	}
	else
	{ 
		//直接初始化通讯录
		InitContact(pc);
		printf("清除成功！\n");
	}
}
#pragma once

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#define NAME_MAX  20     //最大名字的长度
#define SEX_MAX   5      //性别最大长度
#define NUMBER_MAX 20    //电话最大长度
#define ADDRESS_MAX 20   //地址最大长度

#define PEOPLE_MAX 1000  //通讯录里面最大能存放多少个人的信息

//存放每一个人的具体信息
struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char number[NUMBER_MAX];
	char address[ADDRESS_MAX];
};

//通讯录
struct Contact
{
	struct PeoInfo Data[PEOPLE_MAX];     //存放1000个通讯人的信息
	int sz;                         //记录当前通讯录里还有多少人
};

//初始化通讯录
void InitContact(struct Contact* pc);

//添加联系人信息
void AddPeople(struct Contact* pc);

//删除联系人信息
void DelPeople(struct Contact* pc);

//显示通讯录
void Display(struct Contact* pc);

//查找联系人
int FindPeople(struct Contact* pc, char* name);

//查找联系人并打印其信息
void SearchPeople(struct Contact* pc);

//修改指定联系人信息
void ModPeople(struct Contact* pc);

//以名字排序通讯录 - 升序
void NameSort(struct Contact* pc);

//清空所有联系人
void ClsContact(struct Contact* pc);
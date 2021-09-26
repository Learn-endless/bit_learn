#pragma once

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#define NAME_MAX  20     //������ֵĳ���
#define SEX_MAX   5      //�Ա���󳤶�
#define NUMBER_MAX 20    //�绰��󳤶�
#define ADDRESS_MAX 20   //��ַ��󳤶�

#define PEOPLE_MAX 1000  //ͨѶ¼��������ܴ�Ŷ��ٸ��˵���Ϣ

//���ÿһ���˵ľ�����Ϣ
struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char number[NUMBER_MAX];
	char address[ADDRESS_MAX];
};

//ͨѶ¼
struct Contact
{
	struct PeoInfo Data[PEOPLE_MAX];     //���1000��ͨѶ�˵���Ϣ
	int sz;                         //��¼��ǰͨѶ¼�ﻹ�ж�����
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//�����ϵ����Ϣ
void AddPeople(struct Contact* pc);

//ɾ����ϵ����Ϣ
void DelPeople(struct Contact* pc);

//��ʾͨѶ¼
void Display(struct Contact* pc);

//������ϵ��
int FindPeople(struct Contact* pc, char* name);

//������ϵ�˲���ӡ����Ϣ
void SearchPeople(struct Contact* pc);

//�޸�ָ����ϵ����Ϣ
void ModPeople(struct Contact* pc);

//����������ͨѶ¼ - ����
void NameSort(struct Contact* pc);

//���������ϵ��
void ClsContact(struct Contact* pc);
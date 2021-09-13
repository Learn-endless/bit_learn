#pragma once

#include<stdio.h>

#include<stdlib.h>

#include<time.h>

#include<windows.h>

#define ROW 9
#define COL 9
#define EASY_MODE 10

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void InitBoard(char board[ROWS][COLS], int row, int col, char ret);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//����
void SetMine(char mine[ROWS][COLS], int row, int col, int count);

//����
void MoveMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count);

//ͳ����Χ�׵ĸ���
int TotalMine(char mine[ROWS][COLS], int x, int y);
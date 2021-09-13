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

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int row, int col, char ret);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//埋雷
void SetMine(char mine[ROWS][COLS], int row, int col, int count);

//排雷
void MoveMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count);

//统计周围雷的个数
int TotalMine(char mine[ROWS][COLS], int x, int y);
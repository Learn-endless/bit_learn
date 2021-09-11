#pragma once

#include<stdio.h>

#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� - '3'
//���� - '4'
char IsWin(char board[ROW][COL], int row, int col);

//�ж��Ƿ�ƽ��
int IsFull(char board[ROW][COL], int row, int col);
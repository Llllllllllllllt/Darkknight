#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
//����������ͷ�ļ���
void initboard(char board[Row][Col], int row, int col);
void displayboard(char board[Row][Col], int row, int col);
void playermove(char board[Row][Col], int row, int col);
void computermove(char board[Row][Col], int row, int col);
//���������ĸ�״̬
//���Ӯ   - ����*
//����Ӯ   - ����#
//ƽ��     - ����Q
//������Ϸ - ����C
char iswin(char board[Row][Col], int row, int col);
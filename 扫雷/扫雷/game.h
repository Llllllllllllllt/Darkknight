#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define easycount 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[Rows][Cols], int rows, int cols);
void displayboard(char board[Rows][Cols], int row, int col);
void setmine(char board[Rows][Cols], int row, int col);
void findmine(char mine[Rows][Cols],char show[Rows][Cols], int row, int col);
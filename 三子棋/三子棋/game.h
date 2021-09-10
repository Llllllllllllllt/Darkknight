#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
//函数声明在头文件中
void initboard(char board[Row][Col], int row, int col);
void displayboard(char board[Row][Col], int row, int col);
void playermove(char board[Row][Col], int row, int col);
void computermove(char board[Row][Col], int row, int col);
//告诉我们四个状态
//玩家赢   - 返回*
//电脑赢   - 返回#
//平局     - 返回Q
//继续游戏 - 返回C
char iswin(char board[Row][Col], int row, int col);
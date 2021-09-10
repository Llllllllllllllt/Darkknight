#include"game.h"
void initboard(char board[Rows][Cols], int rows, int cols,char ret) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = ret;
		}
	}
}
void displayboard(char board[Rows][Cols], int row, int col) {
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++) {
		printf("%d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d", i);
		for (j = 1; j <= col; j++) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[Rows][Cols], int row, int col) {
	int count = easycount;
	while (count) {
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}
//'1'-'0' = 1
//'3'-'0' = 3
//'0'-'0' = 0
int get_mine_count(char mine[Rows][Cols], int x, int y) {
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x-1][y+1]+
		mine[x + 1][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x +1][y ] - 8 * '0';
}
void findmine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col) 
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win < row*col-easycount) {
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1') {
				printf("很遗憾，被炸死了\n");
				displayboard(mine, row, col);
				break;
			}
			//没有踩雷
			else {
				//接下来要计算x，y坐标周围有几个雷。
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show, row, col);
				win++;
			}
		}
		else {
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - easycount) {
		printf("恭喜你，成功排雷\n");
		displayboard(mine, row, col);
	}
}
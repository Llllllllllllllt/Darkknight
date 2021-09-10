#include"game.h"
//函数声明
void initboard(char board[Row][Col], int row, int col) {
	//初始化棋盘
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[Row][Col], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		//   |   |   
	   // ---|---|---     这就是一组的棋盘打印

		//打印竖行
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1, board[i][2]]);*/
		//上面的只对应了三行棋盘，而下面就是适用于任意行的代码
		int j = 0;
		for (j = 0; j < row; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			//打印分割行
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}printf("\n");
		}
			
	}
}
void playermove(char board[Row][Col], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1) {
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断x，y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标被占用\n");
			}
		}
		else {
			printf("非法输入\n");
		}
	}
	
}
void computermove(char board[Row][Col], int row, int col) {
	printf("电脑走:>\n");
	int x = 0;
	int y = 0;
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
	
}
//返回1，表示棋盘满了，则平局
//返回0，表示没有满，
int isfull(char board[Row][Col]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < Row; i++) {
		for (j = 0; j < Col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
				
		}
	}
	return 1;

}
char iswin(char board[Row][Col], int row, int col) {
	int i = 0;
	//三行是否连成线的判断
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][1];
		}
	}
	//三列是否连成线的判断
	for (i = 0; i < row; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	//判断对角线是否连成线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	//判断是否平局
	if (1 == isfull(board)) {
		return 'Q';
	}
	return 'C';
	
}

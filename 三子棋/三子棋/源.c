
#include"game.h"


void menu() {
	printf("***************************\n");
	printf("******1.play 0.exit *******\n");
	printf("***************************\n");
}
void game() {
	char ret = ' ';
	//数组-存放玩家和电脑走出的棋盘信息
	char board[Row][Col] = {0};//全部空格
	//初始化棋盘
	initboard(board, Row, Col);//三行的棋盘开始都是空格
	//打印棋盘
	displayboard(board, Row, Col);
	//下棋
	while (1) {
		//玩家下棋
		playermove(board,Row,Col);
		displayboard(board, Row, Col);
		//判断玩家是否赢
		ret = iswin(board, Row, Col);
		if (ret != 'C') {
			break;
		}
		
		//电脑下棋
		computermove(board,Row,Col);
		displayboard(board, Row, Col);
		//判断电脑是否赢
		ret = iswin(board, Row, Col);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢\n");
	}
	if (ret == '#') {
		printf("电脑赢\n");
	}
	if(ret == 'Q') {
		printf("平局\n");
	}
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));//引用时间戳，来生成随机数。
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);
}
int main() {
	test();
	return 0;
}
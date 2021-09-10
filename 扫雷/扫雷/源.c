#include<stdio.h>
#include"game.h"
void menu() {
	printf("*************************\n");
	printf("******** 1.play *********\n");
	printf("******** 0.exit *********\n");
	printf("*************************\n");
}
void game() {
	printf("扫雷\n");
	//雷的信息存储
	//1.布置好雷的信息
	char mine[Rows][Cols] = { 0 };//11*11
	//2.排查好雷的信息
	char show[Rows][Cols] = { 0 };
	//初始化
	initboard(mine, Rows, Cols, '0');
	initboard(show, Rows, Cols, '*');
	//打印棋盘
	/*displayboard(mine, Row, Col);*/
	displayboard(show, Row, Col);
	//布置雷
	setmine(mine,Row,Col);
	/*displayboard(mine, Row, Col);*/
	//扫雷
	findmine(mine, show, Row, Col);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
			}
	} while (input);
}
int main() {
	test();
	return 0;
}
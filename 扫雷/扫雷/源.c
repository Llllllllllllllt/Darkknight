#include<stdio.h>
#include"game.h"
void menu() {
	printf("*************************\n");
	printf("******** 1.play *********\n");
	printf("******** 0.exit *********\n");
	printf("*************************\n");
}
void game() {
	printf("ɨ��\n");
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[Rows][Cols] = { 0 };//11*11
	//2.�Ų���׵���Ϣ
	char show[Rows][Cols] = { 0 };
	//��ʼ��
	initboard(mine, Rows, Cols, '0');
	initboard(show, Rows, Cols, '*');
	//��ӡ����
	/*displayboard(mine, Row, Col);*/
	displayboard(show, Row, Col);
	//������
	setmine(mine,Row,Col);
	/*displayboard(mine, Row, Col);*/
	//ɨ��
	findmine(mine, show, Row, Col);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
			}
	} while (input);
}
int main() {
	test();
	return 0;
}
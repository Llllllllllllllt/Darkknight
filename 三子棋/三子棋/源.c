
#include"game.h"


void menu() {
	printf("***************************\n");
	printf("******1.play 0.exit *******\n");
	printf("***************************\n");
}
void game() {
	char ret = ' ';
	//����-�����Һ͵����߳���������Ϣ
	char board[Row][Col] = {0};//ȫ���ո�
	//��ʼ������
	initboard(board, Row, Col);//���е����̿�ʼ���ǿո�
	//��ӡ����
	displayboard(board, Row, Col);
	//����
	while (1) {
		//�������
		playermove(board,Row,Col);
		displayboard(board, Row, Col);
		//�ж�����Ƿ�Ӯ
		ret = iswin(board, Row, Col);
		if (ret != 'C') {
			break;
		}
		
		//��������
		computermove(board,Row,Col);
		displayboard(board, Row, Col);
		//�жϵ����Ƿ�Ӯ
		ret = iswin(board, Row, Col);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("���Ӯ\n");
	}
	if (ret == '#') {
		printf("����Ӯ\n");
	}
	if(ret == 'Q') {
		printf("ƽ��\n");
	}
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));//����ʱ������������������
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
}
int main() {
	test();
	return 0;
}
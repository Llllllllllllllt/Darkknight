#include"game.h"
//��������
void initboard(char board[Row][Col], int row, int col) {
	//��ʼ������
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
	   // ---|---|---     �����һ������̴�ӡ

		//��ӡ����
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1, board[i][2]]);*/
		//�����ֻ��Ӧ���������̣���������������������еĴ���
		int j = 0;
		for (j = 0; j < row; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			//��ӡ�ָ���
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
	printf("�����:>\n");
	while (1) {
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�x��y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�����걻ռ��\n");
			}
		}
		else {
			printf("�Ƿ�����\n");
		}
	}
	
}
void computermove(char board[Row][Col], int row, int col) {
	printf("������:>\n");
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
//����1����ʾ�������ˣ���ƽ��
//����0����ʾû������
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
	//�����Ƿ������ߵ��ж�
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][1];
		}
	}
	//�����Ƿ������ߵ��ж�
	for (i = 0; i < row; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	//�ж϶Խ����Ƿ�������
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (1 == isfull(board)) {
		return 'Q';
	}
	return 'C';
	
}

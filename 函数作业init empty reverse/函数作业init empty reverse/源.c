#include<stdio.h>
#include<stdlib.h>
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
void init(int* arr, int len) {
	printf("���ʼ������:\n");
	//����Ԫ�ص�ֵ
	for (int i = 0; i <= len; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i <= len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");

}
void Empty(int* arr, int len) {
	//ʹ�����е�ÿһ�����0
	for (int i = 0; i <= len; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i <= len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");
}
void reverse(int* arr, int len) {
	//�������Ԫ�ؽ��еߵ�
	for (int i = 0; i <= len/2; i++) {
		int tem=0;
		tem = arr[i];
		arr[i] = arr[len - i];
		arr[len - i] = tem;
	}
	for (int i = 0; i <= len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");
}
int main() {
	int n;
	printf("������Ԫ�ظ���\n");
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);//����һ����СΪn������
	int len = n - 1;
	init(&arr, len);

	printf("��������\n");
	reverse(&arr, len);

	printf("�������\n");
	Empty(&arr, len);
	free(arr);
	system("pause");
    return 0;
}
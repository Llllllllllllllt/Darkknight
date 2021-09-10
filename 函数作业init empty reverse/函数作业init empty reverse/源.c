#include<stdio.h>
#include<stdlib.h>
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
void init(int* arr, int len) {
	printf("请初始化数组:\n");
	//输入元素的值
	for (int i = 0; i <= len; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i <= len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");

}
void Empty(int* arr, int len) {
	//使数组中的每一项都等于0
	for (int i = 0; i <= len; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i <= len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");
}
void reverse(int* arr, int len) {
	//将数组的元素进行颠倒
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
	printf("请输入元素个数\n");
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);//申请一个大小为n的数组
	int len = n - 1;
	init(&arr, len);

	printf("逆置数组\n");
	reverse(&arr, len);

	printf("清空数组\n");
	Empty(&arr, len);
	free(arr);
	system("pause");
    return 0;
}
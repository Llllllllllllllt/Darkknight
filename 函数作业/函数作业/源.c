#include<stdio.h>
void function(int a) {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			int sum = i * j;
			printf("%d*%d = %d  ", j, i, sum);
		}
		printf("\n");
	}


}
int main() {
	int a;
	printf("请输入数字");
	scanf("%d", &a);
	function(a);


	return 0;
}
//函数设计中尽可能不使用全局变量

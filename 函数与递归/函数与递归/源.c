#include<stdio.h>
#include<string.h>
int fib2(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}//����ĺ�����Ȼ����50���ϵ�쳲��������ܿ죬��Ҫ������������

//ʹ�õݹ�ķ�������쳲�������
int fib(int n) {
	if (n <= 2) {
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}//�������ֵݹ鷽���ڼ���50���ϵ�쳲���������ʱ��
//���Լ����ǳ��������Բ�̫�ʺ��õݹ�

//������ʹ�õݹ�ķ������н׳˵ļ���
int factorial2(int n) {
	if (n <= 1) {
		return 1;
	}
	else
		return n* factorial2(n - 1);
}
//forѭ����׳�
int factorial1(int n) {
	int i = 1;
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}
//�ݹ�ķ��������ַ����ļ��㳤�ȣ�û���õ���ʱ������
//int mylen(char* str) {
//	if (*str != '\0') {
//		return 1 + mylen(str + 1);//�����str+1�ǵ�ַ��1
//	}
//	else
//		return 0;
//}
//�����Ǵ�����ʱ���������м���
int mylen(char* str) {
	int count = 0;
	while(*str != 0) {
		count++;
		str++;
	}
	return count;
}
//�ݹ���������Ҫ����
//һ��������������
//��һ����������Ľ���ڲ��Ͻӽ���������
void print(int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf("%d", n%10);
}
int main() {
	//int a = 0;
	//int b = 1;
	//int sum = Add(a, b);
	//printf("%d\n", sum);
	////�ݹ鳣���Ĵ���ջ���
	//unsigned int num = 0;
	//scanf("%d", &num);
	//print(num);
	//char arr[] = "bit";
	//int len = mylen(arr);
	////arr�����飬���鴫����������ȥ�Ĳ����������飬
	////���ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", len);
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = factorial2(n);
	printf("%d\n", ret);
	int num1 = 0;
	scanf("%d", &num1);
	printf("%d\n", fib2(num1));
	return 0;
}
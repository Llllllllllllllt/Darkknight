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
}//这里的函数虽然计算50以上的斐波那契数很快，但要考虑溢出的情况

//使用递归的方法计算斐波那契数
int fib(int n) {
	if (n <= 2) {
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}//但是这种递归方法在计算50以上的斐波那契数的时候
//电脑计算会非常慢，所以不太适合用递归

//这里是使用递归的方法进行阶乘的计算
int factorial2(int n) {
	if (n <= 1) {
		return 1;
	}
	else
		return n* factorial2(n - 1);
}
//for循环求阶乘
int factorial1(int n) {
	int i = 1;
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}
//递归的方法进行字符串的计算长度（没有用到临时变量）
//int mylen(char* str) {
//	if (*str != '\0') {
//		return 1 + mylen(str + 1);//这里的str+1是地址加1
//	}
//	else
//		return 0;
//}
//这里是创建临时变量来进行计算
int mylen(char* str) {
	int count = 0;
	while(*str != 0) {
		count++;
		str++;
	}
	return count;
}
//递归有两个必要条件
//一个就是限制条件
//另一个就是输出的结果在不断接近限制条件
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
	////递归常见的错误：栈溢出
	//unsigned int num = 0;
	//scanf("%d", &num);
	//print(num);
	//char arr[] = "bit";
	//int len = mylen(arr);
	////arr是数组，数组传参数，传过去的不是整个数组，
	////而是第一个元素的地址
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
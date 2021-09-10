#include<stdio.h>
//int num2 = 20;//全局变量  定义在代码块{}大括号之外的变量
//局部变量和全局变量建议不要名字相同，容易误会产生bug
//当局部变量和全局变量名字相同时，优先局部变量
int main()
{
	//局部变量的生命周期   进入作用域开始，出作用域结束
	//全局变量的生命周期是main函数的生命周期，也就是整个程序的生命周期
	//局部变量的作用域 作用在所在区域的范围
	//全局变量则作用在整个工程
	//而在另一个项目里面的全局变量，要在这个项目里面使用需要进行声明
	//否则就会显示未声明的标识符
	//extern int gloval;   // extern  声明外用符号
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);//输入数据, 使用输入函数scanf_s
	//int sum = 0; //  如果写在这里的话c++是可以的，但是C语言有语法规定
	//这里c语言语法规定，变量要定义在代码块的最前面
	int sum = 0;
	sum = num1 + num2;

	printf("sum = %d\n", sum);
	//年龄
	//20
	//short age = 20;//向内存申请2个字节 16bit位
	char ch = 'A';
	int num = 10;//局部变量
	printf("hello\n");
	int age = 20;
	printf("%d\n", age);
	printf("%c\n",ch);
	printf("%d\n", sizeof(char));//1个字节
	printf("%d\n", sizeof(short));//个字节
	printf("%d\n", sizeof(int));//4个字节
	printf("%d\n", sizeof(long));//4个字节
	printf("%d\n", sizeof(long long));//8个字节
	printf("%d\n", sizeof(float));//4个字节
	printf("%d\n", sizeof(double));//8个字节
	return 0;
}

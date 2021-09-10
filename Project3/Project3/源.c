#include <stdio.h>
#define h 10

void test() {
	static int a6 = 1;
	//如果没有static关键字的话，打印出来的就是5个2
	//没有static时，a6就是这个test的局部变量，
	//再次进行遍历的时候，就会重新进行赋值处理
	//static 修饰局部变量
	//这时的局部变量的生命周期就变长了，
	a6++;
	printf("%d\n", a6);
}
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
#define bi(f,l) (f>l? f:l)
int main()
{
	int a7 = h;//#define 定义的标识符常量
	printf("%d\n", a7);
	/*int f2 = 0;
	int l2 = 2;
	int k = 0;
	k = bi(f2, l2);
	pringf("%d\n", k);*/
	int i = 0;
	while (i < 5) {
		test();
		i++;
	}
	int a = 0;
	int b = ~a;
	//~  是按位取反的意思，
	//对应的二进制  ，1取为0，0取为1
	//原码，反码，补码
	//负数在内存中存储的时候，存储的是二进制的补码
	//源码第一位代表的是正负，1代表正，0代表负，
	//原码除第一位（符号位）之外按位取反，后得到的是反码，
	//反码+1等于补码
	//只要是整数，内存中存储的都是二进制的补码
	//正数  -- 原码，反码，补码  相同
	//负数就是需要补码来进行存储
	//-2
	//-2的原码10000000000000000000000000000010
	//-2的反码11111111111111111111111111111101
	//-2的补码11111111111111111111111111111110
	printf("%d\n", b);//使用打印的是原码
	int c = 10;
	int d = c++;//后置++，先使用，再++
	printf("c = %d,d = %d\n", c, d);
	int e = 10;
	int f = ++e;//前置++，先++，后使用
	printf("e = %d, f= %d\n", e, f);
	int a1 = (int)3.14;
	printf("%d\n", a1);
	//原来的3.14是double类型，现在前面加上（int）
	//进行了强制类型转换,就变成了整数3
	//非0  --真
	//0  -- 假
	//&& --  逻辑与
	//|| --  逻辑或
	int a2 = 3;
	int b2 = 5;
	int c2 = a2 && b2;
	printf("%d\n", c2);
	//条件操作符
	//exp? exp2: exp3
	int a3 = 10;
	int b3 = 20;
	int max1 = 0;
	max1 = a3 > b3 ? a3 : b3;
	int arr[10] = { 0 };
	arr[4];// 这里的[]是下标操作符

	printf("%d\n", max1);
	//打印出来的c2为1
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);//这里的()是函数调用操作符
	printf("max = %d\n", max);
	//常见关键字
	int a4 = 10;//局部变量，也叫自动变量
	//默认省略掉了auto（关键字）
	//auto int a4 = 10;
	register int a5 = 10;//register关键字就是寄存器的意思
	//建议把a定义为寄存器变量
	//int定义的变量都是有符号的，
	//signed int   前面的signed默认省略，
	//如果想要定义无符号的int
	//就是unsigned 
	//unsigned int num = -10;  //这里的num是没有符号的
	//struct --结构体关键字
	//typedef - 类型定义  - 类型重定义
	//就是将类型取一个别名，
	//typedef int num uint
	//uint num2 = 10;
	//这里的uint和上面的int定义的num2和num类型相同
	//extern   --声明外部符号的
	extern int g;
	printf("%d\n", g);
	//这是在另一个c文件定义的全局变量
	//而如果使用static进行修饰的话，
	//就会改变变量的作用域---静态修饰的全局变量
	//只能在自己的源文件内部使用。
	//static修饰函数，也是改变了函数的作用域-不准确
	//static修饰函数改变了函数的链接属性
	//普通的函数具有外部链接属性，
	//但是被static修饰时函数就有内部链接属性
	extern Add(int, int);
	int sum1 = 0;
	sum1 = Add(10, 20);
	printf("%d\n", sum1);
	return 0;
}
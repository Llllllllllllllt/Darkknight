#include <stdio.h>

struct Book {
	char name[20];
	short price;
};//创建了一个结构体类型
int main() {
	struct Book b1 = { "c语言程序设计",55 };
	strcpy(b1.name, "c++");
	//strcpy - string copy - 字符串拷贝 - 库函数
	//strcopy就是将新的字符串拷贝到数组中，
	//注意这里的name是数组， 
	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n", b1.price);
	struct Book* pb = &b1;
	//利用pb打印署名和价格
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//.操作符    操作的是结构体变量，找到成员
	//-> 操作符， 结构体指针->成员
	//另一种写法
	printf("%s\n", pb->name);//指针指向内容
	
	return 0;

}
//int main() {
//
//	int a = 10;//4个字节
//	int* p = &a;//取地址（p的类型就是int*)
//	//有一种变量用来存放地址的---指针变量
//	*p = 20;//* - 解引用操作符/间接访问操作符
//	printf("%p\n", &a);
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));
//	//在32位平台上是4个字节，在64位平台上是8个字节，
//	//因为指针的内存无非就是二进制的数据，
//	//如果是在32位平台上，只需要32个比特位就可以涉及到所有的
//	//地址值，所以就是4个字节，64位平台一同。
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);//打印双浮点数用lf
//	return 0;
//}

#include<stdio.h>
typedef struct stu {
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void printl(stu tmp) {
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}
void print2(stu* ps) {
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}
int main() {
	//描述学生的一些数据
	//年龄，性别，名字
	//struct  结构体关键字    struct stu  -结构体类型
	//成员变量
	//char name[20];
	//char gender[male]
	stu s = { "李四",40,"1515555555","男" };
	printl(s);//方法一用的是实参的传送
	print2(&s);//方法二用的是地址的传送
	//方法二更好一些，因为方法一在传送的时候会在生成一个结构体
	//空间，而方法二不管多大的结构体，传递的都是地址，就4或8
	//个字节，当结构体过大时，方法一的系统开销大，性能下降。
	return 0;
}
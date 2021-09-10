#include<stdio.h>
int getmax(int x, int y) {
	return x > y ? x : y;
}
//创建了一个结构体类型-struct
struct stu {
	//成员变量
	char name[20];
	int age;
	char id[20];
};
int main() {
	//int a = 5 / 2;//整数除法
	////取模操作符两边的数字必须是整数。
	//printf("a=%d\n", a);
	//printf("a=%lf\n", a);
	//int b = -1;
	////移位操作符

	////>>右移操作符
	////移动的是二进制位
	////1.算术右移
	////右边丢弃，左边补原符号位
	////2.逻辑右移
	////右边丢弃，左边补0。	
	//b >> 1;
	//printf("%d\n", b);
	//<<左移操作符
	//左边丢弃，右边补0
	//位操作符
	//按位与
	//&-按2进制位与
	int a = 3;
	int b = 5;
	int c = a & b;
	//00000000000000000000000000000011;
	//00000000000000000000000000000101;
	//00000000000000000000000000000001;   1
	printf("%d\n", c);
	//按位或
	int a1 = 3;
	int b1 = 5;
	int c1 = a | b;
	printf("%d\n", c1);
	//00000000000000000000000000000011;
	//00000000000000000000000000000101;
	//00000000000000000000000000000111;   7
	//按位异或
	int a2 = 3;
	int b2 = 5;
	int c2 = a2 ^ b2;
	printf("%d\n", c2);
	//00000000000000000000000000000011;
	//00000000000000000000000000000101;
	//00000000000000000000000000000110;   6
	//要求交换两个变量的值，但是不能创建第三个变量
	int a3 = 3;
	int b3 = 5;
	a3 = a3 + b3;
	b3 = a3 - b3;
	a3 = a3 - b3;
	printf("%d%d\n", a3, b3);
	int a4 = 3;
	int b4 = 5;
	a4 = a4 ^ b4;
	b4 = a4 ^ b4;
	a4 = a4 ^ b4;
	printf("%d%d\n", a4, b4);
	//求一个数字在内存中的补码形式有几个一
	int num = 15;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if (1 == ((num >> i) & 1)) {
			count++;
			//和1进行按位与如果补码的最后一位是1的话，就一定
			//会返回1，此时在配合上右移操作符，就会遍历32位
			//的所有二进制数字。
		}
	}
	printf("%d\n",count);
	//复合赋值符
	//+=,-=,<<=
	a += 2;
	a >>= 1;
	a &= 1;

	//单目操作符  ！ -（负号） +（正号） & sizeof

	//顾名思义就是此操作符只会对一个数进行操作
	//只有一个操作数
	//!
    //!a ,只要a不是0，就会返回0，而如果a本身就是0，则返回1
	int k = 10;
	int*p = &k;//取地址操作符
	*p=20;//解引用操作符
	char d = 'r';
	int arr[10] = { 0 };
	//szieof计算的是变量所占空间的大小，单位是字节
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(d));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));//数组的类型
	short s = 0;
	int a6 = 10;
	printf("%d\n", sizeof(s = a6 + 5));//2
	printf("%d\n", s);//0
	//因为在整形赋值给短整型时，只能存入两个字节，最终
	//还是s的类型长度
	//而因为sizeof函数里的表达式不参与运算，
	//所以最后打印s还是0.
	//~ 按二进制位取反
	int a7 = -1;
	printf("%d\n", ~a7);
	//如果想要将一个数字的二进制储存中的0换成1
	//可以利用左移操作符以及按位或来进行操作
	int a8 = 11;
	//000000000000000000000000000001011
	//000000000000000000000000000000100
	//11的二进制为1011，要更换第三位上的0为1的话，
	//就需要把1进行左移两位，
	a8 = a8 | (1 << 2);
	printf("%d\n", a8);//15
	//而如果要把这个数字返回过去可以用按位异或符或者波浪号
	a8 = a8 ^ (1 << 2);
	/*a8 = a8& (~(1 << 2));*/
	printf("%d\n", a8);
	int a9 = 10;
	//逻辑运算符
	//&& ||
	//&&  两个都为真，结果才是真，
	//||,只要有一个是真，结果就为真
	int o = 0, f = 0, g = 2, h = 3, j = 4;
	o = f++ && ++g && h++;
	printf("f = %d\n g = %d\n h=%d\n j=%d\n",f,g,h,j);
	//逻辑运算符&&在左边是假时，右边不管是什么，都不会再进行运算
	//逻辑运算符||在左边是真时，后面不管是什么，都不会进行运算了
    
	//逗号表达式
	//逗号表达式会从左向右进行计算，而最后一个表达式的结果
	//作为返回值。
	//if（a=b+1.c=a/2,d>0)
	
	//下标引用操作符[]
	int a10[10] = { 0 };
	a10[4] = 10;//[]操作数是数组名以及索引值。
	//函数调用操作符
	int a11 = 10;
	int b11 = 20;
	//调用函数的时候，()就是函数调用操作符
	int max = getmax(a11, b11);
	//操作数就是函数名以及参数。
	printf("max=%d\n", max);
	//表示一个学生
	//使用struct stu这个类型来创建了学生对象s4，并初始化。
	struct stu s1 = {"wang",20,"1206"};
	struct stu* ps = &s1;
	//结构体指针->成员变量
	printf("%s\n", ps->name);//ps是指针，指向name。
	printf("%s\n", (*ps).name);//这两种形式是相同的结果
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	//c的整形算术计算总是至少以缺省整型类型的精度来进行
	//为了获得这个精度，表达式的字符以及短整型操作数
	//在使用前转换为普通整形，这种转换就被称为整型提升
	char r = 3;
	//00000000000000000000000000000011;
	//因为是char类型，在进行存入时要发生整形截断，
	//结果是00000011
	char t = 127;
	//00000000000000000000000001111111；
	//同样的道理
	//结果是01111111；
	char y = r + t;
	//在相加时，要提升为整数类型
	//而提升整数类型时，要在前面加上符号位
	//char类型是有符号的，这两个数据的符号都是0
	//所以就变成了
	//00000000000000000000000000000011和
	//00000000000000000000000001111111相加
	//成为00000000000000000000000010000010；
	//又因为存入的类型同样也是char类型，所以也要进行整数截断
	//结果是10000010；
	printf("%d\n", y);
	//而在打印时，要求也是打印整形，所以需要进行整数提升
	//这里的符号位是1，所以补上之后
	//就是111111111111111111111111110000010；//补码
	//11111111111111111111111110000001；//反码
	//10000000000000000000000001111110-原码
	//换算过来就是-126.
	char e = 1;
	printf("%u\n", sizeof(e));//1
	//+e  这里发生了运算，所以就要整型提升
	printf("%u\n", sizeof(+e));//4
	printf("%u\n", sizeof(!e));//1
	//a*b+c*d+e*f     问题代码
	//虽然*的优先级是要比+的优先级高，
	//但是在计算过程中并不能保证运算顺序的一定
	//可能是a*b，c*d，在计算a*b+c*d，
	//在计算e*f，最后a*b+c*d+e*f
	//也有可能是a*b，c*d，e*f，在进行加和
	//但是这两种状况是不能确定的，虽然在这个表达式中
	//不管哪种运算顺序结果都相同，但是在一些特殊的表达式可能会
	//产生不同的结果，不同的编译器处理的顺序可能不同
	//所以这是个问题代码，不能这么写。
	//c+ --c
	//这里的--优先级是高于+的
	//但是在+操作符的左操作数的获取在右操作数之前还是之后，
	//是不能确定的，有歧义。
	return 0;
}
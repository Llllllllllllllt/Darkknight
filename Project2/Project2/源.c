#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scan_f("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);

	//return 0;
  //}
	//scanf是C语言提供的
	//scanf_s不是标准的c语言提供的，是VS编译器提供的
	//最好不要用scan_f ，这个函数只能使用VS编译器使用，其他不能
	//这是代码就不具有跨平台性/可移植性
	//scanf   strcpy    strlen  strcat   都是不安全的
	//常量，就是不变的量。
//#define max 10
enum Sex
{
	male,//男
	female,//女
	secret//保密
};
int main()
{
	//2. const  常属性   const修饰的常变量  此时num不能更改
	//但它本身还是变量，只是不能更改。
	//const int num = 4;
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	////1. 字面常量
	//
	//3. #define定义的标识符常量
	//int arr[max] = {0};
	//printf("%d\n", max);//此时的max就是被#define定义的常量
	//4.  枚举常量
	//枚举  ---列举
	//性别：男，女，保密 //   星期；1.2.3.4.5.6.7
	//枚举的关键字  enum  
	//male,female,secret   就是定义的枚举常量
	//enum Sex s = female;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	enum Sex s = male;
	
	printf("%d\n", s);
	//数组  就是一组数   
	char arrl[] = "abc";
	//"abc"   就相当于  {'a','b','c','\0'}--'\0'  字符串的结束标志

	const int n = 0;
	int arr[10] = { 0 };
	char arr2[] = { 'a ','b','c ' };
	//没有结束标志的话就会乱码，  出现烫烫烫
	//'a'的值是97    数据在计算机上存储的是二进制形式
	//这些字符怎么存到内存里里面  
	printf("%s\n", arrl);
	printf("%s\n", arr2);//这里会打印出乱码  不是abc
	printf("%d\n", strlen(arrl));
	printf("%d\n", strlen(arr2));
	//int float 
	//char  字符类型
	//字符串类型   "     "
	//"";  ///这是空字符串
	printf("c:\test c \test\n");
	printf("c:\\test c \\test\n");
	//这里的\t是转义字符，代表空格的意思
	//所以想打出c;\test的效果，需要在加一个\
	//就是c:\\test c \\test
	//编辑语言里的\是用来转义字符的
	//而\\可以防止一些字符被转换
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\132');
	//如果是\132   ,\后面加上数字的话意思就是八进制，
	//如果是\x61,\后面x在加上数字的话意思就是十六进制
	//61，换算为十进制是97，打印输出字符，就是a，这里就是一个字符
	//而不是x61三个字符
	/*int input = 0;
	printf("加入比特");
	printf("frurh");
	scanf_s("%d", &input);
	if (input == 1)
		printf("hao");
	else
		printf("0");*/
	int a = 1;
	//移位操作符  <<   左移操作符
	int b = a << 1;
	//整型1占4个字节，一共是32个bit位，
	//当字节向左移时，右侧会自动补零，此时就变成了10，对应2
	//如果移动两位，就是100，对应4
	printf("%d\n", b);
	//（2进制）位操作  
	//&  按位与
	//|  按位或
	//^  按位异或
	int a1 = 3;
	int b1 = 5;
	int c1 = a1 & b1;
	int c2 = a1 | b1;
	int c3 = a1 ^ b1;
	printf("%d\n", c1);
	printf("%d\n", c2);
	printf("%d\n", c3);
	//按位与就是二进制下的真，如果对应二进制数字不同则为零，相同则为1
	//按位或只要二进制里有1，就是1
	//按位异或  对应的二进制位相同，则为零，相异则为1，和按位与相反
	//复合操作符
	//+=，-=，*=，/=，《=，》=，
	//单目操作符
	//双目操作符 （意思就是两个操作数，+就是双目操作符）
	//三目操作符
	//！
	//int s = 2;
	//printf("%d\n", s);
	//printf("%d*/\n", !s);//逻辑反操作，就是将非零的数字变成零，
	//如果本身就是0的话，就会定义为1
	//sizeof  操作数的类型长度
	int a2 = 5;
	printf("%d\n", sizeof a2);
	printf("%d\n", sizeof(a2));
	printf("%d\n", sizeof(int));
	/*printf("%d\n", sizeof int);*///这种操作是不允许的
	int arr5[10] = { 0 };
	printf("%d\n", sizeof(arr5));
	return 0;
}
	




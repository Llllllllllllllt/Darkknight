#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<stdlib.h>
void menu() {
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");
}
void game() {
	//1.生成一个随机数
	int ret = 0;
	
	//时间戳 计算从1970.01.01.0.0.0到现在的秒数。
	//
	//这里拿时间戳来设置随机数的生成起始点
	//srand函数就是用来生成起始的点数。
	//srand（1）产生的数值就是41.
	//srand（时间戳）就会产生此时的起始点，
	//time函数就是返回时间戳的函数，从1970.01.01
	//.0.0.0到现在的一个数字。
	//通过查阅字典得知time的返回值为long类型
	//这里需要强化转换类型为unsigned int类型
	//unsigned就是没有符号的数字

	/*ret = rand();*///生成随机数的函数
	//生成的随机数在0到32767之间。
	ret = rand() % 100 + 1;//生成1-100之间的数字
	//猜数字
	while (1) {
		int guess;
		printf("猜猜数字:");
		scanf("%d", &guess);
		if (guess > ret) {

			printf("大了\n");
		}
		else if (guess < ret) {
			printf("小了\n");
		}
		else {
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	
	
}
int main() {
	//goto语句
	//goto语句适用的场景就是可以跳出嵌套的深层次的循环
	//goto语句可以打乱程序运行的顺序，尽量少用。
	//关机程序（goto语句）
	char putin[20] = { 0 };
	//shutdown -s -t 60  ，就是电脑会在一分钟后关机
	//shutdown -a 取消关机
	//system（）-执行系统命令
	system("shutdown -s -t 60");
	
again:
	printf("请注意你的电脑将会在一分钟内关机");
	scanf("%s", putin);
	if (strcmp(putin, "不要关机") == 0) {
		system("shutdown -a");
	}
	else
	{
		goto again;//goto语句用在了这里，如果用户没有输入
		//不要关机，就会让你重新进行输入
		//也可以用while（1）的循环，当你输入
		//不要关机的时候就break打破循环
	}

	
	srand((unsigned int)time(NULL));//把srand函数
	//放在这里，就可以只调用一次，
	int input = 0;
	do {
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
		}
	} while (input);
	//99乘法表

	int r = 0;
	for (r = 1; r <= 9; r++) {
		int y = 1;
		if (y <= r) {
			for (y = 1; y <= r; y++) {
				int e = r * y;
				printf("%d * %d = %-2d ", r, y, e);	
				//%-2d  是打印两个字节，左对齐
				//%2d，是打印两个字节，右对齐
			}
			printf("\n");//打印一行之后，进行换行
		}

	}
	int h = 1;
	int v = 0;
	int g = 1;
	do {
		h *= g;
		v += h;
		g++;
	} while (g <= 4);
	printf("%d\n", v);
	//编写一个程序，可以一直接受键盘字符，如果是
	//小写字符就输入对应的大写字符，
	//接受的是大写字符，就输出对应的小写字符
	//如果是数字就不输出
	//为了满足可以一直接受键盘字符,我们就不能简单的
	//采用scanf()函数,这是利用C语言标准库中的
	//getchar()函数来实现,此时我们也需要对它进行
	//一个循环由于范围不确定,所以我们最好采用While循环
	char c ;
	int k = 0;
	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			c -= 32;
			putchar(c);
		}
		else if (c >= 'A' && c <= 'Z') {
			c += 32;
			putchar(c);
		}
		else
			break;
	}

	//计算a+aa+aaa+aaaa+aaaaa
	/*int a =0;
	scanf("%d", &a);
	int sum = 0;
	int e = 0;
	int sum1 = 0;
	for (e = 0; e< 5; e++) {
		sum =sum+ pow(10, e) * a;
		sum1 += sum;
	}
	printf("%d\n", sum1);*/
	//水仙花数 ---一个三位数，三位上数字的三次方
	//加和等于其本身。这里就要用到%以及/
	//%就是取余，/是除数。
	/*int i = 100;
	for (i = 100; i <= 999; i++) {
		int m = i /100;
		int k = (i % 100) / 10;
		int l = (i%100) %10;
		if (pow(m, 3) + pow(k,3) + pow(l,3) == i) {
			printf("%d\n", i);
		}
	}
	char arr[] = "**************";
	char arra[] = "              ";
	int left = 7;
	int right = 7;
	while (left != 0) {
		arra[left] = arr[left];
		arra[right] = arr[right];
		left--;
		right++;
		printf("%s\n", arra);
		if (left == 0) {
			break;
		}
	}
	char arrb[] = "**************";
	char arrc[] = "              ";
	int left1 = 0;
	int right1 = strlen(arrb);
	while(left1<right1){
		arrb[left1] = arrc[left1];
		arrb[right1] = arrc[right1];
		left1++;
		right1--;
		printf("%s\n", arrb);
		
		
		
		
	}*/

	//编写程序数一下 1到 100 的所有整数中出现多少个数字9。
	//这里就用到%以及/，%就是数字的余数，可以查找到个位为9
	//的数字，/就是数字的除数，就可以查找到十位为9的数字
	/*int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			printf("%d", i);
			count++;
		}
		if (i / 10 == 9) {
			count++;
			printf("%d", i);
		}
	}
	printf("\n");
	printf("一共有%d个9\n", count);*/
	//计算1/1-1/2+1/3.....-1/100
	//int i = 0;
	//int t = 1;
 //   float  sum = 0.0;//这里定义sum为浮点数，
	//for (i = 1; i <= 100; i++) {
	//	sum += t*(1.0/ i);//要用1.0除以i
	//	//这样出来的结果也为浮点数，如果用1的话
	//	//会转换为整形，准确度会降低。
	//	t = -t;
	//}//还可以用pow函数，需要用到math.h文件
	////pow（-1，i+1）这样就会实现奇数正数，偶数为负数
	//printf("%f\n", sum);//这里打印浮点数要用%f
	//将数组A的内容与数组B的内容进行互换
	/*int arra[6] = { 1,2,3,4,5,6 };
	int arrb[6] = {4,5,6,7,8,9 };
	int i = 0;
	int tmp;
	int sza = sizeof(arra) / sizeof(arra[0]);
	for (i = 0; i< sza; i++) {
		tmp = arra[i];
		arra[i] = arrb[i];
		arrb[i] = tmp;
		printf("%d", arra[i]);
		

	}
	printf("\n");
	for (int i = 0; i < sza; i++) {
		printf("%d", arrb[i]);
	}*/
	return 0;
}

	//int a = 0;
	//;//也是一个语句 ，空语句
	//int age = 10;
	//if (age < 18)//这里面的语句进行判断，如果为真，
	////就会执行下面的语句
	//	printf("未成年\n");
	/*if (18 <= age < 28)
		printf("青年\n");*/
		//这样写条件语句是不对的，因为程序执行时，先执行
		//18<=age 这个语句，而如果为真或假时，就会产生数字1和0
		//这时就会拿1和0与28进行比较，就会小于，所以错误。
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else
	//	printf("老了\n");
	//if (age < 18) {
	//	printf("frg");
	//	printf("frege");
	//} //一个{ }就是一个代码块
	//int i = 1;
	//while (i <= 100) {
	//	if (i % 2 == 1)
	//		printf("%d ", i);
	//	i++;
	//}
	/*int day = 0;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
		printf("xingqiyi\n");
		break;
	case 2:
		printf("xingqi2\n");
		break;
	case 3:
		printf("xingqi3\n");
		break;
	case 4:
		printf("xingqi4\n");
		break;
	case 5:
		printf("xingqi5\n");
		break;
	case 6:
		printf("xingqi6\n");
		break;
	case 7:
		printf("xingqitian\n");
		break;
	default:
		printf("输入错误\n");
	}*/
	//switch  是多分支语句，case是选择分支的入口，而
	//break代表的是出口，如果没有break的话，程序会
	//遍历进入的分支以及以下的分支，知道运行结束，或者break
	//switch 里面的是整形表达式，不能够使用其他类型
	//case后面必须是整型常量表达式，说白了就必须是整数
	//如果输入的值不在case的常量中，可以加上default，
	//当超出范围以及非法，加上default
	//循环中的break执行时会跳出当前所进行的循环。
	//int i1 = 0;
	//while (i1 <= 10)
	//{
	//	i1++;
	//	if (i1 == 5)
	//		continue;
	//	printf("%d\n", i1);
		//continue的作用就是终止当前所在的循环。
	/*}*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF){
	putchar(ch);
}*/
	//getchar就是输入一个字符串，而putchar就是接受并打印
	//这个字符，跟printf意思相同
	//EOF  -end of file 他的值为-1
	//当你想要结束此命令时输入ctrl+z，就相当于end of file
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("请输入密码:>");
	//
	//scanf("%s", password);//scan只会读取空格和回车键
	////前面的字符串.
	////这里输入的密码结束时会有回车键，下面的getchar
	////函数会直接读取到，进而直接执行，打印放弃确认
	////为了保证getchar读取我们用户自己输入的Y或者N
	////要在前面加入getchar的循环以此来消除前面密码
	////输入过程中可能产生的诺干个空格以及后面的回车
	//while ((ch = getchar()) != '\n') {
	//	;
	//}
	//printf("请确认(Y/N):>");
	//ret = getchar();
	//if (ret == 'Y') 
	//{
	//	printf("确认成功\n");
	//}
	//else 
	//{
	//	printf("放弃确认\n");
	//}
	//int ch2 = 0;//创建变量
	//while ((ch2 = getchar()) != EOF)//while语句进行判断
	//{
	//	if (ch2 < '0' || ch2 >'9')
	//		continue;//如果输入的不是0-9，就会跳出当前循环
	//	putchar(ch2);//如果是0-9，就会执行putchar命令
	//}
	//for循环
	/*int i3 = 0;
	for (i3 = 1; i3 <= 10; i3++)*/
		//注意：
			//不要在循环体内进行变量的赋值，容易失控
			//建议for语句的循环变量体采取前闭后开区间
		//for(;;) 
			//for 循环的初始化，调整，判断都可以省略
			//但是for循环的判断部分被省略，判断条件就是恒为正

		//do。while循环
	/*int j = 1;
	do
	{
		printf("%d\n",j);
		j++;
	}
	while (j< 15);
	int n = 0;
	int c = 1;
	int k = 1;
	scanf_s("%d", &n);
	while (k <= n) {
		c *=  k;
		k++;
	}
	printf("%d\n", c);
	int m = 1;
	int f = 1;
	for (m = 1; m <= n; m++) {
		f *= m;
		
	}
	printf("%d\n", f);
	int h = 1;
	int v = 0;
	int g = 1;
	do {
		h *= g;
		v += h;
		g++;
	} while (g <= 4);
	printf("%d\n", v);*/
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////在arr数组（有序的）中找到所需要的数字所在位置
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int s = 0;
	//for (s = 0; s < sz; s++) {
	//	if (k == arr[s])
	//	{
	//		printf("找到了，下标是：%d\n", s);

	//	}
	//}
	//if (s == sz)
	//	printf("没找到");
//二分法查找数据
	//int k = 7;
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;//左下标
	//int right = sz - 1;//右下标
	//
	//while (left < right)
	//{
	//	int mid = (right + left) / 2;
	//	if (arr[mid] < k) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("找到了，下标是：%d\n",mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("找不到\n");
	//}
	////编写代码，演示多个字符从两端移动，向中间汇聚。
	//char arr1[] = "welcome to earth!!!!!";
	//char arr2[] = "#####################";
	//int left1 = 0;
	///*int right = sizeof(arr1) / sizeof(arr[0]) - 1;*///err
	////因为是字符数组，字符数组里面的元素包括里面的字节
	////以及转义字符\0,所以如果使用上面的方法的话，应该
	////减去2；
	//int right1 = strlen(arr1) - 1;
	//while (left1 <= right1)
	//{
	//	arr2[left1] = arr1[left1];
	//	arr2[right1] = arr1[right1];
	//	printf("%s\n", arr2);
	//	//程序运行期间休息一秒
	//	//Sleep(1000);//需要声明windows头文件
	//	//system("cls");//执行系统命令的一个函数，cls清空屏幕
	//	//并且还需要声明stdlib头文件
	//	left1++;
	//	right1--;
	/*}*/
	//int r = 0;
	//char password1[20] = {0};
	//for (r = 0; r < 3; r++) {
	//	printf("请输入密码:");
	//	scanf("%s", password1);
	//	//if (password1 == "123456"),这里不能用==来进行比较
	//	//需要用到字符函数的strcmp，strcmp进行比较
	//	//返回1或者0；
	//	if (strcmp(password1, "123456")==0)
	//	{
	//		printf("登陆成功\n");
	//		break;
	//	}
	//	else
	//		printf("密码错误\n");
	//}
	//if (r == 3) {
	//	printf("三次都错误，退出\n");
	//}
	//int a = 0;//max
	//int b = 0;//mid
	//int c = 0;//min
	//scanf("%d%d%d", &a, &b, &c);
	//if (a < b) {
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c) {
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (c > b) {
	//	int tmp = c;
	//	c = b;
	//	b = tmp;
	//}
	//if (c > a) {
	//	int tmp = c;
	//	c = a;
	//	a = tmp;
	//}	
	//printf("%d%d%d\n", a, b, c);
	//int q = 0;
	//for (q = 0; q <= 100; q++) {
	//	if (q % 3 == 0) {
	//		printf("%d", q);
	//	}
	//}查找100以内3的倍数的数字。
	//int year = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	if (year % 4 == 0 && year % 100 != 0) {
	//		printf("%d", year);

	//	}
	//	else if (year % 400 == 0) {
	//		printf("%d", year);
	//	}
	//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
	//		printf("%d", year);

	//	}
	//这个代码是判断打印出1000年到2000年的闰年
	//}//素数的产生
	//int e = 0;
	//int count = 0;
	//for (e = 100; e <= 200; e++) {
	//	//判断e是否为素数
	//	int p = 0;
	//	for (p = 2; p < e; p++) {
	//		if (e % p == 0) {
	//			break;
	//		}
	//	}
	//	if (p == e) {
	//		count++;
	//		printf("%d", e);

	//	}

	//}
	//素数的另一种写法
	//如果一个数字的开平方以下没有任何一个数字可以进行整除
	//那么这个数字的开平方以上也就没有其他的数字可以整除了
	//那么这时就可以判断为素数了，
	//就可以把上面的p<e,和p==e改为，p<sprt(e),p==sprt(e)
	//sprt - 开平方的数学库函数

	//最大公约数
	/*int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	int x = 0;
	int min = num1 > num2 ? num2 : num1;
	for (x = min; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0) {
			printf("最大的公约数%d\n", x);
			break;
		}
		*/



	
	


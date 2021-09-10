#include<stdio.h>
void bubble_sort(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int flag = 1;//这里定义的变量是来验证是否进行了排序
		//假设数组里的元素已经有序，为1.
		//每一次的冒泡排序 
		int j = 0;
		for (j = 0; j < sz - 1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本次排序的数组并不是完全有序的
			}
		}
		if (flag == 1) {
			break;//如果数组进了了第一次的遍历之后
			//并没有执行if语句，说明是有序的，则直接break
			//从而效率很高。
		}
	}
}
int main() {
	//创建一个数组-存放整形-10个
	//int arr[10];//里面的n应该是常量表达式
	//char arr2[5];
	//float arr3[1];
	//int arr4[10] = { 1,2,3 };
	////不完全初始化，剩下的元素默认初始化为0
	//char arr5[5] = { 'a','b' };
	//char arr6[5] = "ab";
	//char arr7[5] = { 'a',98 };

	////这三个字符数组打印的结果相同
	////当没有定义大小时，必须进行初始化。
	//char arr8[] = "abcde";
	//printf("%d\n", sizeof(arr8));
	////sizeof 是计算arr所占空间的大小    --6
	//printf("%d\n", strlen(arr8));
	////strlen  求字符串的长度    --5

	////1.strlen和sizeof没有什么关联
	////2.strlen是求字符串长度的只能针对字符串求长度-库函数-使用需要引用头文件
	////3.sizeof 计算变量，数组，类型大小-单位是字节-操作符
	//char arr10[] = "abc";
	//char arr11[] = { 'a','b','c' };
	//printf("%d\n", sizeof(arr10));//4
	//printf("%d\n", sizeof(arr11));//3
	//printf("%d\n", strlen(arr10));//3
	//printf("%d\n", strlen(arr11));//15  随机值
	////streln计算字符串的长度要遇到\0才会停止。
	//char arr12[] = "abcdef";
	////一维数组在内存的存储
	//int arr13[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr13) / sizeof(arr13[0]);
	//int i;
	//for (i = 0; i < sz; i++) {
	//	printf("%p\n", &arr13[i]);
	//}
	//int arr14[3][4] = {1,2,3,4,5};
	////这个二位数组一共有三行四列，而第一行一共可存放
	////4个元素，而5就会自动存放在第二行第一列。
	//int arr15[3][4] = { {1,2,3},{4,5} };
	////而这里想要把1，2，3放在第一行，就要使用{}，标志为第一行
	//int arr16[][4] = { {1,2,3},{4,5} };
	////行的下标是可以省略的，而列的下标是不可以省略的
	//int j;
	//int k;
	//for (j = 0; j < 2; j++) {
	//	for (k = 0; k < 4; k++) {
	//		printf("%d\n", arr15[j][k]);
	//	}
	//}
	////二维数组的存储
	//for (j = 0; j < 2; j++) {
	//	for (k = 0; k < 4; k++) {
	//		printf("arr=[%d][%d]%p\n",j,k, &arr15[j][k]);
	//	}
	//}
	//二维数组的存储也是连续的，就像是连续的一维数组


	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//确定冒泡排序的次数
	//对数组进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际上传递过去的
	//是数组的首元素的地址  &arr[0]
	bubble_sort(arr, sz);//冒泡排序函数
	for (i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	//虽然这三个结果都是打印的该数组的第一元素地址
	//但是这里的第三种情况并不是说只是第一元素的地址
	//而是整个数组的位置，只是从这里开始的意思。
	//而第一种和第二种是相同的意思。
	//例如
	printf("%p\n", arr+1);
	printf("%p\n", (&arr[0]+1));
	printf("%p\n", (&arr+1));//这里的arr+1，就是在
	//整个数组的所占地址之后了，而不是第一位元素之后的地址。
    
	return 0;
}

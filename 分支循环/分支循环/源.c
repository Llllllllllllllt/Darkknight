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
	//1.����һ�������
	int ret = 0;
	
	//ʱ��� �����1970.01.01.0.0.0�����ڵ�������
	//
	//������ʱ����������������������ʼ��
	//srand������������������ʼ�ĵ�����
	//srand��1����������ֵ����41.
	//srand��ʱ������ͻ������ʱ����ʼ�㣬
	//time�������Ƿ���ʱ����ĺ�������1970.01.01
	//.0.0.0�����ڵ�һ�����֡�
	//ͨ�������ֵ��֪time�ķ���ֵΪlong����
	//������Ҫǿ��ת������Ϊunsigned int����
	//unsigned����û�з��ŵ�����

	/*ret = rand();*///����������ĺ���
	//���ɵ��������0��32767֮�䡣
	ret = rand() % 100 + 1;//����1-100֮�������
	//������
	while (1) {
		int guess;
		printf("�²�����:");
		scanf("%d", &guess);
		if (guess > ret) {

			printf("����\n");
		}
		else if (guess < ret) {
			printf("С��\n");
		}
		else {
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
	
	
}
int main() {
	//goto���
	//goto������õĳ������ǿ�������Ƕ�׵����ε�ѭ��
	//goto�����Դ��ҳ������е�˳�򣬾������á�
	//�ػ�����goto��䣩
	char putin[20] = { 0 };
	//shutdown -s -t 60  �����ǵ��Ի���һ���Ӻ�ػ�
	//shutdown -a ȡ���ػ�
	//system����-ִ��ϵͳ����
	system("shutdown -s -t 60");
	
again:
	printf("��ע����ĵ��Խ�����һ�����ڹػ�");
	scanf("%s", putin);
	if (strcmp(putin, "��Ҫ�ػ�") == 0) {
		system("shutdown -a");
	}
	else
	{
		goto again;//goto����������������û�û������
		//��Ҫ�ػ����ͻ��������½�������
		//Ҳ������while��1����ѭ������������
		//��Ҫ�ػ���ʱ���break����ѭ��
	}

	
	srand((unsigned int)time(NULL));//��srand����
	//��������Ϳ���ֻ����һ�Σ�
	int input = 0;
	do {
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	} while (input);
	//99�˷���

	int r = 0;
	for (r = 1; r <= 9; r++) {
		int y = 1;
		if (y <= r) {
			for (y = 1; y <= r; y++) {
				int e = r * y;
				printf("%d * %d = %-2d ", r, y, e);	
				//%-2d  �Ǵ�ӡ�����ֽڣ������
				//%2d���Ǵ�ӡ�����ֽڣ��Ҷ���
			}
			printf("\n");//��ӡһ��֮�󣬽��л���
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
	//��дһ�����򣬿���һֱ���ܼ����ַ��������
	//Сд�ַ��������Ӧ�Ĵ�д�ַ���
	//���ܵ��Ǵ�д�ַ����������Ӧ��Сд�ַ�
	//��������־Ͳ����
	//Ϊ���������һֱ���ܼ����ַ�,���ǾͲ��ܼ򵥵�
	//����scanf()����,��������C���Ա�׼���е�
	//getchar()������ʵ��,��ʱ����Ҳ��Ҫ��������
	//һ��ѭ�����ڷ�Χ��ȷ��,����������ò���Whileѭ��
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

	//����a+aa+aaa+aaaa+aaaaa
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
	//ˮ�ɻ��� ---һ����λ������λ�����ֵ����η�
	//�Ӻ͵����䱾�������Ҫ�õ�%�Լ�/
	//%����ȡ�࣬/�ǳ�����
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

	//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
	//������õ�%�Լ�/��%�������ֵ����������Բ��ҵ���λΪ9
	//�����֣�/�������ֵĳ������Ϳ��Բ��ҵ�ʮλΪ9������
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
	printf("һ����%d��9\n", count);*/
	//����1/1-1/2+1/3.....-1/100
	//int i = 0;
	//int t = 1;
 //   float  sum = 0.0;//���ﶨ��sumΪ��������
	//for (i = 1; i <= 100; i++) {
	//	sum += t*(1.0/ i);//Ҫ��1.0����i
	//	//���������Ľ��ҲΪ�������������1�Ļ�
	//	//��ת��Ϊ���Σ�׼ȷ�Ȼή�͡�
	//	t = -t;
	//}//��������pow��������Ҫ�õ�math.h�ļ�
	////pow��-1��i+1�������ͻ�ʵ������������ż��Ϊ����
	//printf("%f\n", sum);//�����ӡ������Ҫ��%f
	//������A������������B�����ݽ��л���
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
	//;//Ҳ��һ����� �������
	//int age = 10;
	//if (age < 18)//��������������жϣ����Ϊ�棬
	////�ͻ�ִ����������
	//	printf("δ����\n");
	/*if (18 <= age < 28)
		printf("����\n");*/
		//����д��������ǲ��Եģ���Ϊ����ִ��ʱ����ִ��
		//18<=age �����䣬�����Ϊ����ʱ���ͻ��������1��0
		//��ʱ�ͻ���1��0��28���бȽϣ��ͻ�С�ڣ����Դ���
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else
	//	printf("����\n");
	//if (age < 18) {
	//	printf("frg");
	//	printf("frege");
	//} //һ��{ }����һ�������
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
		printf("�������\n");
	}*/
	//switch  �Ƕ��֧��䣬case��ѡ���֧����ڣ���
	//break������ǳ��ڣ����û��break�Ļ��������
	//��������ķ�֧�Լ����µķ�֧��֪�����н���������break
	//switch ����������α��ʽ�����ܹ�ʹ����������
	//case������������ͳ������ʽ��˵���˾ͱ���������
	//��������ֵ����case�ĳ����У����Լ���default��
	//��������Χ�Լ��Ƿ�������default
	//ѭ���е�breakִ��ʱ��������ǰ�����е�ѭ����
	//int i1 = 0;
	//while (i1 <= 10)
	//{
	//	i1++;
	//	if (i1 == 5)
	//		continue;
	//	printf("%d\n", i1);
		//continue�����þ�����ֹ��ǰ���ڵ�ѭ����
	/*}*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF){
	putchar(ch);
}*/
	//getchar��������һ���ַ�������putchar���ǽ��ܲ���ӡ
	//����ַ�����printf��˼��ͬ
	//EOF  -end of file ����ֵΪ-1
	//������Ҫ����������ʱ����ctrl+z�����൱��end of file
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("����������:>");
	//
	//scanf("%s", password);//scanֻ���ȡ�ո�ͻس���
	////ǰ����ַ���.
	////����������������ʱ���лس����������getchar
	////������ֱ�Ӷ�ȡ��������ֱ��ִ�У���ӡ����ȷ��
	////Ϊ�˱�֤getchar��ȡ�����û��Լ������Y����N
	////Ҫ��ǰ�����getchar��ѭ���Դ�������ǰ������
	////��������п��ܲ�����ŵ�ɸ��ո��Լ�����Ļس�
	//while ((ch = getchar()) != '\n') {
	//	;
	//}
	//printf("��ȷ��(Y/N):>");
	//ret = getchar();
	//if (ret == 'Y') 
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else 
	//{
	//	printf("����ȷ��\n");
	//}
	//int ch2 = 0;//��������
	//while ((ch2 = getchar()) != EOF)//while�������ж�
	//{
	//	if (ch2 < '0' || ch2 >'9')
	//		continue;//�������Ĳ���0-9���ͻ�������ǰѭ��
	//	putchar(ch2);//�����0-9���ͻ�ִ��putchar����
	//}
	//forѭ��
	/*int i3 = 0;
	for (i3 = 1; i3 <= 10; i3++)*/
		//ע�⣺
			//��Ҫ��ѭ�����ڽ��б����ĸ�ֵ������ʧ��
			//����for����ѭ���������ȡǰ�պ�����
		//for(;;) 
			//for ѭ���ĳ�ʼ�����������ж϶�����ʡ��
			//����forѭ�����жϲ��ֱ�ʡ�ԣ��ж��������Ǻ�Ϊ��

		//do��whileѭ��
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
	////��arr���飨����ģ����ҵ�����Ҫ����������λ��
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int s = 0;
	//for (s = 0; s < sz; s++) {
	//	if (k == arr[s])
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", s);

	//	}
	//}
	//if (s == sz)
	//	printf("û�ҵ�");
//���ַ���������
	//int k = 7;
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;//���±�
	//int right = sz - 1;//���±�
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
	//		printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("�Ҳ���\n");
	//}
	////��д���룬��ʾ����ַ��������ƶ������м��ۡ�
	//char arr1[] = "welcome to earth!!!!!";
	//char arr2[] = "#####################";
	//int left1 = 0;
	///*int right = sizeof(arr1) / sizeof(arr[0]) - 1;*///err
	////��Ϊ���ַ����飬�ַ����������Ԫ�ذ���������ֽ�
	////�Լ�ת���ַ�\0,�������ʹ������ķ����Ļ���Ӧ��
	////��ȥ2��
	//int right1 = strlen(arr1) - 1;
	//while (left1 <= right1)
	//{
	//	arr2[left1] = arr1[left1];
	//	arr2[right1] = arr1[right1];
	//	printf("%s\n", arr2);
	//	//���������ڼ���Ϣһ��
	//	//Sleep(1000);//��Ҫ����windowsͷ�ļ�
	//	//system("cls");//ִ��ϵͳ�����һ��������cls�����Ļ
	//	//���һ���Ҫ����stdlibͷ�ļ�
	//	left1++;
	//	right1--;
	/*}*/
	//int r = 0;
	//char password1[20] = {0};
	//for (r = 0; r < 3; r++) {
	//	printf("����������:");
	//	scanf("%s", password1);
	//	//if (password1 == "123456"),���ﲻ����==�����бȽ�
	//	//��Ҫ�õ��ַ�������strcmp��strcmp���бȽ�
	//	//����1����0��
	//	if (strcmp(password1, "123456")==0)
	//	{
	//		printf("��½�ɹ�\n");
	//		break;
	//	}
	//	else
	//		printf("�������\n");
	//}
	//if (r == 3) {
	//	printf("���ζ������˳�\n");
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
	//}����100����3�ı��������֡�
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
	//����������жϴ�ӡ��1000�굽2000�������
	//}//�����Ĳ���
	//int e = 0;
	//int count = 0;
	//for (e = 100; e <= 200; e++) {
	//	//�ж�e�Ƿ�Ϊ����
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
	//��������һ��д��
	//���һ�����ֵĿ�ƽ������û���κ�һ�����ֿ��Խ�������
	//��ô������ֵĿ�ƽ������Ҳ��û�����������ֿ���������
	//��ô��ʱ�Ϳ����ж�Ϊ�����ˣ�
	//�Ϳ��԰������p<e,��p==e��Ϊ��p<sprt(e),p==sprt(e)
	//sprt - ��ƽ������ѧ�⺯��

	//���Լ��
	/*int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	int x = 0;
	int min = num1 > num2 ? num2 : num1;
	for (x = min; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0) {
			printf("���Ĺ�Լ��%d\n", x);
			break;
		}
		*/



	
	


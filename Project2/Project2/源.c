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
	//scanf��C�����ṩ��
	//scanf_s���Ǳ�׼��c�����ṩ�ģ���VS�������ṩ��
	//��ò�Ҫ��scan_f ���������ֻ��ʹ��VS������ʹ�ã���������
	//���Ǵ���Ͳ����п�ƽ̨��/����ֲ��
	//scanf   strcpy    strlen  strcat   ���ǲ���ȫ��
	//���������ǲ��������
//#define max 10
enum Sex
{
	male,//��
	female,//Ů
	secret//����
};
int main()
{
	//2. const  ������   const���εĳ�����  ��ʱnum���ܸ���
	//���������Ǳ�����ֻ�ǲ��ܸ��ġ�
	//const int num = 4;
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	////1. ���泣��
	//
	//3. #define����ı�ʶ������
	//int arr[max] = {0};
	//printf("%d\n", max);//��ʱ��max���Ǳ�#define����ĳ���
	//4.  ö�ٳ���
	//ö��  ---�о�
	//�Ա��У�Ů������ //   ���ڣ�1.2.3.4.5.6.7
	//ö�ٵĹؼ���  enum  
	//male,female,secret   ���Ƕ����ö�ٳ���
	//enum Sex s = female;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	enum Sex s = male;
	
	printf("%d\n", s);
	//����  ����һ����   
	char arrl[] = "abc";
	//"abc"   ���൱��  {'a','b','c','\0'}--'\0'  �ַ����Ľ�����־

	const int n = 0;
	int arr[10] = { 0 };
	char arr2[] = { 'a ','b','c ' };
	//û�н�����־�Ļ��ͻ����룬  ����������
	//'a'��ֵ��97    �����ڼ�����ϴ洢���Ƕ�������ʽ
	//��Щ�ַ���ô�浽�ڴ�������  
	printf("%s\n", arrl);
	printf("%s\n", arr2);//������ӡ������  ����abc
	printf("%d\n", strlen(arrl));
	printf("%d\n", strlen(arr2));
	//int float 
	//char  �ַ�����
	//�ַ�������   "     "
	//"";  ///���ǿ��ַ���
	printf("c:\test c \test\n");
	printf("c:\\test c \\test\n");
	//�����\t��ת���ַ�������ո����˼
	//��������c;\test��Ч������Ҫ�ڼ�һ��\
	//����c:\\test c \\test
	//�༭�������\������ת���ַ���
	//��\\���Է�ֹһЩ�ַ���ת��
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\132');
	//�����\132   ,\����������ֵĻ���˼���ǰ˽��ƣ�
	//�����\x61,\����x�ڼ������ֵĻ���˼����ʮ������
	//61������Ϊʮ������97����ӡ����ַ�������a���������һ���ַ�
	//������x61�����ַ�
	/*int input = 0;
	printf("�������");
	printf("frurh");
	scanf_s("%d", &input);
	if (input == 1)
		printf("hao");
	else
		printf("0");*/
	int a = 1;
	//��λ������  <<   ���Ʋ�����
	int b = a << 1;
	//����1ռ4���ֽڣ�һ����32��bitλ��
	//���ֽ�������ʱ���Ҳ���Զ����㣬��ʱ�ͱ����10����Ӧ2
	//����ƶ���λ������100����Ӧ4
	printf("%d\n", b);
	//��2���ƣ�λ����  
	//&  ��λ��
	//|  ��λ��
	//^  ��λ���
	int a1 = 3;
	int b1 = 5;
	int c1 = a1 & b1;
	int c2 = a1 | b1;
	int c3 = a1 ^ b1;
	printf("%d\n", c1);
	printf("%d\n", c2);
	printf("%d\n", c3);
	//��λ����Ƕ������µ��棬�����Ӧ���������ֲ�ͬ��Ϊ�㣬��ͬ��Ϊ1
	//��λ��ֻҪ����������1������1
	//��λ���  ��Ӧ�Ķ�����λ��ͬ����Ϊ�㣬������Ϊ1���Ͱ�λ���෴
	//���ϲ�����
	//+=��-=��*=��/=����=����=��
	//��Ŀ������
	//˫Ŀ������ ����˼����������������+����˫Ŀ��������
	//��Ŀ������
	//��
	//int s = 2;
	//printf("%d\n", s);
	//printf("%d*/\n", !s);//�߼������������ǽ���������ֱ���㣬
	//����������0�Ļ����ͻᶨ��Ϊ1
	//sizeof  �����������ͳ���
	int a2 = 5;
	printf("%d\n", sizeof a2);
	printf("%d\n", sizeof(a2));
	printf("%d\n", sizeof(int));
	/*printf("%d\n", sizeof int);*///���ֲ����ǲ������
	int arr5[10] = { 0 };
	printf("%d\n", sizeof(arr5));
	return 0;
}
	




#include<stdio.h>
//int num2 = 20;//ȫ�ֱ���  �����ڴ����{}������֮��ı���
//�ֲ�������ȫ�ֱ������鲻Ҫ������ͬ������������bug
//���ֲ�������ȫ�ֱ���������ͬʱ�����Ⱦֲ�����
int main()
{
	//�ֲ���������������   ����������ʼ�������������
	//ȫ�ֱ���������������main�������������ڣ�Ҳ���������������������
	//�ֲ������������� ��������������ķ�Χ
	//ȫ�ֱ�������������������
	//������һ����Ŀ�����ȫ�ֱ�����Ҫ�������Ŀ����ʹ����Ҫ��������
	//����ͻ���ʾδ�����ı�ʶ��
	//extern int gloval;   // extern  �������÷���
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);//��������, ʹ�����뺯��scanf_s
	//int sum = 0; //  ���д������Ļ�c++�ǿ��Եģ�����C�������﷨�涨
	//����c�����﷨�涨������Ҫ�����ڴ�������ǰ��
	int sum = 0;
	sum = num1 + num2;

	printf("sum = %d\n", sum);
	//����
	//20
	//short age = 20;//���ڴ�����2���ֽ� 16bitλ
	char ch = 'A';
	int num = 10;//�ֲ�����
	printf("hello\n");
	int age = 20;
	printf("%d\n", age);
	printf("%c\n",ch);
	printf("%d\n", sizeof(char));//1���ֽ�
	printf("%d\n", sizeof(short));//���ֽ�
	printf("%d\n", sizeof(int));//4���ֽ�
	printf("%d\n", sizeof(long));//4���ֽ�
	printf("%d\n", sizeof(long long));//8���ֽ�
	printf("%d\n", sizeof(float));//4���ֽ�
	printf("%d\n", sizeof(double));//8���ֽ�
	return 0;
}

#include <stdio.h>

struct Book {
	char name[20];
	short price;
};//������һ���ṹ������
int main() {
	struct Book b1 = { "c���Գ������",55 };
	strcpy(b1.name, "c++");
	//strcpy - string copy - �ַ������� - �⺯��
	//strcopy���ǽ��µ��ַ��������������У�
	//ע�������name�����飬 
	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	struct Book* pb = &b1;
	//����pb��ӡ�����ͼ۸�
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//.������    �������ǽṹ��������ҵ���Ա
	//-> �������� �ṹ��ָ��->��Ա
	//��һ��д��
	printf("%s\n", pb->name);//ָ��ָ������
	
	return 0;

}
//int main() {
//
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ��p�����;���int*)
//	//��һ�ֱ���������ŵ�ַ��---ָ�����
//	*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	printf("%p\n", &a);
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));
//	//��32λƽ̨����4���ֽڣ���64λƽ̨����8���ֽڣ�
//	//��Ϊָ����ڴ��޷Ǿ��Ƕ����Ƶ����ݣ�
//	//�������32λƽ̨�ϣ�ֻ��Ҫ32������λ�Ϳ����漰�����е�
//	//��ֵַ�����Ծ���4���ֽڣ�64λƽ̨һͬ��
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);//��ӡ˫��������lf
//	return 0;
//}

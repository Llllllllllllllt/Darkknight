#include<stdio.h>
typedef struct stu {
	//��Ա����
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
	//����ѧ����һЩ����
	//���䣬�Ա�����
	//struct  �ṹ��ؼ���    struct stu  -�ṹ������
	//��Ա����
	//char name[20];
	//char gender[male]
	stu s = { "����",40,"1515555555","��" };
	printl(s);//����һ�õ���ʵ�εĴ���
	print2(&s);//�������õ��ǵ�ַ�Ĵ���
	//����������һЩ����Ϊ����һ�ڴ��͵�ʱ���������һ���ṹ��
	//�ռ䣬�����������ܶ��Ľṹ�壬���ݵĶ��ǵ�ַ����4��8
	//���ֽڣ����ṹ�����ʱ������һ��ϵͳ�����������½���
	return 0;
}
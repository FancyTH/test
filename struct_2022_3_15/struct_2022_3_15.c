#include<stdio.h>


//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[20];
//}s1,s2;//s1,s2��ȫ�ֱ���������


//�ṹ���Ա�������������飬������ָ�룬�Լ������ṹ�����
typedef struct Stu
{
	char name[20];
	short age;
	char sex[5];
	char tele[20];
}Stu;//���ڽṹ������ΪStu

struct T
{
	char teachername[5];
	 Stu s;
	char* pc;
};


void print1(struct T tmp)
{
	printf("%s\n", tmp.s.name);
	printf("%s\n", tmp.teachername);
}

void print2(struct T *tmp)
{
	printf("%s\n", tmp->s.name);
	printf("%s\n", tmp->teachername);
}

int main() {
	char arr[] = { "hello" };
	//struct Stu s3 = {"Fancy",21,"��","18140000000"};//�ֲ�����
	Stu s4 = { "Souris",20,"Ů","����" };
	struct T t = { "�ƽ�",{"Souris",20,"Ů","����"},arr };
	print1(t);
	printf("\n");
	printf("\n");
	print2(&t);
	printf("\n");
	printf("\n");
	printf("%s\n", t.s.tele);
	printf("%s\n", t.teachername);
	printf("%s\n", t.pc);
	printf("%d\n", t.s.age);


	return 0;
}
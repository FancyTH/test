#include<stdio.h>


//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[20];
//}s1,s2;//s1,s2是全局变量，少用


//结构体成员变量可以是数组，变量，指针，以及其他结构体变量
typedef struct Stu
{
	char name[20];
	short age;
	char sex[5];
	char tele[20];
}Stu;//定于结构体类型为Stu

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
	//struct Stu s3 = {"Fancy",21,"男","18140000000"};//局部变量
	Stu s4 = { "Souris",20,"女","保密" };
	struct T t = { "黄江",{"Souris",20,"女","保密"},arr };
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
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

struct Book {
	char name[20];
	short price;
};

int main() {

	int day = 0;
	int num = 0;
	int a = 100;
	int* p = &a;
	printf("%d\n", *p);
	*p = 20;
	printf("%d\n", *p);
	struct Book book1 = { "C���Գ������",55 };
	struct Book* pb = &book1;
	printf("������%s\n�۸�%d\n", (*pb).name,(*pb).price); 
	printf("������%s\n�۸�%d\n", pb->name, pb->price);
	printf("������%s\n�۸�%d\n", book1.name, book1.price);
	strcpy(book1.name,"C++");//�ַ���������C++���Ƶ�book1.name����Ϊname�����飬����ֱ��book1.name=C++������ֵ  ͷ�ļ�String.h
	book1.price = 100;
	printf("������%s\n�۸�%d\n", book1.name, book1.price);
	//ָ��ṹ�峣���÷�   ->
	//�ṹ����������÷�   .


	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("����һ��ż��\n");
	}
	else
	{
		printf("����һ������\n");
	}
	for (int i = 0; i <= 100; i++) {
		if (0 != i % 2) {
			printf("%d\n", i);
		}
	}


	scanf("%d", &day);
	switch (day)//�������������ͱ��ʽ
	{
	case 1://case����Ҳ�����ͳ������ʽ
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("���ִ���7����С��7");
		break;
	}

	switch (day)//�������������ͱ��ʽ
	{
	case 1://case����Ҳ�����ͳ������ʽ
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("���ִ���7����С��7");
		break;
	}



}
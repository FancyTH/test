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
	struct Book book1 = { "C语言程序设计",55 };
	struct Book* pb = &book1;
	printf("书名：%s\n价格：%d\n", (*pb).name,(*pb).price); 
	printf("书名：%s\n价格：%d\n", pb->name, pb->price);
	printf("书名：%s\n价格：%d\n", book1.name, book1.price);
	strcpy(book1.name,"C++");//字符串拷贝把C++复制到book1.name，因为name是数组，不能直接book1.name=C++这样赋值  头文件String.h
	book1.price = 100;
	printf("书名：%s\n价格：%d\n", book1.name, book1.price);
	//指针结构体常用用法   ->
	//结构体变量常用用法   .


	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("这是一个偶数\n");
	}
	else
	{
		printf("这是一个奇数\n");
	}
	for (int i = 0; i <= 100; i++) {
		if (0 != i % 2) {
			printf("%d\n", i);
		}
	}


	scanf("%d", &day);
	switch (day)//括号里面是整型表达式
	{
	case 1://case后面也是整型常量表达式
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期七\n");
		break;
	default:
		printf("数字大于7或者小于7");
		break;
	}

	switch (day)//括号里面是整型表达式
	{
	case 1://case后面也是整型常量表达式
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("数字大于7或者小于7");
		break;
	}



}
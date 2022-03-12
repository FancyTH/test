#include<stdio.h>
#include"Print.h"
#include"my_strlen.h"



//void Print(int num)
//{
//	if (num > 9)
//	{
//		Print(num / 10);
//	}
//	printf("%d ", num % 10);
//}

int main() {
	extern count;
	int res = 0;
	int fib = 0;
	int n = 0;
	int ref = 0;
	int num = 0;
	int len = 0;
	char arr[] = { "fancy" };
	scanf_s("%d", &num);
	Print(num);
	printf("\n");
	printf("\n");
	printf("\n");

	len = my_strlen(arr);
	printf("字符个数为：%d\n", len);


	scanf_s("%d", &n);
	ref = Facl(n);
	printf("%d的阶乘为%d\n", n, ref);

	printf("\n");
	printf("\n");
	printf("\n");

	scanf_s("%d", &n);
	res = Fibo(n);
	printf("第%d个斐波那契数列是%d\n", n, res);
	//printf("count=%d\n", count);//测试第n个斐波那契数列运算次数

	scanf_s("%d", &n);
	res = Fibo2(n);
	printf("第%d个斐波那契数列是%d\n", n, res);

	return 0;
}
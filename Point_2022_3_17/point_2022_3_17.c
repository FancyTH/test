#include<stdio.h>


//int main() {
//	char* p = "abcde";//字符常量不能修改
//	char*p1= "abcde";
//	char* p2 = "abcde";//因为是字符常量，所以不会占用两个空间，是同一个p1与p2
//	*p = 'W';//这样不能改变，代码会崩溃
//	printf("%s\n", p);
//}

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	
//}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10]=&arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*p + i));//*p==arr
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}
}




void print1(int arr[3][4], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}


void print2(int(*arr)[4], int x, int y)
{
	int i = 0;
	int j = 0;
	for(i=0;i<x;i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(arr+i))[j]);
			printf("%d ", *(*(arr + i) + j));
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}


//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int Mul(int a, int b)
//{
//	return a * b;
//}
//
//int Div(int a, int b)
//{
//	return a / b;
//}

//int main() {
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//
//	int a = 20;
//	int b = 10;
//	int i = 0;
//	printf("%d\n", Add(a, b));
//	int (*pa)(int, int) = Add;//函数指针
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组，可以用来存放参数和返回值相同的函数
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	printf("\n");
//	printf("%d\n", (*pa)(a, b));
//	/*printf("%P\n", Add);
//	printf("%P\n", &Add);//&函数名和函数名都是函数的地址*/
//
//	print1(arr, 3, 4);
//	print2(arr, 3, 4);
//}





char* my_strcpy(char* dest, const char* src);
//写一个函数指针pf，能够指向my_strcpy
char* (*pf)(char*, const char*);
//写一个指针数组pfArr，能够存放四个my_strcpy函数的地址
char* (*pfArr[4])(char*, const char*);



int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}
int Xor(int x, int y)
{
	return x ^ y;
}

void menu() {
	printf("*******************\n");
	printf("** 1.Add   2.Sub **\n");
	printf("** 3.Mul   4.Div **\n");
	printf("** 0.Exit  5.Xor **\n");
	printf("*******************\n");
}
//计算器
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr 是一个函数指针数组——转移表
//	int(*pfArr[])(int,int) = { 0,Add,Sub,Mul,Div,Xor };//函数指针数组
//	int (*(*ppfArr)[])(int, int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针int(* )(int,int)
//	int ref = 0;
//	do
//	{
//		menu();
//		printf("请选择执行操作：");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数\n");
//			scanf_s("%d%d", &x, &y);
//			ref=pfArr[input](x, y);
//			printf("%d\n", ref);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("请选择正确的值\n");
//		}
//
//
//	} while (input);
//}
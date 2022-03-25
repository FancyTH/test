#define _CRT_SECURE_NO_WARNINGS 1//不加这个scanf要报错，或者可以在newC++file.cpp加上一劳永逸
#include<stdio.h>
int main() {
	extern int a;//extern外部符号声明
	int num1 = 4;
	int num2 = 2;
	int arr[] = {1,2,3,4,5,1,2,3,7,5,4};
	//找出不是成对的数字
	int i = 0;
	//使用sizeof计算出数组总长度，除sizeof类型长度计算出数组的下标
	int len = sizeof(arr) / sizeof(int);
	int test = 0;
	//变量交换数字,使用减法交换变量
	int a = 5;
	int b = 8;
	a = a + b;
	b = a - b;
	a = a - b;
	//使用异或交换数字，不用第三个变量
	printf("num1=%d,num2=%d\n", num1, num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("num1=%d,num2=%d\n", num1, num2);
	for (i = 0; i < len; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 0; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("不是成对的数字是%d\n", arr[i]);
			break;
		}
	}
	for (i = 0; i < len; i++)
	{
		test = test ^ arr[i];
	}
	printf("不是成对的数字是%d\n", test);
	printf("%d\n",sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(float));
	scanf("%d", &a);
	printf("%d\n",a);

	
}
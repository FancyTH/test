#include<stdio.h>



int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end!='\0')
	{
		end++;
	}
	return end - start;
}

int count_bit_one(int n)//计算一个数二进制里面有多少个1，较好算法。还可以与1&运算
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}


int main() {
	//int a = 0x11223344;
	//int* pa = &a;
	//char* pb= &a;
	//printf("%p\n", pa);//输出指针用%p
	//printf("%p\n", pa+1);
	//printf("%p\n", pb);
	//printf("%p\n", pb+1);//指针类型决定了指针一步走多远,能操作多少字节

	//int arr[10] = { 0 };
	//int a = 20;
	//int* pa = &a;
	//pa = NULL;
	//*pa = 20;
	//int*p = arr;
	//char* pc = arr;
	////for (int i = 0; i < 10; i++)
	////{
	////	*(p + i) = 1;
	////}
	//for (int i = 0; i < 10; i++)
	//{
	//	*(pc + i) = 2;
	//}



	char arr[] = { "bit" };
	int len = my_strlen(arr);
	printf("%d\n", len);
	int values[5] = { 0 };
	int* vp = &values;
	for (vp = &values[5]; vp > &values[0];)//一般使用这种，下面那种不敢保证所有编译器可行，因为数组允许指针指向的那个元素和数组最后一个元素的后面一个作比较，不允许和第一个元素之前那一个作比较
	{
		*--vp=0;
	}
	for (vp = &values[4]; vp >= &values[0];vp--)
	{
		* vp=0;
	}

	printf("%p\n", values);
	printf("%p\n", values+1);//首元素地址加一
	printf("%p\n", &values[0]);
	printf("%p\n", &values[0]+1);//首元素地址加一
	printf("%p\n", &values);
	printf("%p\n", &values+1);//整个数组地址加一
	return 0;
}
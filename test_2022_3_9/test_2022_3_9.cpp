#include<stdio.h>
#include<math.h>
#include<string.h>
//求素数
int main() {
	//int i = 100;
	//int j = 0;

	//方法一
	//for ( i = 100; i <= 200; i++)
	//{
	//	for ( j = 2; j <= i-1; j++)
	//	{
	//		if (i % j == 0)
	//			break;
	//	}
	//	if(i==j)
	//	{
	//		printf("%d ", i);
	//	}
	//}

	//方法二
	//	for ( i = 100; i <= 200; i++)//for ( i = 101; i <= 200; i+=2)效率提升一倍
	//{
	//	for ( j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0)
	//			break;
	//	}
	//	if(j>=sqrt(i))
	//	{
	//		printf("%d ", i);
	//	}
	//}




	//int i = 0;
	//int count = 0;
	//for (i = 0; i <= 100; i++)
	//{
	//	if (i % 10 == 9)
	//	{
	//		count++;
	//	}
	//	if (i / 10 == 9)
	//	{
	//		count++;
	//	}
	//}
	//printf("%d", count);



	//int i = 0;
	//float sum = 0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{	
	//	sum += flag*1.0 / i;
	//	flag=-flag;
	//}
	//printf("%f", sum);



	//int arr[] = { 1,2,6,43,3,8,5,657,343,345 };
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int i = 0;
	//int max=arr[0];
	//for (i = 0; i < sz; i++) 
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//	
	//}
	//printf("%d", max);


	//int arr[] = { -1,-2,-6,-43,-3,8,-5,-657,-343,-345 };//max最好赋值为数组里面的一个数
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//int max = arr[0];
	//for (i = 0; i < sz; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}

	//}
	//printf("%d", max);


	int i = 1;
	int j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}
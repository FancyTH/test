//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left=0;//左下标
//	int right = sz - 1;//右下标
//	
//	int sum2 = 1;
//	int sum4 = 0;
//	
//	
//	int n = 0;
//	int res = 0;
//	int sum = 1;
//
//
//	int sum3 = 1;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d的阶乘为%d\n", n, sum);
//
//
//
//
//
//	for (int i = 1; i <= 10; i++)
//	{
//		sum2=sum2 * i;
//		sum4 += sum2;
//	}
//	printf("10的各阶乘和为%d\n", sum4);
//
//
//
//
//	for (n = 1; n <=10; n++)
//	{
//		for (int i = n; i <= n; i++)
//		{
//			sum3 *= i;
//		}
//		res += sum3;
//	}
//
//	printf("10的各阶乘和为%d\n", res);
//
//
//
//	return 0;
//}
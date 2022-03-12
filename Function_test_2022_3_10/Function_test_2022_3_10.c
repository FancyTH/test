#include<stdio.h>
#include<math.h>
#include<string.h>
#include"Add.h"


int is_prime(int n)
{
	int k = 0;
	for (k = 2; k <=n; k++)
	{
		if (n % k == 0)
		{
			break;//return 0;
		}

	}
	return 1;

}
						/*int is_prime(int n)
						{
							int k = 0;
							for (k = 2; k <=sqrt(n); k++)
							{
								if (n % k == 0)
								{
									return 0;
								}

							}
							return 1;
		
						}*/


int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		//printf("%d ", year);
		return 1;
	}
	
}


int binary_search(int k, int arr[],int sz)
{
	//因为传数组传过来是一个首地址指针，只有4字节，不能在函数里这样求数组长度int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;

	while (left<=right)
	{	
		int mid = (left + right) / 2;//中间元素下标，不能放在循环外面，在外面的话它永远不会变化，会死循环
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if(arr[mid]<k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
			break;
		}
	}
	return -1;

}


//int Add(int, int);//若函数在main后面写，这要定义
int main() {
	//int i = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	if (is_prime(i) == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}


	//int year = 1000;
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	//is_leap_year(year);
	//	if (is_leap_year(year) == 1)
	//	{
	//		count++;
	//		printf("%d ", year);
	//	}
	//}
	//printf("\n");
	//printf("count=%d\n", count);


	//二分查找
	//在一个数组中查询某数的下标
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 6;
	//int size = sizeof(arr)/sizeof(arr[0]);
	//int ref = binary_search(k, arr,size);
	//if (ref==-1)
	//{
	//	printf("找不到数字");

	//	}
	//else
	//{
	//	printf("找到了下标是：%d", ref);
	//}
	

	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	printf("%d", printf("%d", printf("%d", 43)));//打印4321，printf返回值是字符个数，先打印43,然后字符个数2，然后字符个数1，从里向外


}
//int Add(int *num)
//{
//	 (*num)++;//因为++的优先级大于*，所以把*p括起来
//}

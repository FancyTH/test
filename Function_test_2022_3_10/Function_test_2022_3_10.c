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
	//��Ϊ�����鴫������һ���׵�ַָ�룬ֻ��4�ֽڣ������ں��������������鳤��int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;

	while (left<=right)
	{	
		int mid = (left + right) / 2;//�м�Ԫ���±꣬���ܷ���ѭ�����棬������Ļ�����Զ����仯������ѭ��
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


//int Add(int, int);//��������main����д����Ҫ����
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


	//���ֲ���
	//��һ�������в�ѯĳ�����±�
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 6;
	//int size = sizeof(arr)/sizeof(arr[0]);
	//int ref = binary_search(k, arr,size);
	//if (ref==-1)
	//{
	//	printf("�Ҳ�������");

	//	}
	//else
	//{
	//	printf("�ҵ����±��ǣ�%d", ref);
	//}
	

	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	printf("%d", printf("%d", printf("%d", 43)));//��ӡ4321��printf����ֵ���ַ��������ȴ�ӡ43,Ȼ���ַ�����2��Ȼ���ַ�����1����������


}
//int Add(int *num)
//{
//	 (*num)++;//��Ϊ++�����ȼ�����*�����԰�*p������
//}

#define _CRT_SECURE_NO_WARNINGS 1//�������scanfҪ�������߿�����newC++file.cpp����һ������
#include<stdio.h>
int main() {
	extern int a;//extern�ⲿ��������
	int num1 = 4;
	int num2 = 2;
	int arr[] = {1,2,3,4,5,1,2,3,7,5,4};
	//�ҳ����ǳɶԵ�����
	int i = 0;
	//ʹ��sizeof����������ܳ��ȣ���sizeof���ͳ��ȼ����������±�
	int len = sizeof(arr) / sizeof(int);
	int test = 0;
	//������������,ʹ�ü�����������
	int a = 5;
	int b = 8;
	a = a + b;
	b = a - b;
	a = a - b;
	//ʹ����򽻻����֣����õ���������
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
			printf("���ǳɶԵ�������%d\n", arr[i]);
			break;
		}
	}
	for (i = 0; i < len; i++)
	{
		test = test ^ arr[i];
	}
	printf("���ǳɶԵ�������%d\n", test);
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
#include<stdio.h>
void Print(int num)
{
	if (num > 9)
	{
		Print(num / 10);//�ݹ��������������
	}
	printf("%d ", num % 10);
}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//		{
//		count++;
//		str++;
//		}
//	return count;
//}

//�ݹ鷽��
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}



int Facl(int n)
{
	if (n > 1)
	{
		return n * Facl(n - 1);
	}
	else
	{
		return 1;
	}
}

int count = 0;
int Fibo(int n)//�ݹ��㷨������ֵ��������ʱ���
{	

	if (n >= 3)
	{
		count++;
	}
	if (n <= 2)
	{
		return 1 ;
	}
	else if (n > 2)
	{
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

int Fibo2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
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

int count_bit_one(int n)//����һ���������������ж��ٸ�1���Ϻ��㷨����������1&����
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
	//printf("%p\n", pa);//���ָ����%p
	//printf("%p\n", pa+1);
	//printf("%p\n", pb);
	//printf("%p\n", pb+1);//ָ�����;�����ָ��һ���߶�Զ,�ܲ��������ֽ�

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
	for (vp = &values[5]; vp > &values[0];)//һ��ʹ�����֣��������ֲ��ұ�֤���б��������У���Ϊ��������ָ��ָ����Ǹ�Ԫ�غ��������һ��Ԫ�صĺ���һ�����Ƚϣ�������͵�һ��Ԫ��֮ǰ��һ�����Ƚ�
	{
		*--vp=0;
	}
	for (vp = &values[4]; vp >= &values[0];vp--)
	{
		* vp=0;
	}

	printf("%p\n", values);
	printf("%p\n", values+1);//��Ԫ�ص�ַ��һ
	printf("%p\n", &values[0]);
	printf("%p\n", &values[0]+1);//��Ԫ�ص�ַ��һ
	printf("%p\n", &values);
	printf("%p\n", &values+1);//���������ַ��һ
	return 0;
}
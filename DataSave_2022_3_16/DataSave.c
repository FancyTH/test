#include<stdio.h>
#include<string.h>

int check_sys()
{
	int a = 1;
	return *(char*)&a;//����a��ַ��һ���ֽ����ݣ���ָ������������a�ĵ�ַ���������д�����������٣�
}

int main() {
	int a = 20;
	int b = -20;	
	char arr[1000];
	int i = 0;
	int ret = check_sys();
	float num = 5.5;

	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}


	for ( i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
	}
	printf("%d\n", strlen(arr));



	return 0;
}
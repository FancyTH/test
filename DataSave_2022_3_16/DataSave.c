#include<stdio.h>
#include<string.h>

int check_sys()
{
	int a = 1;
	return *(char*)&a;//返回a地址第一个字节内容，用指针解引用来存放a的地址，这是最简单写法（代码最少）
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
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}


	for ( i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
	}
	printf("%d\n", strlen(arr));



	return 0;
}
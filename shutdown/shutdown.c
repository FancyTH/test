#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在60s后关机，输入我是猪取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	//也可以用while实现循环
}

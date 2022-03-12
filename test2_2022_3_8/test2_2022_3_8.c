#include<stdio.h>
int main() {
	int i = 0;
	int j = 0;
	int ch = 0;
	char password[20] = { 0 };
	char ret = 0;
	//putchar(ch);
	//printf("%c\n", ch);
	//ctrl+Z可以退出
	//EOF end of file  ->  -1
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	

	printf("请输入密码\n");
	scanf_s("%c", password);
	printf("确认密码无误输入Y/N：");

	while (getchar() != '\n')//因为scanf输入后按下回车或者空格，字符缓存器会有字符，用getchar提取哪些不用的字符，后面的getchar才能正常输入
	{
		;
	}

	ret = getchar();
	if ('Y' == ret) 
	{
		printf("确认成功");
	}
	else 
	{
		printf("确认失败");
	}



	//只打印10次，j在外面定义的，所以循环完一次之后在循环里面值为10，条件就不成立，就结束循环
	for (; i < 10; i++) {
		for (; j < 10; j++) {
			printf("haha\n");
		}
	}

	for (i = 0, j = 0; j = 0; j++) {//循环0次
		printf("hehe");
	}




	//for (;;) {//三个部分都可以省略，但判断部分省略就会恒为真
	//	printf("hehe");
	//}






	return 0;
}
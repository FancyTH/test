#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("*************************************\n");
	printf("*****      1.play   0.exit      *****\n");
	printf("*************************************\n");
}

void game()
{
	//生成随机数
	int ref = 0;
	int guess = 0;
	ref=rand()%100+1;//生成1+100之间的随机数，前面必须有srand才能正确生成随机数

	//printf("%d\n", ref);
	//猜数字
	while (1)
	{
		printf("请猜数字：");
		scanf_s("%d", &guess);
		if (guess > ref)
		{
			printf("你猜大了\n");
		}
		else if (guess < ref)
		{
			printf("你猜小了\n");
		}
		else
		{
			printf("你猜对了\n");
			break;
		}
	}
}



int main() {
	int input=0;
	srand((unsigned int)time(NULL));//时间戳来设置随机数生成点   time_t time(time)(time_t *time)
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏函数
			break;
		case 0://退出游戏
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);








	return 0;
}
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
	//���������
	int ref = 0;
	int guess = 0;
	ref=rand()%100+1;//����1+100֮����������ǰ�������srand������ȷ���������

	//printf("%d\n", ref);
	//������
	while (1)
	{
		printf("������֣�");
		scanf_s("%d", &guess);
		if (guess > ref)
		{
			printf("��´���\n");
		}
		else if (guess < ref)
		{
			printf("���С��\n");
		}
		else
		{
			printf("��¶���\n");
			break;
		}
	}
}



int main() {
	int input=0;
	srand((unsigned int)time(NULL));//ʱ�����������������ɵ�   time_t time(time)(time_t *time)
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ����
			break;
		case 0://�˳���Ϸ
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);








	return 0;
}
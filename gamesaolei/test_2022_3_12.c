#include"game.h"

void menu()
{
	printf("****************************************\n");
	printf("*****     1 .play        0. exit    ****\n");
	printf("****************************************\n");
}


void game() 
{
	//�׵���Ϣ
	//1.���ú��۵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(show, ROWS, COLS,'*');
	InitBoard(mine, ROWS, COLS,'0');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show, ROW, COL);



}
	


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
	printf("��ѡ��");
	scanf_s("%d", &input);
	switch (input)
	{
	case 0:
		printf("�˳���Ϸ\n");
		break;
	case 1:
		printf("������Ϸ\n");
		game();
		break;
	default:
		printf("ѡ���������ѡ��\n");
		break;
	}
	} while (input);

}





int main() {
	test();
	return 0;
}
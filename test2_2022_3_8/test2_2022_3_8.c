#include<stdio.h>
int main() {
	int i = 0;
	int j = 0;
	int ch = 0;
	char password[20] = { 0 };
	char ret = 0;
	//putchar(ch);
	//printf("%c\n", ch);
	//ctrl+Z�����˳�
	//EOF end of file  ->  -1
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	

	printf("����������\n");
	scanf_s("%c", password);
	printf("ȷ��������������Y/N��");

	while (getchar() != '\n')//��Ϊscanf������»س����߿ո��ַ������������ַ�����getchar��ȡ��Щ���õ��ַ��������getchar������������
	{
		;
	}

	ret = getchar();
	if ('Y' == ret) 
	{
		printf("ȷ�ϳɹ�");
	}
	else 
	{
		printf("ȷ��ʧ��");
	}



	//ֻ��ӡ10�Σ�j�����涨��ģ�����ѭ����һ��֮����ѭ������ֵΪ10�������Ͳ��������ͽ���ѭ��
	for (; i < 10; i++) {
		for (; j < 10; j++) {
			printf("haha\n");
		}
	}

	for (i = 0, j = 0; j = 0; j++) {//ѭ��0��
		printf("hehe");
	}




	//for (;;) {//�������ֶ�����ʡ�ԣ����жϲ���ʡ�Ծͻ��Ϊ��
	//	printf("hehe");
	//}






	return 0;
}
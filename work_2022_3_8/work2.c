#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//�ַ���������==���жϣ�Ҫ�ÿ⺯������strcmp
int main() {
	int v[] = {1,2,3,4,5,6,7,8,9};
	char arr1[] = {"#####################"};
	char arr2[] = {"welcome to house!!!!!" };
	char arr11[] = { "#####################" };
	char arr22[] = { "welcome to house!!!!!" };
	int sz = sizeof(arr2) / sizeof(arr1[2]);
	int left = 0;//���±�
	int right = sz = sizeof(arr2) / sizeof(arr1[2]) - 2;//���±�
	int right1 = strlen(arr2) - 1;


	//binsearch(3, v, 2);

	for (int i = 0; i <=sz; i++)
	{
		arr1[i] = arr2[i];
		arr1[sz] = arr2[sz];
		sz--;
		printf("%s\n", arr1);
	}

	printf("\n");
	printf("\n");
	printf("\n");
	
	//while (left<=right1) {
	//	arr11[left] = arr22[left];
	//	arr11[right1] = arr22[right1];
	//	printf("%s\n", arr11);
	//	Sleep(1000);
	//	system("cls");//�����Ļ
	//	left++;
	//	right1--;

	//	
	//}
	return 0;
	
}

//int binsearch(int x, int v[], int n)
//{
//	for (int i = 0; i < strlen(v); i++)
//	{
//		if (n == v[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//}
#include<stdio.h>


//int main() {
//	char* p = "abcde";//�ַ����������޸�
//	char*p1= "abcde";
//	char* p2 = "abcde";//��Ϊ���ַ����������Բ���ռ�������ռ䣬��ͬһ��p1��p2
//	*p = 'W';//�������ܸı䣬��������
//	printf("%s\n", p);
//}

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	
//}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10]=&arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*p + i));//*p==arr
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}
}




void print1(int arr[3][4], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}


void print2(int(*arr)[4], int x, int y)
{
	int i = 0;
	int j = 0;
	for(i=0;i<x;i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(arr+i))[j]);
			printf("%d ", *(*(arr + i) + j));
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}


//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int Mul(int a, int b)
//{
//	return a * b;
//}
//
//int Div(int a, int b)
//{
//	return a / b;
//}

//int main() {
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//
//	int a = 20;
//	int b = 10;
//	int i = 0;
//	printf("%d\n", Add(a, b));
//	int (*pa)(int, int) = Add;//����ָ��
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������飬����������Ų����ͷ���ֵ��ͬ�ĺ���
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	printf("\n");
//	printf("%d\n", (*pa)(a, b));
//	/*printf("%P\n", Add);
//	printf("%P\n", &Add);//&�������ͺ��������Ǻ����ĵ�ַ*/
//
//	print1(arr, 3, 4);
//	print2(arr, 3, 4);
//}





char* my_strcpy(char* dest, const char* src);
//дһ������ָ��pf���ܹ�ָ��my_strcpy
char* (*pf)(char*, const char*);
//дһ��ָ������pfArr���ܹ�����ĸ�my_strcpy�����ĵ�ַ
char* (*pfArr[4])(char*, const char*);



int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}
int Xor(int x, int y)
{
	return x ^ y;
}

void menu() {
	printf("*******************\n");
	printf("** 1.Add   2.Sub **\n");
	printf("** 3.Mul   4.Div **\n");
	printf("** 0.Exit  5.Xor **\n");
	printf("*******************\n");
}
//������
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr ��һ������ָ�����顪��ת�Ʊ�
//	int(*pfArr[])(int,int) = { 0,Add,Sub,Mul,Div,Xor };//����ָ������
//	int (*(*ppfArr)[])(int, int) = &pfArr;//ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(* )(int,int)
//	int ref = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��ִ�в�����");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������\n");
//			scanf_s("%d%d", &x, &y);
//			ref=pfArr[input](x, y);
//			printf("%d\n", ref);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("��ѡ����ȷ��ֵ\n");
//		}
//
//
//	} while (input);
//}
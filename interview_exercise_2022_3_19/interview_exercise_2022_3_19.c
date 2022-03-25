#include<stdio.h>

//int main() {
//
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a+1表示整个数组地址加一
//	printf("%d %d",*(a+1),*(ptr-1));//ptr减一就回到了a的地址最后一位
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main() {
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//因为这是强制转换为长整型，所以地址要先转换为10进制然后加一，也就是地址加一，因为不是地址了
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}


//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x %x", ptr1[-1], *ptr2);
//}


//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5) };//注意这是小括号，里面是逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d ", p[0]);
//	return 0;
//}

//int main() {
//
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p  %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}



//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main() {
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0; 
//}

int main() {
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	return 0;
}
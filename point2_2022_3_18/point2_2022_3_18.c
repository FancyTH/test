#include<stdio.h>
#include<stdlib.h>

void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}



void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);

			}
		}
	}
}

struct Stu
{
	char name[20];
	short age[5];
};

//void qsort(void* base,//待排序数组首地址
//	size_t num,//待排序数组的元素个数
//	size_t width,//待排序数组的每个元素的大虚哎，单位是字节
//	int (compare)(const void* e1, const void* e2)//函数指针，比较两个元素的函数地址-这个函数使用者自己实现，两个参数是：待比较的两个元素地址
//);//这是一个库函数，compare（比较）这个函数里面包含需要比较的两个值的地址，返回值为>0，<0，0;

int com_int(const void* e1, const void* e2)//固定写法括号里,只能为int型
{
	return *(int*)e1 - *(int*)e2;//因为函数声明的是void*，所以比较的时候要先强制转换成原来的类型
}

int com_float(const void* e1, const void* e2)
{
	//return *(float*)e1 - *(float*)e2;
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 > * (float*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int com_struct_age(const void* e1, const void* e2)
{
	return *((struct Stu*)e1)->age - *((struct Stu*)e2)->age;
}

int com_struct_name(const void* e1, const void* e2)
{
	//比较字符串用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	float f[] = { 1.1,2.2,1.2,4.5,3,5 };
	int szf = sizeof(f) / sizeof(f[0]);
	struct Stu s[3] = { {"tang",21},{"huang",19},{"ai",20} };
	int szs = sizeof(s) / sizeof(s[0]);
	
	bubble_sort(arr, sz, sizeof(arr[0]), com_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	qsort(arr, sz, sizeof(arr[0]), com_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	qsort(f, szf, sizeof(f[0]), com_float);
	for (int i = 0; i < szf; i++)
	{
		printf("%f ",f[i]);
	}
	printf("\n");
	qsort(s, szs, sizeof(s[0]), com_struct_age);
	for (int i = 0; i < szs; i++)
	{
		printf("%s ", s[i].name);
		printf("%d  ", *s[i].age);
	}
}
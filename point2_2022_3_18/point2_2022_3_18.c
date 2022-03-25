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
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				//����
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

//void qsort(void* base,//�����������׵�ַ
//	size_t num,//�����������Ԫ�ظ���
//	size_t width,//�����������ÿ��Ԫ�صĴ��鰥����λ���ֽ�
//	int (compare)(const void* e1, const void* e2)//����ָ�룬�Ƚ�����Ԫ�صĺ�����ַ-�������ʹ�����Լ�ʵ�֣����������ǣ����Ƚϵ�����Ԫ�ص�ַ
//);//����һ���⺯����compare���Ƚϣ�����������������Ҫ�Ƚϵ�����ֵ�ĵ�ַ������ֵΪ>0��<0��0;

int com_int(const void* e1, const void* e2)//�̶�д��������,ֻ��Ϊint��
{
	return *(int*)e1 - *(int*)e2;//��Ϊ������������void*�����ԱȽϵ�ʱ��Ҫ��ǿ��ת����ԭ��������
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
	//�Ƚ��ַ�����strcmp����
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
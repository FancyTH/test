#include<stdio.h>

int main() {
	int arr[] = { 1,23,4,5,345,34,3,2,42,42,345,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d\n", sz);
}
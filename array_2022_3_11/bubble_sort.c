int bubble_sort(int arr[], int sz)//ц╟ещеепР
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz-1 - i; j++)
		{
			int tem = 0;
			if (arr[j] > arr[j+1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
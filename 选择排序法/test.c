#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, min = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
			if (i != min) 
			{
				int tmp = arr[i];
				arr[i] = arr[min];
				arr[min] = tmp;
			}
		}
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
		if (i > 0)
		{
			printf(" ");
		}
	}
	return 0;
}
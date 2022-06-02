#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m = 0, n = 0, i = 0, j = 0;
	int arr[20] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	arr[n] = m;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n - i - 1; j++)
		{
			int temp = 0;
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, i = 0, max = 0, min = 1000000, index1 = 0, index2 = 0;
	int arr[20] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index2 = i;
		}
	}
	arr[index2] = arr[0];
	arr[0] = min;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index1 = i;
		}
		
	}	arr[index1] = arr[n - 1];
	arr[n - 1] = max;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
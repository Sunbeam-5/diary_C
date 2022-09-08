#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m = 0, n = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	scanf("%d %d", &m, &n);
	int i = 0, j = 0, count = 0;

	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr2[i] == arr1[j])
			{
				break;
			}
		}
		if (j == m)
		{
			count++;
		}
	}
	int sum = m + count;
	printf("%d", sum);
	return 0;
}
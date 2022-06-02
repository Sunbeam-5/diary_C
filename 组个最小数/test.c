#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int m = 0, n = 0, i = 0, j = 0, k = 0, min = 10000000, index = 0, sum1 = 0, arr[100] = { 0 };
	long long sum2 = 0;
	while (~scanf("%d", &n))
	{
		sum1 += n;
		for (j = 0; j < n; j++)
		{
			arr[k] = i;
			k++;
		}
		i++;
	}
	for (j = 0; j < sum1; j++)
	{
		for (k = 0; k < sum1 - j - 1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	if (arr[0] == 0)
	{
		for (j = 0; j < sum1; j++)
		{
			if (arr[j] < min && arr[j] != 0)
			{
				min = arr[j];
				index = j;
			}
		}
		arr[index] = 0;
		arr[0] = min;
	}
	for (j = i - 1; j >= 0; j--)
	{
		sum2 += arr[j] * pow(10, sum1 - j - 1);
	}
	printf("%lld", sum2);
	return 0;
}
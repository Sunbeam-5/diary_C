#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int initialization(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		arr[i] = 0;
	return arr;
}
int main_1()
{
	int a = 0, b = 0, count1 = 0, count2 = 0, flag = 0, i = 0, j = 0, k = 0, m = 0;
	int arr1[100] = { 0 };
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
	{
		if (i == 10 || i == 13)
		{
			continue;
		}
		m = i;
		int sum = 0;
		int arr[5] = { 0 };
		while (1)
		{
		again1:
			count1 = 0;
			sum = 0;
			initialization(arr, 5);
			while (1)
			{
				arr[count1] = m % 10;
				if (m)
					count1++;
				else
					break;

				m /= 10;
			}
			for (j = 0; j < count1; j++)
			{
				sum += pow(arr[j], 2);
			}
			arr1[count2] = sum;
			count2++;
			if (count2 != 1)
				for (k = 0; k < count2 - 1; k++)
					if (sum == arr1[k] || sum == i)
						goto again2;
			if (sum == 1)
			{
				printf("%d ", i);
				for (k = 2; k < sqrt(i); k++)
				{
					if (i % k == 0)
						break;
				}
				if (k > sqrt(i))
					printf("%d\n", count2 * 2);
				else
				{
					printf("%d\n", count2);
				}
				flag = 1;
				goto again2;
			}
			else
			{
				m = sum;
				goto again1;
			}
		}
	again2:
		count2 = 0;
		initialization(arr1, 99);
	}
	if (flag == 0)
		printf("SAD");
	return 0;
}
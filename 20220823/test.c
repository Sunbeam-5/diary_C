#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//int main()
//{
//	printf("Hello world");
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("ƒ„∫√ ¿ΩÁ\n");
	int a[10] = { 2, 7, 5, 1, 3, 4, 9, 8, 0, 6 };
	int i = 0, j = 0, sum1 = 0, sum2 = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	i = 0;
	sum1 = ++i + ++i + ++i;
	sum2 = j++ + j++;
	printf("%d %d %d\n", sum1, sum2, j);
	return 0;
}
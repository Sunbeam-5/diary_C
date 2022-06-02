#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0, i = 0, j = 0, flag = 0;
	long m = 0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		m = pow(2, i) - 1;
		for (j = 2; j < sqrt(m); j++)
		{
			if (m % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(m))
		{
			printf("%ld\n", m);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("None");
	}
	return 0;
}
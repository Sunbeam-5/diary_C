#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cn(int n, int m)
{
	int a[100], b[100], c[100];
	int i;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j;
		for (j = 0; j < m; j++)
		{
			if (a[i] == b[j])
			{
				break;
			}
		}
		if (j == m)
		{
			c[k] = a[i];
			k++;
		}
	}
	if (k == 0)
	{
		printf("NULL\n");
	}
	else
	{
		for (i = 0; i < k; i++)
		{
			int t = c[i];
			int j;
			int f = i;
			for (j = i + 1; j < k; j++)
			{
				if (t > c[j])
				{
					t = c[j];
					f = j;
				}
			}
			printf("%d ", t);
			c[f] = c[i];

		}
		printf("\n");

	}
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	cn(n, m);
	return 0;
}

/* 请在这里填写答案 */

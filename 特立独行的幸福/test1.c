#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int a[10001] = { 0 };
int book[10000] = { 0 };
int c[10000][2000];
int pingfang(int n)
{
	int w = 0, sum = 0;
	while (n)
	{
		w = n % 10;
		sum += w * w;
		n = n / 10;
	}
	return sum;
}
int sushu(int n)
{
	int w = 2, x = 0;
	for (x = 2; x * x <= n; x++)
	{
		if (n % x == 0)
		{
			w = 1;
			break;
		}
	}
	return w;
}
int main()
{
	int i, j, t = 0, k, l, x, y;
	scanf("%d%d", &x, &y);
	for (i = x; i <= y; i++)
	{
		k = i;
		l = sushu(k);
		j = 0;
		while (1)
		{
			k = pingfang(k);
			j++;
			if (k == 1)
			{
				c[t][0] = i;
				c[t++][1] = l * j;
				break;
			}
			if (k >= x && k <= y)
			{
				book[k]++;
			}
			if (a[k] == i)
			{
				break;
			}
			a[k] = i;
		}
	}
	if (t != 0)
	{
		for (i = 0; i < t; i++)
		{
			if (book[c[i][0]] == 0)
			{
				printf("%d %d\n", c[i][0], c[i][1]);
			}
		}
	}
	else
	{
		printf("SAD");
	}
	return 0;
}

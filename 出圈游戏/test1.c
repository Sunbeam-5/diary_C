#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, arr[100] = { 0 }, i = 0, j = 0, t = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	i = 1;
	while (j != n - 1)
	{
		t++;
		if (t != 3)
		{
			arr[i + n - j] = arr[i];
		}
		else
		{
			t = 0;
			j++;
		}
		i++;
	}
	printf("%d", arr[i + n - j - 1]);
	return 0;
}
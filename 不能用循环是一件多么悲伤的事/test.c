#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
void dfs(int x, int y)
{
	if (x <= n)
	{
		if (x + y == n)
		{
			printf("%-2d+%2d = %-2d \n", x, y, x + y);
			y = 0;
			dfs(x + 1, y);
			return;
		}
		printf("%-2d+%2d = %-2d ", x, y, x + y);
		dfs(x, y + 1);
	}
	if (x > n)	return;

}
int main()
{
	scanf("%d", &n);
	dfs(0, 0);
	return 0;
}

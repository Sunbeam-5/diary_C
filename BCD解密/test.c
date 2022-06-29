#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m = 0, n = 0, temp = 0;
	scanf("%d", &m);
	temp = m / 16;
	n = m % 16;
	printf("%d", temp * 10 + n);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	unsigned long long n = 0, m = 0;
	int i = 0, count = 0, arr[1000] = { 0 };
	scanf("%llu", &n);
	m = n;
	do
	{
		arr[count] = m % 10;
		count++;
	} while (m = m / 10);
	for ( i = count - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
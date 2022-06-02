#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int sum = 0, temp = 0, m = 0, n = 0, i = 0, count = 0, arr[10] = { 0 };
	scanf("%d", &n);
	m = n;
	do
	{
		arr[count] = m % 10;
		count++;
	} while (m = m / 10);
	for (i = 0; i < 4; i++)
	{
		arr[i] = (arr[i] + 9) % 10;
	}
	temp = arr[1];
	arr[1] = arr[3];
	arr[3] = temp;

	temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
	for (i = 0; i < 4; i++)
	{
		sum += arr[i] * pow(10, i);
	}
	printf("The encrypted number is %04d", sum);
	return 0;
}
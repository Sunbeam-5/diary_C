#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	char n = 0, i = 0, count = 0;
	scanf("%c", &n);
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		if (n == arr[i])
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
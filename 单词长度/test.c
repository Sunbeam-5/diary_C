#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0, len = 0;
	char arr[100][100] = { 0 };
	while (scanf("%s", arr[i]) != '.')
	{
		len = strlen(arr[i]);
		printf("%d ", len);
	}
	return 0;
} 
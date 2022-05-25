#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[1001] = { 0 };
	long target = 0;
	int i = 0, j = 0;
	while (1)
	{
		scanf("%c", arr[i]);
		if (arr[i] == '\n')
			break;
		i++;
	}
	scanf("%ld", target);
	for (i = 0; i < strlen(arr) - 1; i++)
	{
		for (j = i + 1; j < strlen(arr); j++)
		{
			if ((int)arr[i] + (int)arr[j] == target)
			{
				printf("%d %d", i, j);
				goto a1;
			}
		}
	}
	a1:
	return 0;
}
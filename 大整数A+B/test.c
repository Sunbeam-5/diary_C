#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n = 0, i = 0, j = 0, sum = 0, num1 = 0, num2 = 0;
	char arr1[1001] = { 0 }, arr2[1001] = { 0 }, arr3[1003] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr1);
		scanf("%s", arr2);
		while (arr1[j] != '\0' && arr2[j] != '\0')
		{
			arr3[j] = arr1[j] + arr2[j];
		}
		printf("Case %d:\n", i + 1);
		for (i = 0; i < strlen(arr1); i++)
			printf("%c", arr1[i]);
		printf(" + ");
		for (i = 0; i < strlen(arr2); i++)
			printf("%c", arr2[i]);
		for (i = 0; i < strlen(arr3); i++)
			printf("%c", arr3[i]);
		printf("\n\n");
	}
	return 0;
}
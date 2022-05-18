#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int judge(int arr[][5])
{

}
int main()
{
	int n = 0, i = 0, j = 0, sum = 0;
	int arr[100][5] = {0};
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		judge(arr[i]);
		if (sum == 24)
			printf("True");
		else
			printf("False");
		if (i < n - 1)
			printf(" ");
	}
	return 0;
}
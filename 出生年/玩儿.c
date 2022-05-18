#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main1()
{
	char arr[100] = "I like you";
	int i = 0;
	for (i = 0; i < strlen(arr); i++)
	{
		printf("%#016o\n", arr[i]);
	}
	return 0;
}
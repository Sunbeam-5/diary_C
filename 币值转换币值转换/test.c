#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, count = 0, m = 0, n = 0, i = 0, j = 0, sum = 0;
	int arr[100] = { 0 };
	char num[100] = { 0 };
	scanf("%d", &n);
	m = n;
	do
	{
		arr[count] = m % 10;
		count++;
		m /= 10;
	} while(m);
	for (i = 0; i < count; i++)
	{
		switch (arr[i])
		{
		case 1:
			num[i] = 'b';
			break;
		case 2:
			num[i] = 'c';
			break;
		case 3:
			num[i] = 'd';
			break;
		case 4:
			num[i] = 'e';
			break;
		case 5:
			num[i] = 'f';
			break;
		case 6:
			num[i] = 'g';
			break;
		case 7:
			num[i] = 'h';
			break;
		case 8:
			num[i] = 'i';
			break;
		case 9:
			num[i] = 'j';
			break;
		case 0:
			num[i] = 'a';
			break;
		}
	}
	for (i = count -1; i >= 0; i--)
	{
		
		printf("%c", num[i]);
		switch (i)
		{
		case 8:
			printf("Y");
			break;
		case 7:
			if (arr[7] != 0)
				printf("Q");
			break;
		case 6:
			if (arr[6] != 0)
				printf("B");
			break;
		case 5:
			if (arr[5] != 0)
				printf("S");
			break;
		case 4:
			if (arr[4] != 0)
				printf("W");
			break;
		case 3:
			if (arr[3] != 0)
				printf("Q");
			break;
		case 2:
			if (arr[2] != 0)
				printf("B");
			break;
		case 1:
			if (arr[1] != 0)
				printf("S");
			break;
		}
		sum = 0;
		for (j = 0; j < i; j++)
		{
			sum += arr[j];
			
		}
		if (sum == 0)
			break;
		}
	return 0;
}
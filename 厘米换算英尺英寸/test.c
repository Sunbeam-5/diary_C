#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cm = 0, foot = 0, inch = 0;
	double temp = 0;
	scanf("%d", &cm);
	temp = cm * 0.01 / 0.3048;
	inch = (temp - (int)temp) * 12;
	foot = (int)temp;
	printf("%d %d", foot, inch);
	return 0;
}
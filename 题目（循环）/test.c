#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*int i = 0;
	for (i = 1; i++ < 4;)
		printf("%d", i);
	printf("%d", i);*/
	int i = 16, j = 3;

	switch (i % j) {

	case 0: printf("zero");

	case 1: printf("one");

	case 2: printf("two");

	case 3: printf("three"); break;

	default: printf("default");

	}
	return 0;
}
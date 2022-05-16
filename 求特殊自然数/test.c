#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	int i, x, y, z;
	for (i = 100; i < 667; i++)
	{
		x = i / 100;
		y = i / 10 % 10;
		z = i % 100;
		if (x * 7 * 7 + y * 7 + z == z * 9 * 9 + y * 9 + x) {
			printf("%d\n", x * 7 * 7 + y * 7 + z);
			printf("%d%d%d\n", x, y, z);
			printf("%d%d%d\n", z, y, x);
		}
	}
	return 0;
}

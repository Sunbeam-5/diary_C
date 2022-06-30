#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr[11][11] = {  { '0',' '}, {1,',','.', '?', '!'},{2,'A','B','C'}, {3,'D','E','F'},
						{4,'G','H','I'}, {5,'J','K','L'}, {6,'M','N','O'},
					  {7,'P','Q','R','S'}, {8,'T','U','V'}, {9,'W','X','Y','Z'} };
	int i = 0, m = 0, n = 0, count = 0;
	char a[600] = { 0 };
	while (~scanf("%c", &a[i]))
	{
		if (a[i] == '\n')
		{
			break;
		}
		if (a[i] != ' ')
		{
			count++;
			m = a[i] - 48;
		}
		else
		{
			printf("%c", arr[m][count-1]);
			count = 0;
		}
		i++;
	}
	printf("%c", arr[m][count - 1]);
	return 0;
}
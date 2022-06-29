#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Stu
{
	char name[11];
	char birth[11];
	char gender[2];
	char phone[20];
	char telephone[20];
};

int main()
{
	struct Stu stu[100];
	int n, i, x, no, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %s %s %s",
			&stu[i].name, &stu[i].birth,
			&stu[i].gender, &stu[i].phone,
			&stu[i].telephone);
	}
	scanf("%d", &x);
	for (j = 0; j < x; j++)
	{
		scanf("%d", &no);
		if (no >= 0 && no < n)
		{
			printf("%s %s %s %s %s\n",
				stu[no].name, stu[no].phone,
				stu[no].telephone, stu[no].gender,
				stu[no].birth);
		}
		else
			printf("Not Found\n");
	}
	return 0;
}
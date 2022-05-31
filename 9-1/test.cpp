#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char num[10];
	char name[20];
	int score[3];
};
void save()
{
	FILE* fp; int i, n;
	struct student st;
	if ((fp = fopen("stud.dat", "wb")) == NULL)
	{
		printf("Can not open this file.\n");
		exit(0);
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", st.num, st.name, &st.score[0], &st.score[1], &st.score[2]);
		fwrite(&st, sizeof(struct student), 1, fp);
	}
	fclose(fp);
}
int main()
{
	save();
	return 0;
}

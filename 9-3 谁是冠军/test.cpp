#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person
{
	char name[20];
	int score[5];
};
int main()
{
	struct person st[100];
	int i = 0, j, sum, su[100];
	char s[20];
	FILE* fp1;
	if ((fp1 = fopen("src/pf.dat", "rb")) == NULL)
	{
		printf("can't open this file");
	}
	while (fread(&st[i], sizeof(struct person), 1, fp1) == 1)
	{

		su[i] = st[i].score[0] + st[i].score[1] + st[i].score[2] + st[i].score[3] + st[i].score[4];
		//	printf("%s %d %d %d %d %d %d\n",st[i].name,st[i].score[0],st[i].score[1],st[i].score[2],st[i].score[3],st[i].score[4],su[i]);
		i++;

	}
	sum = su[0];
	strcpy(s, st[0].name);
	//	printf("%s\n",s);
	for (j = 0; j < i; j++)
	{
		if (su[j] > sum)
		{
			sum = su[j];
			strcpy(s, st[j].name);
		}
	}
	printf("%s is champion!", s);
	return 0;
}

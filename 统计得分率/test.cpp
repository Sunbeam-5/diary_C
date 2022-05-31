#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int score[4];
};
typedef struct student student;
void save()
{
    student st;
    FILE* fp;
    int i, x;
    fp = fopen("zy.dat", "wb");
    if (!fp)
    {
        printf("cann't create file\n"); exit(0);
    }
    for (i = 0; i < 5; i++)
    {
        scanf("%s%d%d%d%d", st.name, &st.score[0], &st.score[1], &st.score[2], &st.score[3]);
        fwrite(&st, sizeof(student), 1, fp);
    }
    fclose(fp);
}
int main()
{
    save();
    return 0;
}
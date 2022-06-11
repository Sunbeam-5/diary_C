#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = 0, b = 0, i = 0, j = 0, flag = 0;
    int arr[100][100];
    scanf("%d%d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 2; i <= a - 1; i++)
    {
        for (j = 2; j <= b - 1; j++)
        {
            if (arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1])
            {
                printf("%d %d %d\n", arr[i][j], i, j);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("None %d %d", a, b);
    }
    return 0;
}

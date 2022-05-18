#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0, i = 0, j = 0;
    unsigned long long arr[11];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 1)
        {
            for (j = 2; j < sqrt(arr[i]); j++)
            {
                if (arr[i] % j == 0)
                    break;
            }
            if (j > sqrt(arr[i]))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
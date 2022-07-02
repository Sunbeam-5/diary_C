#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int number;
int buff;
int num[1001];
int i, j, k, m, n, temp = 0;

int main()
{
    while (scanf("%d\n", &number) != EOF)
    {

        for (i = 0; i < number; i++)
        {
            scanf("%d\n", &num[i]);
        }
        /*数组去重*/
        for (m = 0; m < number; m++)
        {
            for (n = m + 1; n < number; n++)
            {
                if (num[m] == num[n])
                {
                    for (temp = n; temp < number; temp++)
                    {
                        num[temp] = num[temp + 1];
                    }
                    number--;
                    n--;
                }
            }
        }
        /*冒泡排序*/
        for (j = 0; j < number - 1; j++)
        {
            for (k = 0; k < number - j - 1; k++)
            {
                if (num[k + 1] < num[k])
                {
                    buff = num[k];
                    num[k] = num[k + 1];
                    num[k + 1] = buff;
                }
            }
        }
        for (i = 0; i < number; i++)
        {
            printf("%d\n", num[i]);
        }
    }

}
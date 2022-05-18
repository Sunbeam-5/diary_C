#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"string.h"
#include"algorithm"
using namespace std;
int mark = 0;
double a[4];
int vis[4];
void dfs(int step)
{

    if (step == 3)//已经对四个数进行了操作
    {
        int i;
        for (i = 0; i < 4; i++)
            if (vis[i] == 0)
                break;
        if (a[i] == 24)
            mark = 1;
        return;
    }
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
        {
            if (vis[i] == 0 && vis[j] == 0)
            {
                double x = a[i], y = a[j];//必须double型的数据
                vis[i] = 1;//标记一下
                a[j] = x + y;
                dfs(step + 1);
                a[j] = x - y;
                dfs(step + 1);
                a[j] = y - x;
                dfs(step + 1);
                a[j] = x * y;
                dfs(step + 1);
                a[j] = x / y;
                dfs(step + 1);
                a[j] = y / x;
                dfs(step + 1);
                vis[i] = 0;//需要回溯 
                a[j] = y;
            }
        }
}
int main()
{
    int T;
    scanf("%d", &T);
    int cnt = 1;
    while (T--)
    {
        scanf("%lf%lf%lf%lf", &a[0], &a[1], &a[2], &a[3]);
        mark = 0;
        memset(vis, 0, sizeof(vis));
        dfs(0);
        if (mark == 1)
        {
            if (cnt == 1)
                printf("True");
            else
                printf(" True");
        }
        else if (cnt == 1)
            printf("False");
        else
            printf(" False");
        cnt++;
    }
}

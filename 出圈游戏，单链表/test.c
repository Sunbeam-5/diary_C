#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct Person* output(struct Person* head, int n);
struct Person* creat(int n);
struct Person
{
    int num;//号码 
    int sign;//状态标志 
    struct Person* nxet;
};

int main()
{
    int n;
    struct Person* head;

    scanf("%d", &n);
    head = creat(n);
    output(head, n);
    return 0;
}

struct Person* creat(int n)//创建链表 
{
    struct Person* p, * pr, * head;
    int i;

    for (i = 1; i <= n; i++)
    {
        p = (struct Person*)malloc(sizeof(struct Person));
        p->num = i;
        p->sign = 1;    // 起始状态为1 

        if (i == 1)
            head = pr = p;
        else
        {
            pr->nxet = p;    //前驱结点连接当前结点 
            pr = p;    //连接好以后更新 
        }
    }
    p->nxet = NULL;//最后一个节点指向NULL 

    return head;
}

struct Person* output(struct Person* head, int n)
{
    int k = 0;//计数报的次数，叫到3时候对应的人出圈 
    int i = 1;
    int m = 0;//代表出去的人数,每出去一个人加一 
    struct Person* p;

    p = head;
    while (m < n - 1)//出去n-1人，留下一个,游戏结束条件 
    {
        if (p->sign == 1)//1代表在这个圈里面，每报一次k加一 
            k++;

        if (k == 3)//报到3的人出圈 
        {
            p->sign = 0;//状态标志更新为0 
            k = 0;//从新开始报数 
            m++;//出圈的人加一 
        }

        i++;
        p = p->nxet;

        if (i == n + 1)//当报到最后一个号码此时圈里面人数不是1就从新从第一个人开始报，因为出圈的人状态改变，此时上面k计数时不影响 
        {
            i = 1;
            p = head;
        }
    }

    for (p = head; p != NULL; p = p->nxet)
    {
        if (p->sign == 1)//检测在圈里面的状态标志输出 
            printf("%d\n", p->num);
    }
}




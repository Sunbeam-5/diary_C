#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct Person* output(struct Person* head, int n);
struct Person* creat(int n);
struct Person
{
    int num;//���� 
    int sign;//״̬��־ 
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

struct Person* creat(int n)//�������� 
{
    struct Person* p, * pr, * head;
    int i;

    for (i = 1; i <= n; i++)
    {
        p = (struct Person*)malloc(sizeof(struct Person));
        p->num = i;
        p->sign = 1;    // ��ʼ״̬Ϊ1 

        if (i == 1)
            head = pr = p;
        else
        {
            pr->nxet = p;    //ǰ��������ӵ�ǰ��� 
            pr = p;    //���Ӻ��Ժ���� 
        }
    }
    p->nxet = NULL;//���һ���ڵ�ָ��NULL 

    return head;
}

struct Person* output(struct Person* head, int n)
{
    int k = 0;//�������Ĵ������е�3ʱ���Ӧ���˳�Ȧ 
    int i = 1;
    int m = 0;//�����ȥ������,ÿ��ȥһ���˼�һ 
    struct Person* p;

    p = head;
    while (m < n - 1)//��ȥn-1�ˣ�����һ��,��Ϸ�������� 
    {
        if (p->sign == 1)//1���������Ȧ���棬ÿ��һ��k��һ 
            k++;

        if (k == 3)//����3���˳�Ȧ 
        {
            p->sign = 0;//״̬��־����Ϊ0 
            k = 0;//���¿�ʼ���� 
            m++;//��Ȧ���˼�һ 
        }

        i++;
        p = p->nxet;

        if (i == n + 1)//���������һ�������ʱȦ������������1�ʹ��´ӵ�һ���˿�ʼ������Ϊ��Ȧ����״̬�ı䣬��ʱ����k����ʱ��Ӱ�� 
        {
            i = 1;
            p = head;
        }
    }

    for (p = head; p != NULL; p = p->nxet)
    {
        if (p->sign == 1)//�����Ȧ�����״̬��־��� 
            printf("%d\n", p->num);
    }
}




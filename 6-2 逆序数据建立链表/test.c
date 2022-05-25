#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* create();

int main()
{
    struct ListNode* p, * head = NULL;
    head = create();
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */

/*本题要求实现一个函数，按输入数据的逆序建立一个链表。
函数createlist利用scanf从输入中获取一系列正整数，当读到−1时表示输入结束。按输入数据的逆序建立一个链表，并返回链表头指针。*/
struct ListNode* createlist()
{
    int num;
    struct ListNode* p = NULL, * head = NULL;
    scanf("%d", &num);

    while (num != -1) {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));//指针定义完，别忘记malloc()申请内存空间
        p->data = num;
        p->next = NULL;

        /*头插法：尾不动，头动*/
        if (head == NULL) {
            head = p;
        }
        else {
            p->next = head;
            head = p;
        }
        scanf("%d", &num);
    }
    return head;

}

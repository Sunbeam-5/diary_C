#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
struct Node
{
    char info;
    struct Node* link;
};

struct Node* create();
void print(struct Node* head);

int main()
{
    struct Node* head;
    head = create();
    print(head);
    return 0;
}

/* 你的代码将被嵌在这里 */

struct Node* create()
{
    struct Node* top;
    struct Node* p;
    struct Node* head;
    char s;
    top = NULL;
    while ((s = getchar()) != '\n')
    {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->info = s;
        p->link = top;
        top = p;
    }
    return(top);
}

void print(struct Node* head)
{
    struct Node* p;
    p = head;
    while (head != NULL)
    {
        p = head;
        head = p->link;
        printf("%c", p->info);
        free;
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
// #define NULL

// first defination of  the node;
struct node
{
    int data;
    struct node *next;

} *top;

void push(int x)
{

    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));

    if (t == NULL)
    {
        printf("stack the overflow");
    }
    t->data = x;
    t->next = NULL;
    top = t;
}

int pop(struct node *t)
{
    int x = -1;

    if (top == NULL)
    {
        printf("stack underflow");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void display(struct node *p)
{

    p = top;
    while (p != NULL)
    {
        printf("%d  ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    top;
    // struct node *top;
    push(45);
    push(41);
    push(44);
    push(43);
    push(42);
    display(top);
    pop(top);

    return 0;
}
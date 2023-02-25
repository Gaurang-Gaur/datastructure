#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;

    int priority;
    struct

        Node *next;
};

struct Node *newNode(int d, int p)
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;

    return temp;
}
int isEmpty(struct Node **head)
{
    return (*head) == NULL;
}

void push(struct Node **head, int d, int p)
{
    struct Node *start = (*head);
    struct Node *temp = newNode(d, p);
    if ((*head)->priority > p)
    {
        temp->next = *head;

        (*head) = temp;
    }
    else
    {

        while (start->next != NULL &&

               start->next->priority < p)
        {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}

void pop(struct Node **head)
{
    struct Node *temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

int peek(struct Node **head)
{
    return (*head)->data;
}

int main()
{
    printf("Gaurang Gaur 2100320120066\n");

    struct Node *pq = newNode(5, 2);
    push(&pq, 6, 3);
    push(&pq, 7, 1);

    push(&pq, 8, 4);

    while (!isEmpty(&pq))
    {
        printf("%d ", peek(&pq));
        pop(&pq);
    }

    return 0;
}

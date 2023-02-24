#include <stdio.h>
 #include <stdlib.h>

 struct node {
int data;

struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data

        = data;

    new_node->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = new_node;
    }
    else
    {

        rear->next = new_node;
        rear

            = new_node;
    }
}

void dequeue()
{

    if (front == NULL)
    { printf("Queue isempty.\n");
    return;
    }

    if (front == rear)
    {
        front = rear

            = NULL;
    }
    else
    {

        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct node *temp = front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("Queue before dequeue: ");
    display();
    dequeue();
    printf("Gaurang Gaur 2100320120066\n");

    dequeue();

    printf("Queue after dequeue: ");
    display();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int size;
    int *Q;
};

void enqueue(struct queue *q, int x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("\nqueue is full\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size; // similar to the q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct queue *q)
{
    int x = -1;
    if (q->rear == q->front)
    {
        printf("\nEmpty circular queue\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
        q->Q[q->front] = 0;
    }
    return x;
}

void display(struct queue *q)
{
    int i = q->front + 1;
    do
    {
        printf("\n%d  \n", q->Q[i]);
        i = (i + 1) % q->size;
    } while (i != (q->rear + 1) % q->size);
}

int main()
{

    struct queue q;
    q.front = q.rear = 0;
    // The only difference for the linear queue is this that we initialize front and rear with zeros instead of -1.

    printf("enter the size of circular queue you wanted to create in heap");
    scanf("%d", &q.size);
    q.Q = (int *)malloc(q.size * sizeof(int));
    // here we just create the circular queue in heap memory..
    enqueue(&q, 34);
    enqueue(&q, 35);
    enqueue(&q, 36);
    enqueue(&q, 37);
    enqueue(&q, 38);
    display(&q);

    printf("\nThis element are getting dequeue:%d \n", dequeue(&q));
    printf("This element are getting dequeue:%d \n", dequeue(&q));
    printf("Update circular queue:");
    display(&q);

    return 0;
}
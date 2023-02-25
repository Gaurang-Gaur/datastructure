#include<stdio.h>
#include<stdlib.h>

struct queue {
    int front ;
    int rear;
    int size;
    int *Q;

};
//calling the struct queue by call by refrence as we wanted to change directly into it.

void enqueue(struct queue *q,int x){

if(q->rear==q->size-1){
    printf("\nqueue is full\n");

}
else 
{
    q->rear++;
    q->Q[q->rear]=x;



}

}
int dequeue(struct queue q){

int x=-1;
// queue is empty this function will return the x=-1;
if(q.front==q.rear){
printf("\ndequeue is empty \n");


}
else{
    q.front++;
    x=q.Q[q.front];
    q.Q[q.front]=0;
    printf("\n value of q.front ptr:%d\n",q.front);

}
return x;
}

void display(struct queue q){

    for (int  i = 0; i <=q.rear; i++)
    {
        printf("%d  ",q.Q[i]);
        
    }
    


}

int main(){

struct queue q;


printf("enter the size you want to heap ");
scanf("%d",&q.size);// Remember not to forget writing the & ampersand symbol here.

// q.size=4;
printf("%d\n",q.size);
q.front=q.rear=-1;


q.Q=(int *)malloc(q.size*sizeof(int));

enqueue(&q,34);
enqueue(&q,35);
enqueue(&q,36);
enqueue(&q,37);
enqueue(&q,38);
// enqueue(&q,39);
display(q);

printf("\nThis elememt is deleted for the queue:%d",dequeue(q));
printf("\n new queue:\n");
display(q);

    return 0;
}
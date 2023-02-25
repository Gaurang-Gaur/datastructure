#include<stdio.h>
#include<stdlib.h>

 

 struct node
 {
    int data;
    struct node *next;

 }*front=NULL,*rear=NULL;// This global declartion of front and rear pointer with NULL value in them...

void enqueue(struct node *t,int x){

    // creation of node...
   

    if(t==NULL){
        printf("queue is full");

    }else{
         t->data=x;
    t->next=NULL;
        // check for first node here
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;// connecting the new node here...
            

            rear=t;
        
        }
    }


}
int dequeue(struct node *t){
    int x=-1;
    if(front==NULL){
        printf("queue is empty");

    }
    else
    {
        t=front;
        x=front->data;
        front=front->next;
        free(t);

    }
}
void display(struct node *t){

while(t!=NULL){
    
    printf("%d  ",t->data);
    t=t->next;
}

}
 
 

int main()
{

    struct node *t;

    t=(struct node *)malloc (sizeof(struct node));

    enqueue(t,34);
    enqueue(t,35);
    enqueue(t,36);
    display(t);
    
     return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct  Node
{
    int data;
    struct Node *next;
}*first=NULL; // it will create the global variable not a local variable here...

void create(int a[],int n){
   struct Node *p,*last;
   first=(struct Node *)malloc(sizeof(struct Node));
   first->data=a[0];
   first->next=NULL;
   last=first;
   int i;
   for ( i = 1; i < n; i++)// we are running the loop from i=1 , because it first node is already being create ...

   {
           p=(struct Node *)malloc(sizeof(struct Node));
           p->data=a[i];
           p->next=NULL;
           last->next=p;
           last=p;
   }
   


}
void display(struct Node *t){

    while (t!=NULL)
    {
        printf("%d",t->data);
        t=t->next;
    }
    




}

int main(){
    int a[5]={3,4,5,8,9};
    create(a,5);
    display(first);


}
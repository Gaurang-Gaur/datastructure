#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

}*first;
void create (int a[],int n){


    struct node *p,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    int i;
    for(i=1;i<n;i++){
         p=(struct node *)malloc(sizeof(struct node));
         p->data=a[i];
         p->next=NULL;
    last->next=p;
         last=p;

    }

}
void display(struct node *p){

    while (p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;

    }
    
}
int max(struct node *p){


    int max=-6276;
    while(p){
          if(p->data>max){
        max=p->data;
        
    }
        p=p->next;
    }
  
return max;
}
int rmax(struct node *p){
    int max=-62789;
    int x;
    if(p==0)
    return 0;
    x=rmax(p->next);
    if(x>p->data)
    return x;
    else
    return p->data;
}



int main(){
    int a[]={1,2,35,5,3,24,34 };
    create(a,7);
    display(first);
    printf("\n%d ",max(first));
    printf("\n%d ",rmax(first));



return 0;

}
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;// we using the  pointer of struct node type as it store address of object of structnode .

};
struct node * getnode()
// we are using * as it return an pointer if we wanted to return we use []
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;

}
void insbeg(int x, struct node **p){
    struct node *q;
    q=getnode();
    q->data=x;
    q->next=*p;
    *p=q;

}
void insafter(struct node **p, int x){
    struct node *q;
    q=getnode();
    q->data=x;

    
}
void insend(struct node **START, int x){
    struct node *p, *q;
    q=getnode();
    q->data=x;
    q->next=NULL;
    p=*START;
    if(p==NULL){
        *START=q;

    }
    else{
        while(p->next!=NULL){
            p=p->next;
            p->next=q;
            
        }
    }
}
void traverse(struct node *START){
    struct node *p;
    p=START;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    
     return 0;
}
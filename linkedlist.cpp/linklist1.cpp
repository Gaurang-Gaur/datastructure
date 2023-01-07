#include<iostream>
#include"linklist.h"
using namespace std;
void reverse(struct node ** start){
    struct node *p,*q,*r=NULL;
    p=*start;
    while(p!=NULL){
        q=p->next;
        p->next=r;
        r=p;
        p=q;

    }
    *start=r;
}
int main()
{
    int i,n,e;
    struct node *START=NULL;
    printf("enter the no. of elements\n");
    scanf("%d",&n);



    
     return 0;
}
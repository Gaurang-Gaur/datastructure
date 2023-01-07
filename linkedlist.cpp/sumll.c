#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; // self referencial pointer...

} *first = NULL; // defining the global pointer...

void create(int a[], int n)
{
    struct node *last, *p;
    first = (struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next = NULL;
    last = first;
    int i;
    for(i=1;i<n;i++){
            p = (struct node *)malloc(sizeof(struct node));
            p->data=a[i];
    p->next = NULL;
    last->next = p;
    last = p;
    }

}
void display(int a[],struct node *t,int n)
{
      
    while (t != NULL)

    {
     
        {  printf("%d->", t->data);
        t = t->next;}
      
    }
}
int count(struct node *p){
    int count=0;
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
// int rcount(struct node *p){

//     if(p!=NULL){
//          return rcount(p->next) + 1;
//     }
//     else 
//         return 0;
   
// }
int sum(struct node *p){
    int sum=0;
    while (p!=NULL)
    {
        sum+=p->data;
        p=p->next;

    }
    





    return sum;
}
int rsum(struct node *p){
       
       if(p==NULL)
       return 0;
       else
       return rsum(p->next)+p->data;
}

int main()
{
    int a[] = {34, 23, 13, 53, 543};
    create(a, 5);
    display(a,first,5);

    printf("\n %d \n",count(first));
    printf("counting using recursion\n");
    // printf("\n %d \n" , count);
    printf("%d \n",sum(first));
    printf("%d \n",rsum(first));

    return 0;
}
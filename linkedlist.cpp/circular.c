#include <stdio.h>
#include <stdlib.h>

struct joseph
{
    int data;
    struct joseph *next;
} *cstart;

void ccreate(int a[], int n)
{

    struct joseph *last, *p;

    cstart = (struct joseph *)malloc(sizeof(struct joseph));
    cstart->data = 1;
    cstart->next = NULL;
    last = cstart;
    for (int i = 1; i < 20; i++)
    {
        p = (struct joseph *)malloc(sizeof(struct joseph));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}
void display(struct joseph *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void createc(struct joseph *p){
while(p!=NULL){
    p=p->next;
}
    if(p->next==NULL){
        p->next=cstart;
        printf("%d",p->data);

    }

}
int main()
{
    int a[20] = {0};

    ccreate(a, 20);
    // display(cstart);
    createc(cstart);

    return 0;
}

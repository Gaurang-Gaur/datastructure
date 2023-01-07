void display(struct joseph *p){
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;

    }
    
}
#include<stdio.h>
#include<stdlib.h>


struct stack{
int top;
int *ptr;// to create dynamic array...
int size;


};


// here we directly wanted to create the stack here,

void create(struct stack *st){


    printf("Enter the size of array you wanted to create dynamically:");
    scanf("%d",&st->size);

    

    st->ptr= (int*)malloc(st->size*sizeof(int));  
      
    st->top=-1;
}

void display(struct stack st)
{
    int i=0;
    // st.top++;
    // st.ptr[st.top]=34;
    for(i=st.top;i>=0;i--){
          printf("%d  ",st.ptr[i]);
    }
    printf("\n");


}


// now , we have to push in stack this implies we have to read and write in array directly so ,we can directly use the call by reference.
// but, we not returning anything so , we use the void function.
void push(struct stack *st,int x){
    // x the value to be pushed in stack.
    // first we check that stack is empty or not.
    if(st->top==st->size-1){
        printf("overflow");

    }
    else{


    st->top++;
    st->ptr[st->top]=x;// here,we use ptr pointer the ask for continous memory in heap now , it will act as the array.
    }

}
int pop(struct stack *st){

int x=-1;

    if(st->top==-1){
        printf("underflow");
    }
    else
    {
        x=st->ptr[st->top];
        st->top--;

    }
    if(x==-1){
        printf("Then, you are pop nothing");
    }
    return x;


}


int main()
{
    struct stack st;

create(&st);
    //   st.ptr[++st.top]=35;


    // now ready go..
    push(&st,5);
    push(&st,10);
    push(&st,15);
    display(st);
    pop(&st);
    printf("\n");
    printf("In last pop this is out:%d",pop(&st)); 
    // pop(&st);
    // pop(&st);
    printf("\n");

    display(st);// call by value;



    return 0;
}
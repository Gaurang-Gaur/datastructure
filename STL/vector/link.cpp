#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node*getnode(){
    int a;
    struct node *p;
    cout<<"enter the data"<<endl;
    cin>>a;
    p=(struct node *)(malloc(sizeof(struct node)));
    p->data=a;
    p->next=NULL;
    return p;
}

int main()
{
    struct node*start=NULL;// initial start pointing the null then first heap address get by the get node () it will return the struct node pointer... cointaing the new address...

    start=getnode();
    cout<<start<<endl;



    
     return 0;
}
// Using malloc function allocating memory in heap...
// Creating a structure in heap 
// creating a function that return a pointer of type of structure to main function ...
// 
#include<iostream>
using namespace std;
struct rectangle // It means sturcture name in rectangle which have to components that is length and breadth...

{
    int length;
    int breadth;

}r;
// function syntax {+__-}

//return_type(may be float, int , struct ,array ( may be of type int , float),pointer)

struct rectangle *fun()// Return the pointer of type rectangle
{
struct rectangle *p;
p=new rectangle;
// p=(struct rectangle*)malloc(sizeof(struct rectangle));
p->breadth=10;// Initializing...
p->length=20;
cout<<"what is inside the p:"<<p<<endl;
cout<<"Size of the pointer:"<<sizeof(*p)<<endl;
return p;// Returning the address of the structure...

}
int main()
{
    struct rectangle *ptr=fun();


    cout<<"Length:"<<ptr->breadth<<"  breadth:"<<ptr->length<<endl;









return 0;
}
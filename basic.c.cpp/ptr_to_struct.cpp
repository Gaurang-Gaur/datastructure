//Pointer pointing to structure...
#include<iostream>
using namespace std;
// declaration of global structure...
struct rect
{
    int length;
    int breadth;
}r;// Declartion of struct variable..

int main()
{

    rect r={10,5};// I can miss struct in c++;// Initialisation of r;

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    r.length=20;
    r.breadth=10;
    cout<<"Since r is a data variable it required the dot operator to operate:"<<endl;

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

//Now , create struct variable in heap memory ...
// first   a follow we need the pointer for accessing the heap memory..
//int *p; can' t be used because we not access data variable instead we are calling the structure variable
// so , we need the structure variable there...
struct rect *p;
cout<<"Sturct rect *p will be created inside the stack memory ..."<<endl;
p=(struct rect*)malloc(sizeof(struct rect));
cout<<"Address variable p of struct rect type have address of heap memory where struct rect is stored"<<endl;
cout<<p<<endl;
// int a;
// a=(int*)malloc(sizeof(struct rect));
// cout<<p<<endl;
// this wrong because we asking memory for struct rect which is structure type so , we nee the pointer struct
// type to store the value in it....
p->length=10;
p->breadth=5;
cout<<p->breadth<<endl;
cout<<p->length<<endl;







    return 0;

}
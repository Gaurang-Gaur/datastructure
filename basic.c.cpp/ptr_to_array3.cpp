#include<iostream>
using namespace std;
struct rectangle
{
    int l;
    int b;    
};
int main()

 

{
int *p;
float *p1;
char *p2;
double *p3;
struct rectangle *p4;
cout<<"size of pointer independent of type of pointer:"<<endl;

cout<<sizeof(p)<<endl;
cout<<sizeof(p1)<<endl;
cout<<sizeof(p2)<<endl;
cout<<sizeof(p3)<<endl;
cout<<sizeof(p4)<<endl;

cout<<"but wait:"<<endl;
cout<<sizeof(*p)<<endl;
cout<<sizeof(*p1)<<endl;
cout<<sizeof(*p2)<<endl;
cout<<sizeof(*p3)<<endl;
cout<<sizeof(*p4)<<endl;
cout<<"Now,we are finding the size of value store at that address so, this proof that there declared as different type of pointers:";





    return 0;
}
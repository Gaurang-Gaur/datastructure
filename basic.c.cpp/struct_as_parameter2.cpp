// Call by address....
#include<iostream>
using namespace std;
struct rect

{ int length;
int breadth;
    
}t={10,5};
void fun(struct rect *t1)// *t1 is dereferencing here...
{cout<< " In fun ()"<<endl;
t.breadth++;// 

t.length--;
cout<< "Length:"<<t.length<<"   "<<"breadth:"<<t.breadth<<endl;
t1->length=25;
cout<< "Length:"<<t.length<<"   "<<"breadth:"<<t.breadth<<endl;
}

int main()
{
cout<<"In main function :"<<endl;
cout<<"Length:"<<t.length<<    "    breadth"<<t.breadth<<endl;
fun(&t);//passing the address in call by address;
cout<<" After doing changes in fun ()"<<endl;
cout<<"Length:"<<t.length<<    "    breadth"<<t.breadth<<endl;






return 0;
}
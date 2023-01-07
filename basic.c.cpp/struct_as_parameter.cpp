// uSing structure as parameter ...
#include<iostream>
using namespace std;
struct rect
{
    int length;
    int breadth;
}r={10,5};
void fun( struct rect r1)// call by value 
// here we have to  pass the same structure as we have created in the program... 
// But new struct is created for fun() in the memory of type structure we have passed early in the program
// and the we have created in the program ....
{r.length++;
r.breadth++;
    cout<<"Length:"<<r.length<<"   "<<"Breadth:"<<r.breadth<<endl;

}

int main()
{


printf("length:%d \nbreadth:%d",r.length,r.breadth);cout<<"  "<<endl;
cout<<"Getting value for the fun():"<<endl;
fun(r);







return 0;
}
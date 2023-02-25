#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=10;// This is initialisation of data variable...
    int *p;// This declartion of pointer of integer type...
    // Asterisk used only at that time of declartion and derefrencing ...
    // for , pointer arithematic don't use asterisk,,,
    
    p=&a;// This initalisation of pointer varible ...
cout<<"This is pointer variable using ptr:"<<endl;
    cout<<*p<<endl;

    
    
    cout<<a<<endl;
    cout<<"Checking the value of address in pointer:"<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;






    return 0;
}
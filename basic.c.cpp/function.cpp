#include<iostream>
using namespace std;
int add(int a, int b);
void print();
//It's function declaration it good programing pratice...

// so that we can know which function are used in this program...
int main()
{
    int x,y,z;
    x=10;
    y=5;
    z=add( x, y);// actual parameter with function call...
    cout<<"sum of x and y:"<<z<<endl;
print();


    return 0;
}
// Defination of add function...
int add(int a,int b)// here a & b are formal parameter they will be delete after the function call...

{
    int c=0;
c=a+b;
return c;
}
void print()
{
    
    printf("Good to GO...");
}
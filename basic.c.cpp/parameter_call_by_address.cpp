#include<iostream>
using namespace std;
void swap(int *x,int *y);//In call by address formal parameter are pointer so , i will use derefrencing operator...
int main()

{
int a,b;
a=10;
b=20;

swap(&a,&b);
cout<<a<<endl;
    cout<<b
    <<endl;
    return 0;
}
void swap(int *x , int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;


}
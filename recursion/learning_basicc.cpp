#include<iostream>
using namespace std;
   
 
 void fun(int x){
    if (x>0)
    {
        cout<<x<<endl;
        fun(x-1);

    }
 }
 void fun1(int x){
    if (x>0)
    {

        fun1(x-1);
        cout<<x<<endl;
    }
 }
 
 
 
int main()
{
int x=3;
cout<<"printing was done at calling time"<<endl;

fun(x);
cout<<"calling the function "<<endl;
cout<<"printing was done at returning time"<<endl;

fun1(x);
cout<<"called function 2"<<endl;





return 0;

}
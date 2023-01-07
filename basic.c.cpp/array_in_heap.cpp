#include<iostream>
using namespace std;

int main()
{ 
    int a[5]={1,2,3,4,5};
    int *p;
    int i;

    p=(int*)malloc(5*sizeof(int));
    p[0]=23;
    cout<<"stack array:"<<endl;
    for (int  i = 0; i <5; i++)
    {
        
        cout<<a[i]<<" ";

    }
    cout<<endl;

    cout<<"stack array's address:"<<&a<<endl;
    p[1]=34;
    p[2]=35;
    p[3]=36;
    p[4]=37;
    p[5]=38;
    cout<<"\nHeap array:"<<endl;
    for (int i = 0; i < 5; i++)

    {
         cout<<p[i]<<" ";

    }
    cout<<"heap array at p[5]";
    cout<<p[5]<<endl;
    cout<<'if find the address of p it is stack so it will be constant as it ensign once'<<endl;
    cout<<"during memory allocation of array:"<<&p<<endl;
    cout<<"heap array's address"<<&*p<<endl;
    

     return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int *p,*q;
    int i;
    p=(int *)malloc(5*(sizeof(int)));
    for(int i=0;i<5;i++)
    cin>>p[i];
    q=(int *)malloc(10*(sizeof(int)));
    for ( i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }
    delete [] p;
    p=q;
    q=NULL;

    
    for ( i = 0; i < 10; i++)
    {
        cout<<p[i]<<" ";
    }
    
     return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,5,6,4,35};
   
     int len=7;

     // size of array is 10 but it's length is only 7;
       int index,x;
       cout<<"enter the value of index"<<endl;
       cin>>index;
       cout<<"enter the value of key to add;"<<endl;
       cin>>x;
     for(int i=len; i>index;i--)
     {
        arr[i]=arr[i-1];

     }
     arr[index]=x;
     len++;
     for (int i = 0; i < len; i++)
     {
        cout<<arr[i]<<" ";
     }
     
     return 0;
}
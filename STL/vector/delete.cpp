#include<iostream>
using namespace std;

int main()
{
    // delete..
    int arr[10]={2,4,5,5,7,3,10,52};
    int length=8;
    int ind;
    int i=0;
     cout<<"index"<<endl;

    cin>>ind;

    int x=arr[ind];
    cout<<x<<endl;
    for ( i = ind; i < length; i++){
        arr[i] = arr[i+1];
        
            
            

    }
    length--;
    for (i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
     return 0;
}
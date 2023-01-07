#include<iostream>
using namespace std;
int main()
{
    // int a[10]={1,2,3,4,5,6,7};
    // cout<<a[7]<<endl;
    // // now using for each loop
    // for(int x:a)
    // {
    //     cout<<x<<endl;

    // }
    cout<< "This is the typical example of variable size array:"<<endl;
    cout<<"variable size object can't be intialised in c and c++"<<endl;

           int n;
    cout<<"Enter the value of n for size of array:"<<endl;
        cin>>n;
    cout<<n<<endl;
     int arr[n];
    
     cout<<sizeof(arr)<<endl;
 int i;
 for ( i = 0; i < n; i++)
{cout<<"Enter the value of array:"<<endl;

    cin>>arr[i];
    
   
}


 for(int x:arr)
 {cout<<"values of array:"<<endl;
     cout<<x<<endl;
 }

    




    return 0;
} 
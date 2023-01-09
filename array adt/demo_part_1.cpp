// creation of array in heap.
#include<iostream>
#include<stdlib.h>// for malloc function we this library...
using namespace std;
// first defining the structure.
struct array
{
    int *a;// there the base address of array.
    int size;
    int length;

};
void display(struct array arr)
{
    int i;
    cout<<"element of array stored in heap:\n";
    for (int i = 0; i <arr.length; i++)
    {
        cout<<arr.a[i];
    }
    
}
int main()
{  int n, i;
    struct array arr;// name of structure is array and variable is arr and have three properties as variable
    // for creating we need three things as size , length to access array we need address *a;
    cout<<"enter the size of array you wanted to created in heap:"<<endl;
    cin>>arr.size;
    arr.a=(int *)malloc (arr.size*sizeof(int));// here we are created array in heap of arr.size.
    arr.length=0;// so , there no . element is there...
    //let few element in array;
     cout<<"enter the n of number it should be less than or arr.size "<<endl;
     cin>>n;
     cout<<"enter the elements of array:"<<endl;
     for (int i = 0; i < n; i++)

     {
        cin>>arr.a[i];
        //scanf("%d",&arr.a[i]);

     }
     arr.length=n;
     display(arr);// by passing struct type of variable.
     

    
    
     return 0;
}
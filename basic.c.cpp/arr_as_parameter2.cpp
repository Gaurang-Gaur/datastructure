// Returning array as a parameter...
// We have done  passing an array as the parameter...

// //  Creating an array inside an function returning it's address...

#include<iostream>
using namespace std;
int  *fun(int size)
{
    int *p;
    p=new int [size];// This will return the address of location in heap memory...(or internal pointer)
//and store in p , so ,we need pointer variable to store that returning internal pointer,,,
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
        
    }
    return p;// It will return the address of the 
}
int main()
{
int *ptr, size=5;
ptr=fun(size);
for (int i = 0; i <size; i++)
{
    cout<<ptr[i]<<endl;
}









return 0;

}




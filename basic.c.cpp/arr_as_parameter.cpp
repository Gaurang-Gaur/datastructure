// learning array as the parameter ...
#include <iostream>
using namespace std;
void fun(int A[], int m)// or void fun (int *A, int m) 
// Array passed by address... // It will consider as the internal pointer ...
// Now the question araise the how the function fun will know that what is the size of array for this we
// pass the int m as another variable to the function to know the size of the array...

{ // {for(int y:A)
    // {
    //     cout<<y<<endl;
    // }// We can not use for each loop on the pointer ... otherwise it will throw an error...
    // 
    A[0]=100;
    // here we are change the array in fun function will it reflect in the main function array...
    // yes , Because it have the internal pointer that point on the array of the main()...
    for (int i = 0; i < m; i++)
    {

        cout << A[i] << endl;
    }
    cout<<"Same address as the internal pointer is pointing to the main() array:"<<A<<endl;
}
int main()
{

    int a[] = {2, 4, 6, 8, 10};
    int n = 4;
    cout<<"Address of the array:"<<&a<<endl;
    for (int x : a)
    {
        cout << x << " "<<endl;
    }

    cout << "size  of the array as the internal pointer in this :" << endl;
    cout<<"print until 4 index:"<<endl;
    fun(a,n);// Function call ,,,
    cout<<a[0]<<endl;
    cout<<"Size of array:"<<endl;
    cout << sizeof(a) << endl;

    return 0;
}
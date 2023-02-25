//Pointer to an array...
#include<iostream>
using namespace std;
int main()
{

int a[5]={1,2,3,4,5};
int *p;// Declaration of pointer,,,
p=a;//Where is ampersand ?
//While initialisation of pointer to array we do not need ampersand 
//because a itself is the starting pointer to
// an array...
//or name of array is itself starting address of array...
//or p=&a[0];
cout<<"Using 'p'as a pointer :"<<endl;
for ( int i = 0; i < 5; i++)

{

    cout<<p[i]<<endl;

}
cout<<"Using 'a' as the starting address of array:"<<endl;
for (int j = 0; j < 5; j++)
{
    cout<<a[j]<<endl;

}
cout<<"IN case of array ,pointer act as the name of array:"<<endl;
cout<<"Remember That whenever you declared anything in program it store in stack memory:"<<endl;
cout<<"Let us create a array in Heap:"<<endl;












    return 0;
    
}
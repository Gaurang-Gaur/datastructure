//Creating an array in heap:
#include<iostream>
using namespace std;
int main()
{
int *p;//Declaration of pointer:
p=(int*)malloc(5*sizeof(int));
cout<<"Memory address of heap memory:"<<endl;

cout<<p<<endl;
//or in c++ we can use:
//p=new int[5];
// Always remember that malloc function return void pointer so we have to typecaste it into int
// void pointer have the start address of the heap memory where the array is created...
//This in initialisation of pointer but we are not using the ampersand because it's already giving address of memory..
// p is stack while malloc providing memory in heap...
cout<<"Input value in array:"<<endl;
for (int i = 0; i < 5; i++)
{
    cin>>p[i];// we does not declare array because pointer interchangable use as the array name...
}
cout<<"Output of value store in heap:"<<endl;

for (int j = 0; j < 5; j++)
{
    cout<<p[j]<<endl;
}

// It's good programing pratice that you have delete the heap memory...
delete [ ] p;
//let check if it's delete or not...

cout<<p<<endl;
cout<<"here p still having the address of heap memory because p is in stack memory so it's not delete but"<<endl;
cout<<"but when we go the address it show garbage value thus it mean it's deleted:"<<endl;

for (int j = 0; j < 5; j++)
{
    cout<<p[j]<<endl;
}
// in c++;
//free(p);
// in c;
// After the execution of program heap memory erase automatically...











    return 0;

}
// Call by address....
#include<iostream>
using namespace std;
struct rect

{ int a[7];// I have created an array inside an structure,,,
int breadth;
    
};
void fun(struct rect *t)// Formal parameter is here ...

{
cout<<t->a[0]<<endl;
}
int main()
{

struct rect r={{2,1,2,3,4,5,6},34};
fun(&r);




return 0;
}
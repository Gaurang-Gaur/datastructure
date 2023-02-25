#include<iostream>
using namespace std;
int add(int a , int b);// declaration of function or protype of function....
int main()
{int a, b,c=0;
a=10;
b=20;
c=a+b;
c=add(a,b);
cout<<"Sum of a and b:"<<c<<endl;
cout<<a<<endl;


return 0;
    
}
int add(int a, int b)
{

    a++;
    printf("here, program is in add function:");
printf("%d\n ",a);
    return 0;
}

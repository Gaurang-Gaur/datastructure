#include<iostream>
using namespace std;
int main()
{
int a=10;//Date variable
int *p;//address variable
int &r=a;//reference variable It must be initialised...
//Now r means a always in this program it's the nickname of a;

cout<<r<<endl;
cout<<a<<endl;
a=34;
cout<<r<<endl<<a<<endl;//It does not consume unother memory...
int b=30;
r=b;
cout<<r<<endl<<a<<endl;








    return 0;
}
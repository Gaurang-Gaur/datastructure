#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int a;
    double b;
    char x;
    string str;

}gaur;
namespace gaurang{
    int val =45;
int getval()
{
    return val*10;

}
}
int main()
{int val=45;
// double val=10.0;
cout<<gaurang::val<<endl;// two declaration of same variable...
cout<<gaurang::getval()<<endl;
gaur.str="Gaurang";
 gaur.a=43;
 gaur.b=435.00;
 gaur.x='a';
 cout<<gaur.str<<endl;
    
     return 0;
}
// int datatype{
    
//     // create the data type where i can store multiple data type by user define ... so the ans is struct ....
// //now i am going the struct variable here...
 
 
// }
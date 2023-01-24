#include<bits/stdc++.h>

#include<iostream>
using namespace std;

struct node{
    int a;
    double b;
    string str;
    char x;
// learn how to make the constructor in the program...
   node(str_,a_,b_,x_)
{
str=str_;
a=a_;
b=b_;
x=x_;
}



}








};// node become itself a datatype so it called the self data type here...
int main()
{
    node nodevar;// first structure name and then the name of the structure variable...
// here you can see that the node is acting a datatype for declaration of nodevar, variable...
//     nodevar.str="string of node for node.var";
//     nodevar.b=34.5;
// nodevar.x='b';
// nodevar.a=46;
// cout<<nodevar.str<<endl;

node nodevar=new node('Gaurang',34,54,'a');




return 0;
}


#include<iostream>
using namespace std;
void swap(int &x ,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{int a=10,b=20;
swap(a,b);
cout<<"value of a:"
     <<a<<endl;
cout<<"value of b:"
    <<b<<endl;

    return 0;


}
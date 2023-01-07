# include<iostream>
#include<stdio.h>
using namespace std;
// here we are going to define the structure for this program.
// defination of structure does not consume any memory until we you declare any variable...
// how should it look like ...
int main()
{
struct  rectangle// It's local structure in this 
// This so structure so look like to perform it's .
{
    int length;
    int breadth;
    char A;
};// I can declare the variable here;
// Total size of the structure 8 byte...


struct rectangle s;
s.breadth={10};
s.length={32};
cout<<s.length<<endl;
cout<<s.breadth<<endl;
cout<<"Not a good pratice:"<<endl;// hence cantonation is allowed in c++ 
// even between string and integer...

cout<<sizeof(s.length)<<endl;
cout<<sizeof(s)<<endl;
printf("%ld",sizeof(s));//Why it's taking 12 byte of memory ?
// even if char is only of 1 byte but Due to padding it will take 4 byte(nearest greatest no.)
// so , that it's easier for computer proccessor to read the structure and execute faster ..
// but doing usage it will take / use only 9 bytes...
// here we are defining the structure in coolest way than ever here.








    return 0;
}

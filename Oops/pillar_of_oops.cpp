#include<iostream>
using namespace std;


class Student{

string name;
int data;
int rollno;
public:

int getdata(){
    return this->data; // if we wanted to address same class inside the same class then we use the this operator...
    
}

};



int main()
{
    Student first;

    cout<<"we are learning encapulsation"<<endl;
    

     return 0;
}
// we have done the encapulasation

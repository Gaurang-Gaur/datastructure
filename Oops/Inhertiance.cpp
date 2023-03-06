#include<iostream>
using namespace std;

class Human{

public:
int height;
int weight;
int age;


};

class Male:public Human{

public:
    string name;
     
     string color;
     void sleep(){
        cout<<"male is sleeping"<<endl;

        
     }
     void setWeight(int w){
        this->weight=w;
     }

void setString(string s){
    this->name=s;
}

};


int main()

{
   Male obj1;

obj1.setString("Gaurang Gaur");
cout<<obj1.name<<endl;

   obj1.sleep();
   obj1.setWeight(35);
   cout<<obj1.weight<<endl;
   
cout<<"this running"<<endl;

   
    
    
     return 0;
}
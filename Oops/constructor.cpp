#include<iostream>
using namespace std;

class Hero{
     public:
     int health;
     char level;


     Hero(){
          cout<<"Default constructor:"<<endl;
          
     }
// now this constructor become the new constructor of this class 
     Hero(int health,char level){
          this->health=health;
          this->level=level;
          // cout<<health<<endl;
          
     }
     void print(){
          cout<<"this print function in class"<<endl;
          cout<<level<<endl;
          cout<<health<<endl;
          
          

          
     }
};
int main()
{
     // Hero boy;

     Hero boy(45,'A');
boy.print();

     Hero R(boy);// this how we copy inside the constructor to form the new constructor...

     R.print();

    
     return 0;
}
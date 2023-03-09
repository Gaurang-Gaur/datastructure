#include<iostream>
using namespace std;
   
 class a{
     public:
     void func(){
          cout<<"we using this"<<endl;

     }
 };
 class b:public a{
     public:
     void fun2(){
          cout<<"using the function2"<<endl;

     }
 };
class d{
     public:
     void funcd(){
          cout<<"this function d"<<endl;

     }
};

class c:public a,public d{
     public:
     void func3(){

cout<<"using the function c hybrid"<<endl;

     }
};


 
 
 
int main()
{
     a one;
     one.func();
     cout<<"finish the function a of class a"<<endl;


     b sec;
     sec.fun2();
     sec.func();
     cout<<"finish the function b"<<endl;

     c thir;
     cout<<"finishing the function c"<<endl;
     
     thir.funcd();
     thir.func();
     thir.func3();




return 0;

}
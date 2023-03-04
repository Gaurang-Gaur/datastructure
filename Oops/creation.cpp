#include <iostream>
using namespace std;

class Hero
{
public:
     int health;
     char ch;
     Hero()
     {
          cout << "this constructor" << endl;
     };
};

struct ne
{
     int a;
     char b;

} s;

int main()
{

     cout << sizeof(Hero) << endl;
     // static allocation of memory here.

     Hero h1;

     // Dynamic alloaction of OBJECt here.
     
     Hero *b=new Hero;
     
     (*b).ch='B';
        
        cout<<(*b).ch<<endl;
        



     cout << sizeof(h1) << endl;

     cout << sizeof(h1) << endl; // size of class will be 8 because of padding and greed alignment because to increase
     //     performance of fetching by processor will allocate 4-4 byte memory for fast access in one cycle so , it
     // save time of processor...

     cout << sizeof(s) << endl; // same go for the struct also ,

     return 0;
}
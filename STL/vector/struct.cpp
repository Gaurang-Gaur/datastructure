#include<iostream>
using namespace std;
struct complex{
    int real ;
    int img;

};

struct complex addcomplex( struct complex a, struct complex b){
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;

return c;



}


int main()

{
    struct complex c1,c2,c3;
    c1.real =2;
    c1.img=34;
  c2.real=3;
  c2.img=34;
  c3=addcomplex(c1,c2);
  printf("%d + i%d",c3.real , c3.img);

    
     return 0;
}
#include<iostream>
using namespace std;
struct complex{
    int real ;
    int img;

};

void addcomplex( struct complex *a, struct complex *b){

a->real=a->real+b->real;
a->img=a->img+b->img;





}


int main()

{
    struct complex c1,c2;
    c1.real =2;
    c1.img=34;
  c2.real=3;
  c2.img=34;
  addcomplex(&c1,&c2);
  printf("%d + i%d",c1.real ,c1.img );

    
     return 0;
}
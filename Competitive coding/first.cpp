#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;


using namespace std;


int main()
{
//    int x=0.3;
   double x=0.3*3+0.1;
   printf("%0.20f\n ", x);
   double y=1;
   if(abs(x-y)<1e-9)
   {
    cout<<"x and y are equal:"<<endl;
   }
if(x==y){
    cout<<"x and y are equal using compartors '=='"<<endl;

}else


    cout<<"x and y not  are equal using compartors '=='"<<endl;
    return 0;
}
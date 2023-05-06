#include<iostream>
#include<math.h>
using namespace std;
   
 
 
 
 
int main()
{
int i=0, ans=0;
int n;
cin>>n;
int dig;

while(n!=0)
{
dig=n%10;
if(dig==1){
    ans=ans+pow(2,i);
}
n=n/10;
i++;
}
cout<<ans<<endl;


return 0;

}
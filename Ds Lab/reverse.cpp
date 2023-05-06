#include<iostream>
using namespace std;
   
 
void swap(int *a, int *b){
    int *temp=0;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
 
 
 
int main()
{

// string s="hello";
int e[6]={3,4,1,5,4,6};
int o[5]={3,1,5,7,8};
int i=0;
cout<<"even index array:"<<endl;
while(i<6){
if(i+1<6)
{
    // cout<<"run";
    swap(e[i],e[i+1]);



}
i=i+2;
}
i=0;
while(i<5){
    if(i+1<5){
        swap(o[i],o[i+1]);
    }
    i=i+2;
}

for(int i=0;i<6;i++){
    cout<<e[i]<<" ";
}
cout<<"\n";
cout<<"odd index array:"<<endl;
for(int i=0;i<5;i++){
    cout<<o[i]<<" ";
}


// reverse(s);



return 0;

}
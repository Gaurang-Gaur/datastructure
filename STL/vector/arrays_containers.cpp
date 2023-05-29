#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    
//     array<int,10>arr;
    

// arr.fill(10);//->{10,10 ---10};
// // arr.at(index);
// for(int i=0;i<5;i++)
// {
//     cout<<arr.at(i)<<endl;// here array is object and at is an method....
// }
// // iterators 
// // begin (), end(),rbegin(),rend()


array<int ,5> arr={1,3,4,5,6};
// for (int  i = 0; i < 5; i++)
// {
//            cout<<arr[i]<<endl;
// }

for(auto it: arr.begin(); it!=arr.end(); it++)
{cout<<*it<<" ";

}
for(auto it :arr.rbegin();it!=arr.rend();it++)
{
    cout<<*it<<" ";
}




    // cout<<sizeof(arr)<<endl;
    





























     return 0;









}
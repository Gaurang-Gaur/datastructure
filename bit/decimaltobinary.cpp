
// #include<iostream>
// #include<math.h>

// using namespace std;
   
 
 
 
 
// int main()
// {
//    int num;
//    cout<<"enter the number to convert to binary:"<<endl;
//    cin>>num;
//    int ans=0, i=0;

//    while(num!=0)
//    {
    

//        int bit=num&1;
//        ans=((bit*pow(10,i))+ans);
//        cout<<"value of answer:";
//        cout<<ans<<endl;
//        num=num>>1;
        
//         i++;
    
//    }
// //    cout<<pow(10,i)<<endl;
// cout<<ans<<endl;




// return 0;

// }

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}
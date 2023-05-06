#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x

using namespace std;

int main(){
   cout<<"Hellow"<<endl;
  
   int a[4]={3,5,1,2};
   sort(a,a+4);
   rep(i,0,4){
      cout<<a[i]<<" ";

   }

   sort(a,a+4 ,greater<int>());

   cout<<"runin"<<endl;

   rep(i,0,4){
      cout<<a[i]<<" ";
   }
   // cout << sqrt(25);
   cout<<"hello world again"<<endl;

   
    return 0;
}

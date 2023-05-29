#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, int> map1;

    

    map<int, int>::iterator it = map1.begin();
    int n;
    // cout<<n<<endl;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    pair<map<int,int>::iterator ,bool>r;
    r.second=false;
    
    int key;
    int value;
    for(int i=0;i<n;i++){
        cin>>key>>value;
        r=(map1.insert({key,value}));
    }
    

    for (it = map1.begin(); it != map1.end(); it++)
    {
        cout << it->first;
        cout << "\t : \t";
        cout << (it->second) << endl;
    }

// cout<<map1.find("Gaurang")<<endl;
    

    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<string, int> map1;

    

    map<string, int>::iterator it = map1.begin();
    int n;
    // cout<<n<<endl;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    string key;
    int value;
    for(int i=0;i<n;i++){
        cin>>key>>value;
        map1.insert({key,value});
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
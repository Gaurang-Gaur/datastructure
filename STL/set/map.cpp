#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main()
{
    // map is associative array eg . associative with there index we can make customize indices
    // map<datatype of key, datatype of value>;

    map<string, int> map1;
    // map<string, string>
    // map<int, int>
    // map<float, float>
    // map <char,char>

    // map<string, int>

    map1["Gaurang"] = 66;
    // {key , value}
    //{"GAurang",66};
    map1["darshit"] = 54;
    // now to access the map we need the iterator
    // to print the element of elements
    map<string, int>::iterator it = map1.begin();
    // to access the element we need the arrow operator
    // in map pair we call the key first
    cout << it->first << endl;  // this will give gaurang
    cout << it->second << endl; // iterator plus ++;
    cout << "Using the loops" << endl;
    for (it = map1.begin(); it != map1.end(); it++)
    {
        cout << it->first;
        cout << "\t : \t";
        cout << it->second << endl;
    }
    cout << "After using insert function" << endl;

    // for(it=map1.begin();it!=map1.end();it++){

    // }
// let changer here
    map1.insert({"ashish", 36});
    map1.insert({
        "anshul",
        27,
    });
    for (it = map1.begin(); it != map1.end(); it++)
    {
        cout << it->first;
        cout << "\t : \t";
        cout << it->second << endl;
    }
    map<int, string> map2;
    // Note : map are just dictionary of python
    // Maps in C++ actually work just like a Dictionary when the datatype of all elements in it is the same.
    //  It acts like a container that stores values which are indexed with the help of keys.
    // Each value in a particular container is associated with a unique key.

    map2 = {
        {1, "India"},
        {2, "Nepal"},
        {3, "Sri Lanka"},
        {4, "Myanmar"}};

    map<int , string>::iterator it2 = map2.begin();
    // map2.clear();
    cout << "Generally Method like in python to use maps" << endl;
    for (it2 = map2.begin(); it2 != map2.end(); it2++)
    {
        cout << it2->first;
        cout << "\t : \t";
        cout << it2->second << endl;
    }
    // cout<<3<<endl;
    return 0;
}
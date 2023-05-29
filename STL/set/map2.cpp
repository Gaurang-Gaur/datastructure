#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, int> map1;

    map1 = {
        {1, 1},
        {2, 2},
        {4, 3},
        {4, 4}};

        // map can not have duplicate just like in python dictionary can't have duplicate key
        

    map<int, int>::iterator it = map1.begin();

    for (it = map1.begin(); it != map1.end(); it++)
    {
        cout << it->first;
        cout << "\t : \t";
        cout << (it->second) << endl;
    }
map1.find(1);



    return 0;
}
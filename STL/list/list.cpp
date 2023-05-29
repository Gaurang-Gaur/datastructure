#include <iostream>
// #include<>
using namespace std;
#define pb push_back
#include <list>

int main()
{
    list<int> mylist;
    mylist.pb(1);
    mylist.pb(2);
    mylist.pb(3);
    mylist.pb(5);
    for (int x : mylist)
    {
        cout << x << "->";
    }
    cout << "NULL" << endl;
mylist.pop_back() ;
    cout << "first element  " << mylist.front() << endl;
    // cout << "delete elememt " <<(mylist.pop_back()) << endl;
    for (int x : mylist)
    {
        cout << x << "->";
    }
    cout<<endl;
    mylist.remove(3);
    for (int x : mylist)
    {
        cout << x << "->";
    }
    list<int> ::iterator itr;

    itr=mylist.begin();
    advance(itr,2);
    mylist.insert(itr,5);
    cout<<endl;
    for (int x : mylist)
    {
        cout << x << "->";
    }
    mylist.reverse();
    cout<<"reversing"<<endl;
    for (int x : mylist)
    {
        cout << x << "->";
    }
    mylist.sort();
    cout<<"sorting"<<endl;
    for (int x : mylist)
    {
        cout << x << "->";
    }
    list <int > l1,l2;
    l1.pb(2);
    l1.pb(4)    ;
    l1.pb(6);
    l1.pb(8);
    l2.pb(1);
    l2.pb(3);
    l2.pb(5);
    l2.pb(7);
    cout<<"Swaping of two list"<<endl;
    l1.swap(l2);

    for (int x : l2)
    {
        cout << x << "->";
    }
    return 0;
}
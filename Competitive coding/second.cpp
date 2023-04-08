#include <iostream>
#include <vector>

using namespace std;

void iterators(vector<int> g)
{

    cout << "Inside the iterator function" << endl;
    for (int i = 0; i <= 3; i++)
    {
        cout << g[i] << endl;
    }
    // using begin and rebegin
    // cout<<g.at(3)<<endl;
    cout << "Using the iterators:" << endl;
    // int i;
    cout << "Remember that the begin () method or iterator will return the iterator pointing to element to access those element we have to use the dereferencing operators:" << endl;
    for (auto i = g.begin(); i < g.end(); ++i)
    {

        cout << *i << endl;
    }
    
}

int main()
{
    vector<int> v;

    for (int i = 0; i <= 5; i++)
    {
        v.push_back(i);
    }
    cout << "size of vector:" << v.size() << endl;

    for (int i = 0; i <= 5; i++)
    {
        cout << v[i] << endl;
    }
    v.resize(4);
    cout << "size of vector:" << v.size() << endl;
    cout << "At given position in vector:" << v.at(0) << endl;
    iterators(v);
    // cout<<v.begin()<<endl;

    return 0;
}
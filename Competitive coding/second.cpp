#include <iostream>
#include <vector>
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)


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
void macro(vector<int > m){
    m.resize(15);
    cout<<"Using the macros in code"<<endl;
    
    rep(i,11,15){
          m.pb(i);
    }
    rep(i,0,14){
        cout<<m[i]<<endl;
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
    v.pb(3645);
    v.resize(8);
    cout << "size of vector:" << v.size() << endl;
    cout << "At given position in vector:" << v.at(0) << endl;
    iterators(v);
    macro(v);

    // cout<<v.begin()<<endl;

    return 0;
}
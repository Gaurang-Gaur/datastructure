#include <iostream>
using namespace std;

int fact(int n)
{

    if (n == 1 || n==0)
    {
        return 1;
    }
    else
    {

        n = n* fact(n - 1);

        return n;
    }
}

int main()
{
    int n=0;
    cout << "enter the value of n:" << endl;

    n=5;
    cout<<"working out"<<endl;

    int ans=0;
    ans = fact(n);

    cout << ans << endl;

    return 0;
}
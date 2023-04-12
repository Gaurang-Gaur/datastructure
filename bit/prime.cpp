#include <iostream>
using namespace std;

int isprime(int n)
{
    int i = 2;
    while (i < n)
    {
        
        if (n % i == 0)
        {
            return 0;
        }
        else
            i++;

    
    }
    return 1;
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    // isprime(n);
    if (isprime(n))
    {
        cout << "prime no:" << n << endl;
    }
    else
        cout << "Not prime NO:" << n << endl;

    return 0;
}
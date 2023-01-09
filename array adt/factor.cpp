#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << "value of a:" << a << endl;

    cout << "factor of a:" << endl;
    for (int i = 2; i < a; i++)
    {

        if (a % i == 0)
        {
            cout << i << endl;
        }
       
    }
     int b;
        cin >> b;
        cout << "value of b:" << b << endl;
        cout << "factor of b:" << endl;
        for (int i = 2; i < b; i++)
        {

            if (b % i == 0)
            {
                cout << i << endl;
            }
        }
        int i=2;
        int j;
        if(a>b)
        {
            j=a;
        }
        else
        j=b;
        for (int  i = 2; i <j; i++)
        {
            
            if (b % i == 0 &&a%i==0)
            {
                cout << i << endl;
            }


            
        }
        cout<<"Highest  common factor :"<<i;
        
        return 0;
    }
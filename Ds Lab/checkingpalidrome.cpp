#include <iostream>
using namespace std;

int main()
{
    string s = "Ga;gaur@";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 122)
        {

            if (s[i] >= 65 && s[i] < 97)
            {
                s[i] = s[i] + 32;
            }
            

        }
        else
        {
            
        }
        cout << s[i];
    }

    return 0;
}
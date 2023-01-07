#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i] == 0 || b[i] == 0)
            {
                count = 0;
                continue;
            }
            else
                count++;
        }
        cout << count << endl;
    }
    return 0;
}

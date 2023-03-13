#include <iostream>
using namespace std;

void input(int *a, int n)
{
    cout << "Enter the value of array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void display(int *a, int n)
{
    cout << "Value of array are:" << endl;

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}

void bubble(int *a, int n)
{
    // here we have to loop one for passing and one for comparsion

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1-i; j++)

        {
            // optmise bs n-i-1;
            int temp = 0;
            
            // cout<<a[j]<<endl;
            // cout<<a[j++]<<endl;

            if (a[j] > a[j+1])
            {
                // cout << "running" << endl;


                temp = a[j];
                a[j] = a[j+1];// I can't use j++ because it have same value as the j in case of array...
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n = 0;
    cout << "enter the value of n:" << endl;
    cin >> n;
    int a[n];

    input(a, n);
    display(a, n);
    bubble(a, n);
    printf("\n");
    display(a, n);

    return 0;
}
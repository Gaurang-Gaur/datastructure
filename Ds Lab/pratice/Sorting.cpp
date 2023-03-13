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
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)

        {
            // optmise bs n-i-1;
            int temp = 0;

            // cout<<a[j]<<endl;
            // cout<<a[j++]<<endl;

            if (a[j] > a[j + 1])
            {
                // cout << "running" << endl;

                temp = a[j];
                a[j] = a[j + 1]; // I can't use j++ because it have same value as the j in case of array...
                a[j + 1] = temp;
                flag = 1; // reducing the no. of passing
            }
            if (flag == 0)
            {
                break;
            }
        }
    }
}

void insert(int *a, int n)
{

    // here in insertion sort we require two loops one for the unsorted list side (RHS) and sorted list side
    // we know the length of unsorted listed side as it start from index 1 and end at index n-1 => we use the for loop
    // but in sorted list we don't know the no. but we know the condition => we use the while loop

    for (int i = 1; i < n; i++)
    {
        int temp = 0; // created to compare it with sorted list side elements
        temp = a[i];
        int j = 0;
        j = i - 1;
        while (j >= 0 && a[j] > temp) // if this condition is true then we perform the swifting...

        {
            a[j + 1] = a[j];

            j--;
        }
        a[j + 1] = temp; // then we change the temp variable the continus checking in sorted list.
    }
}
void swap(int a, int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
void selection(int *a, int n)
{

    // here we use two loops one for pass and other loop for the finding the mininum elementss...
    for (int i = 0; i < n - 1; i++)
    {
        // let a min index as starting element;
        int min = i;

        // for finding the mininum we use the second loop start with j=1 because we have to compare it with other to find the mininum element
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        // after completion of this loop min have the min element index for unsorted subarray...
        
        if (i != min)
        {
            swap(a[i],a[min]);
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
    // bubble(a, n);
    // insert(a,n);
    selection(a, n);
    insert(a, n);
    printf("\n");
    display(a, n);

    return 0;
}
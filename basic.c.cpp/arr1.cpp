// Basic of array using c++;
// Name : Gaurang Gaur,
// Date:17/08/22;
#include <iostream>
using namespace std;
int main()
{
    int a[5];
    a[0] = 23;
    a[1] = 34;
    a[2] = 24;
    a[3] = 21;
    a[4] = 25;
    cout << sizeof(a[0]) << endl; // here we, use endline to get in new line easily...
    cout << "Hence , the size of array elements is 4:" << endl;

    cout << a[2] << endl;
    cout << a[3] << endl;
    printf(" %d \n ", a[3]);
    // Using printf() in c++;
    // Learn the initialisation using the c++;
    // Imp.note:We can not overwrite in c++ and c but we can do so in python.
    int b[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << sizeof(b) << endl;
    // If we left we value left in array so, the compiler auto initial them with zero (0)
    // Ex
    int c[5]={3,3,2};
    cout<<c[3]<<endl;
    cout<<c[4]<<endl;
    cout<< "How you can inital the whole array with zero..."<<endl;

 int  d[10]={0};
    cout<<d[9]<<endl;
    cout<<" Let us check that all elements of d array is zero or not..."<<endl;

    int i;
    for ( i = 0; i < 10; i++)
    {
        cout<<d[i]<<endl;
    }

    
    

    return 0;
}
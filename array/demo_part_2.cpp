// easy part to understand array in structure
#include<iostream>
using namespace std;
// data type in struct
// struct name is array
// variable is arr
struct array {
    int a[20];
    int size;
    int length;

};
void display(struct array arr )
{
for (int  i = 0; i < arr.length; i++)
{
    cout<<arr.a[i]<<endl;
}

}
int main()
{
    struct array arr={{2,4,6,8,10},20,5};

    display(arr);
     return 0;
}
#include <iostream>
using namespace std;
struct array
{
    int a[20];
    int size;
    int length;
}; // here i have define the structure of the array with size 20.

void display(struct array arr)
{
    int i;
    printf("elements are...\n");
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

void append(struct array *arr, int x)
{
    // if are directly access it we use dot operator but we access indirectly then we use the arrow operator...
    if (arr->length < arr->size)
    {
        arr->a[arr->length++] = x;
    }
}
void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <=arr->length)// we are using equal to because in the last index become equal to length it's rare...
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[index] = x;
        arr->length++;
    }
}
int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7, 8, 9, 10}, 20, 9};
    // append(&arr,100);
    insert(&arr, 9, 29);
    display(arr);
    cout << " \n"
         << arr.length;
    return 0;
}
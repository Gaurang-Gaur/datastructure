#include <stdio.h>
void display(int arr[], int len)
{
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
}
int rbinsearch(int arr[], int l, int h, int key)
{
    int mid ;
    // int i = 0;
    mid = (l + h) / 2;
    if (l <= h)
    {
        if (mid == key)
        {
            return mid;
        }
        else if (mid < key)
        {
            rbinsearch(arr, mid + 1, h, key);
        }
        else if (mid > key)
        {
            rbinsearch(arr, l, mid - 1, key);
        }
    }
    else
        return -1;
}
int main()
{
    int size = 15;
    int len = 15;
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    display(a, len);
    int ind = 0;

    ind = rbinsearch(a, 0, 14, 1);
    printf("\n%d", ind);

    return 0;
}
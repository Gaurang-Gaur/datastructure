#include <stdio.h>
void display(int arr[], int len)
{
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
}
int binsearch(int arr[], int l, int h, int key)
{
    int mid = 0;
    int i = 0;
    // printf("%d",mid);
    if (l <= h)
    {
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] < key)
            {
                l = mid + 1;
            }
            else if (arr[mid] > key)
            {
                h = mid - 1;
            }
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
    int key = 0;
    printf("\nenter the key:\n");
    scanf("%d", &key);
    ind = binsearch(a, 0, 14, key);
    if (ind == 15)
        printf("\n element not found");
    else
        printf("\n%d", ind);

    return 0;
}
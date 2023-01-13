#include <stdio.h>

void display(int *a, int len)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
}
void swap(int *a, int *b)
{

    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

    void oneside(int *a, int len)
    {
        int i = 0;
        int j = len-1;

        
        while (i < j)
        {
            while (a[i] < 0)
            {
                // printf("%d  ", i);
                i++;
            }
            while (a[j] >= 0)
            {
                // printf("%d  ", j);
                j--;
            }
            if (i < j)
            {
               
              
                swap(&a[i], &a[j]);// we use & here because in this display(a);"array (a)" having already as the address in itself but here we are passing 
                // values of array we need to use & here.
                // printf("%d",a[i]);
                // printf("%d",a[j]);
            }
        }

        display(a, 10);
    }

    int main()
    {
        int a[10] = {-2, 3, -53, 2, -35, 89, -98, -87, -44, 10};
        // display(a, 10);
        oneside(a, 10);
        printf("\n");
        // int ai = -2;
        // int b = 3;
        // swap(ai, b);
        // display(a, 10);
        return 0;
    }
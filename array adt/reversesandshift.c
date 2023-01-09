#include <stdio.h>

void revwithauxi(int *a, int len)
{
    int b[5];
    int i, j;
    for (i = len - 1, j = 0; j < len; i--, j++)
    {
        b[j] = a[i];
    }
    for (i = 0; i < len; i++)
    {
        printf("%d  ", b[i]);
    }
}
// void swap(int *a, int len)
// {

//     for (i = 0; i < len; i++)
//     {
//         printf("%d  ", a[i]);
//     }
// }

void leftshift(int *a, int len)
{
    int x = a[0];
    for (int i = 0; i < len; i++)
    {

        a[i] = a[i + 1];
    }
    a[len - 1] = 0;
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", a[i]);
    }
}


void leftrotate(int *a, int len)
{
    int x = a[0];
    for (int i = 0; i < len; i++)
    {

        a[i] = a[i + 1];
    }
    a[len - 1] = x;
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", a[i]);
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    revwithauxi(a, 5);
    // printf("inside main() \n");

    printf("\n");

    //  swap(a,5);
    printf("\n Left shift :\n");

    leftshift(a, 5);
    printf("\n Left rotate\n ");
    leftrotate(a, 5);
    printf("\n Inside the main function :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n It mean's that the array is passed by call by refrence it values are getting modified by the calls.\n ");

    return 0;
}

#include <stdio.h>

int get(int a[], int index)
{

    printf("%d", a[index]);

    return 0;
}

int set(int a[], int index, int key)
{

    a[index] = key;

    return 0;
}

void display(int *a, int len)
{
    int i = 0;
    for (int i = 0; i < len; i++)
    {
        printf("  %d", a[i]);
    }
}
int max(int *a, int len)
{
    int max = a[0];
    for (int i = 0; i < len; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int min(int *a, int len)
{
    int min = a[0];
    for (int i = 0; i < len; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
int sum(int *a, int len)
{
    int sum;

    for (int i = 0; i < len; i++)
    {
        sum += a[i];
    }

    return sum;
}
int rsum(int a[],int len){
    if(len<1){
        return 0;
    }
    else
    return rsum(a,len-1)+a[len];
}

int main()
{
    int len = 5;
    int size = 5;

    int a[5] = {0, 24, -234, 4, 5};
    get(a, 3);
    printf("\n");
    set(a, 3, 5);
    display(a, 5);
    int mx, min2;
    mx = max(a, 5);
    printf("\n");

    printf("%d", mx);

    min2 = min(a, 5);
    printf("\n");

    printf("%d", min2);
    printf("\nsum of whole array is:");
    int su;
    su = sum(a, 5);
    printf("\n %d", su);
    int rsu;
    rsu = rsum(a, 4);
    printf("\n %d", rsu);

    return 0;
}
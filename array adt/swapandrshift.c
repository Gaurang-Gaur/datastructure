#include <stdio.h>

void swap(int *a, int len)
{
    int k, j;
    k = 0;
    j = len - 1;
    int temp;
    while (k < j)
    {
        // printf("\n value of k:%d",k);
        // printf("\n value of j:%d",j);
        temp = a[k];
        a[k] = a[j];
        a[j] = temp;
        k++;
        j--;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
}
void rshift(int *a, int len)
{
    int x=a[len-1];

    for (int i = 0; i < len; i++)
    {

        a[len-i]=a[len-1-i];

    }
    a[0]=0;
    for (int i = 0; i < len; i++)
    {
        printf("%d ",a[i]);
    }
    
}
void rrotate(int *a,int len){
    int x=a[len-1];

    for (int i = 0; i < len; i++)
    {

        a[len-i]=a[len-1-i];

    }
    a[0]=x;
    for (int i = 0; i < len; i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int a[5] = {11, 12, 13, 14, 15};
    swap(a, 5);
    printf("\n ");
    rshift(a, 5);
    printf("\n ");
    rrotate(a,5);
    return 0;
}
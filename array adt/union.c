#include <stdio.h>
void display(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void uni(int *a, int *b)
{
    int c[10] = {0};
    int i = 0, k = 0;
    for (; i < 5; i++)
    {
        c[k++] = a[i];
    }
    int count=0;
    for(int j=0;j<5;j++){
       for(int k=0;k<5;k++)
       {
        
            if(c[j]!=b[k]){
                // count++;
                // printf("%d",count);
                c[i++]=b[k];
            }
       }
    }

    display(c, 10);
}

int main()
{
    int a[5] = {1, 2, 3, 5, 11};
    int b[5] = {13, 15, 155, 11, 516};
    uni(a, b);
    return 0;
}
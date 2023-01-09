#include<stdio.h>
int main()
{int a[6]={2,3,2,4,5,3};
int i;
 
 for ( i = 0; i < 6; i++)
 {
    if(a[i-1]<a[i]&&a[i]>a[i+1])
    {

        printf("\n%d",i);
    }
 }
 
 printf(" \n no local maxima");
 




    return 0;

}
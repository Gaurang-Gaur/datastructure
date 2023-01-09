#include<stdio.h>

 void issort(int *a,int len){
    for(int i=0;i<len;i++)
    {
        if(a[i+1]>a[i]){
            printf("\nYes it's sorted\n");
        }
        else
        printf("\nnot sorted\n");
    }
 }
 

int main()
{
    int a[5]={1,3,5,7,9};
    issort(a,5);
     return 0;
}
#include<stdio.h>

 void display(int *a, int len)
 {
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
    
 }
 void oneside(int *a, int len){
    int i=0;
    int j=len-1;
    while (i<j)
    {
        while (a[i]<0)
        {
            i++;
        }
        while (a[j]>=0)
        {
             j++;
        }
        swap(a[i],a[j]);

        
        
    }
    
 }

int main()
{
    int a[10]={-2,3,-53,2,-35,89,-98,-87,-44,10};
    display(a,10);
     return 0;
}
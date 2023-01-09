#include<stdio.h>

 void display(int *a, int len)
 {
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
    
 }
 void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    printf("%d",b);


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
             j--;
        }
        swap(a[i],a[j]);

        
        
    }
    
 }

int main()
{
    int a[10]={-2,3,-53,2,-35,89,-98,-87,-44,10};
    display(a,10);
    oneside(a,10);
    printf("\n");
    // swap(1,2);
    display(a,10);
     return 0;
}
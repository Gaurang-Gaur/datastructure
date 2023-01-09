#include<stdio.h>
int main()
{ 
    printf("Gaurang Gaur CSA \n");
    printf("2100320120066 \n");
    printf("finding the local maxima\n");
    int i =0,n,j=0;

    printf("enter the value of n:");
scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("value of array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
    
    printf("\n*******************************************\n");

 
 for ( i = 0; i < 6; i++)
 {
    if(a[i-1]<a[i]&&a[i]>a[i+1])
    {

        
        printf("\n%d at index is local maxima %d\n",i,a[i]);
        
    }
    
 
 

 
}
printf(" not found:%d",j);


    return 0;

}
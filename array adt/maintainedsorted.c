#include<stdio.h>
void display(int arr[],int i){
    for(int i=0;i<10;i++){
        printf("  %d",arr[i]);

    }
}
void mtnsort(int *a,int len,int key){
    int last=len-1;
    for (int i = last; i>=0; i--)
    {
        if(a[last]>key){
            a[last+1+]=a[last-i];
        }
    }
    
}
 
 

int main()
{
    int a[10]={1,3,5,7,9,11,13,15,17,19};
     
     display(a,10);
     mtnsort(a,10,14);
     return 0;
}
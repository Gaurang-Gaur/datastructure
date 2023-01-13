#include<stdio.h>
void display(int arr[],int i){
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);

    }
}
void mtnsort(int *a,int len,int key){
           
           int i=len-1;
           while(a[i]>key){
             a[i+1]=a[i];
              i--;

           }
           a[i+1]=key;
           




printf("\n");

    for (int i = 0; i < 11; i++)
    {
        printf("%d ",a[i]);
    }
    
     
    
}
 
 

int main()
{
    int a[10]={1,3,5,7,9,11,13,15,17,19};
     
     display(a,10);
     mtnsort(a,10,21);
     return 0;
}
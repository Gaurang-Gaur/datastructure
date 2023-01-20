#include<stdio.h>
void display(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void merge(int *a,int *b){
     int i=0,j=0,k=0;
          int c[10]={0};
     while(i<5&&  j<5){
          if(a[i]<b[j])
          {
               c[k++]=a[i++];
          }
          else
                         c[k++]=b[j++];
     }
     
     for(;i<5;i++){
          c[k++]=a[i];
     }
     for(;j<5;j++){
          c[k++]=b[j];
     }

display(c,10);
}
 
 

int main()
{
 int a[5]={23,35,113,125,134};
 int b[5]={34,56,200,1000,3400};
 merge(a,b);   
     return 0;
}
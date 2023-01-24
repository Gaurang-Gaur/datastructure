#include<stdio.h>
int main(){


long long int max=0;
   long long int  min=0;
   long long int sum=0;
   int arr_count=5;
   int arr[5];
   printf("enter the value of array");
   for (int i = 0; i < 5; i++)
   {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
   }
   printf("sorted array");
   
    for(int i=0;i<arr_count;i++){
          //let the arr[0] no. in an array//
          if(arr[i]<arr[0]){
              arr[i]=arr[0];
          }
      }
      
   for (int  i = 0; i < 5; i++)
   {
    printf(" %d",arr[i]);
   }
   printf("\n%d",sum);

   
  
      
   
    min=sum-arr[arr_count-1];
    max=sum-arr[0];
    printf("\n%lld ",min);
    printf("\n%lld",max);


    return 0;

}
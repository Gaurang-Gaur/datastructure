#include<stdio.h>
void swap(int arr[],int key){

int c=0;

     
    for(int i=0;i<10;i++){
        if(key==arr[i]){
            c=key;
            arr[i]=arr[0];
            arr[0]=c;
        }
    }
    
}
void display(int arr[],int i){
    for(int i=0;i<10;i++){
        printf("  %d",arr[i]);

    }
}
int main(){
int size=10;
int len=10;
int key;
printf("enter the value of key");
scanf("%d",&key);
int a[10]={1,2,3,4,5,6,7,8,9,10};
swap(a,key);
display(a,10);
printf("\n");
swap(a,key);
display(a,10);




    return 0;

}
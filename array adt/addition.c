// shortcut to run code runner is ctrl+alt+n;
// shortcut to exit terminal is ctrl+`;
// use shift while selecting something...


#include<stdio.h>
void delete(int *arr,int index,int len){

int x=arr[index];
for(int i=0;i<index;i++){
    arr[i-1]=arr[i];

}
len--;

}
int main(){
int a[10]={1,3,5,7,9};
int len=5;
int size =10;
int key=11;
int index=3;

    if(index<=len){

    
    
for(int i=len;i>index;i--)
    {// for checking the valid index or not we used...
a[i]=a[i-1];

    }
    a[index]=key;
    len++;
    
    
    
    
    
    
    
    

    }




// for printing the array we use this ...
for(int i=0;i<len;i++){
    printf("%d ",a[i]);

}
delete(a,2,6);
printf("\n");
for(int i=0;i<len;i++){
    printf(" %d ",a[i]);

}

    return 0;

}
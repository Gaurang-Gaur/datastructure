#include<stdio.h>
struct array{
    int size;
    int len;
    int arry[10];

};
void display(struct array arr){
    for(int i=0;i<arr.len;i++){
        printf("%d",arr.arry[i]);

    }
}
void append(struct array arr, int key, int pos){
    for(int i=arr.len-1;i>pos;i--){
        printf("%d",arr.arry[i]);
            
    }
}
int main(){
    struct array arr={10,5,{1,2,3,4,5}};// declaration of struct array with variable arr...
    display(arr);
    printf("\n");
    append(arr,34,4);


return 0;
    
}
#in
void swap(int *x, int *y){
    int *temp=0;
    *temp=*x;
    *x=*y;
    *y=*temp;
}
void bubble (int arr[], int len){
    int j=0;
    int i=0; 
    for( int i=0;i<len-1;i++){
        for (int j= 0; j<len-1-i; j++)
        {printf("the length of the array :%d",len);
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        
int main(){
    int arr[]={1,3,4,5,2};
    int len=5;
    
    bubble(arr,len);
    for (int i = 0; i < len; i++)
    {
        // printf("is this running the ");
        printf("%d ",arr[i]);

    }
    



    return 0;
}
#include<stdio.h>

void reverse(char *x){

int i=0,j=0;
for(i=0;x[i]!='\0';i++){

}
// printf("%d\n",i);
i=i-1;// we are doing this because for loop is giving us length of string but to access string elements we need the index of elements which
// is len-1

// printf("%d",i);
int k;
k=i;
char y[20];
for(j=0,k=i;k>=0;k--,j++){
    y[j]=x[k];
    
    printf("%c ",y[j]);
}
// puts(y);


}
 
 

int main()
{
    char x[20];
    printf("enter the string you wanted to be reverse: ");
    gets(x);
    // puts(x);
    reverse(x);
     return 0;
}
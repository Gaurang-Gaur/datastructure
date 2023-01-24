#include<stdio.h>

void compare(char *x){
    char y[20];
    printf("\n");
    gets(y);
    // puts(y);
    int i=0,j=0;
    for(i=0,j=0;y[j]!='\0'||x[i]!='\0';){
        if(y[j]==x[i]){
            j++;
            i++;
           printf("equal \n");
        }
        else
        {printf("\n not equal ");
        break;}

    }
}
 
void reverse(char *x){


int i;
for(i=0;x[i]!='\0';i++){

}
i=i-1;
int j=0;
int k;
char temp;


for(j=0,k=i;k>j;j++,k--){
    temp=x[j];
    // printf("%c  ",temp);
    
    x[j]=x[k];
    x[k]=temp;
    // printf("running");
}
puts(x);
}
 

int main()
{
    char x[20];
    gets(x);
    printf("Checking palidrome:");
    reverse(x);
    printf("\n enter your second string to compare:");

    compare(x);
    // puts(x);

     return 0;
}
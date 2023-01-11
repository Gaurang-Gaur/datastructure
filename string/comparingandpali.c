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
 
 

int main()
{
    char x[20];
    gets(x);
    // puts(x);
    compare(x);

     return 0;
}
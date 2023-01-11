#include<stdio.h>

int valid(char *x)
{
    for(int i=0;x[i]!='\0';i++)
    {
        if(!(x[i]>=65 && x[i]<97)&&!(x[i]>=97 &&x[i]<122)&&!(x[i]>=48 && x[i]<57)){
            return 0;

        }
        else
        return 1;    
    }
    
}
 
 

int main()
{
    char x[20];
    printf("enter you string:");
    gets(x);
    puts(x);
    if(valid(x)){
        printf("valid string\n");
    }else
    printf("invalid string\n");
    

     return 0;
}
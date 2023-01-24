#include<stdio.h>

void duplicate(char *x){
    int i,j;
    int count=0;
    for(i=0;x[i]!='\0';i++)
{
    for ( j = 0; x[j]!='\0';j++)
    {
        if(x[j]==x[i]){
            count++;
            x[i]=0;
        }
    }
    
}
printf("%s",x);
printf("%d",count);
}


int main()
{
    char x[]="finding";
    duplicate(x);
     return 0;
}
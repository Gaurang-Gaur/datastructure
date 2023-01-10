#include<stdio.h>
int length(char *x){

 int i=0;
    while(x[i]!='\0'){
        i++;
    }
return i;
}
void touppercase(char *x,int len){
    
    for (int i = 0; i < len ; i++)
    {
        x[i]=x[i]-32;
        // printf("is this running");
    }
    printf("\n");
 for (int  i = 0; i < len; i++)
    {
        printf("%c",x[i]);
    }
    printf("\n see the value's in which the string actual store in array\n");
 for (int  i = 0; i < len; i++)
    {
        printf("  %c",x[i]);
    }

}
 
 void toggle(char *x, int len){

for (int i = 0; i < len ; i++)
    { if(x[i]<=122 &&x[i]>=97)
        x[i]=x[i]-32;
     else 
     x[i]+=32;
        
    }
    printf("\n");
    for (int  i = 0; i < len; i++)
    {
        printf("  %c",x[i]);
    }


 }

int main()
{
    char x[]="weLcoMe";
    // char *x="welcome";
    // this will automatically create a string in heap memory and the x pointer will be created in stack memory...
   
    int len;
    len=length(x);
    printf("%c",len);
    // touppercase(x,len);
    //  for (int i = 0; i < len ; i++)
    // {
    //     x[i]=x[i]-32;
    //     printf("is this running");
    // }
    // touppercase(x,len);
    toggle(x,len);
    
    // Note : this string is in heap we can not directly access from here as so we have to convert it into stack otherwise find a way to access it in heap

   
    
     
    printf("\nNote: In char array all the char is store as ascii code only .\n if you wanted to perform operation on them you can directly add no. on them");
     return 0;
}
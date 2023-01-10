// There is slight difference in array of character or character array and string as string is always terminated by '\o' character.

#include<stdio.h>

 
 

int main()
{
    // // char x='a';
    // // printf("%c",x);

    // char x[]={'a','b','c','d','e'};
    // for (int i = 0; i <5; i++)
    // {
    //     printf("%c",x[i]);
    // }
    // printf("%c",x[5]);// this is character array as it not terminated by '\o'.

     char x[]="string";
     printf("%s",x);
         printf("\n");
    for (int i = 0; i <10; i++)
    {
        printf("%c",x[i]);
    }
    printf("This show string is always terminated by '\o'");
    
    
     return 0;
}
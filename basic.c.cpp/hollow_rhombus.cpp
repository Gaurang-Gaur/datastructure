#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {

        for ( j = 1; j <=9; j++)
        {
            for ( k = 9; i < 4; k--)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    return  0;
}
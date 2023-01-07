#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int a[3][4]={{1,2,3,4},{2,3,4,4},{1,3,5,7}};
    // three rows and four columns;
    int *b[3];
    int **c;// just a double pointer;
    int i,j;
    for ( i = 0; i < 3; i++)
    {
          for ( j = 0; j<4; i++)
          
                 printf("%d ",a[i][j]);
                 
          
          printf("\n");
    }
    


    b[0]=(int *)malloc(4*sizeof(int));
     b[1]=(int *)malloc(4*sizeof(int));
      b[2]=(int *)malloc(4*sizeof(int));
      c=(int **)malloc(3*sizeof(int *));//it's in heap//
      c[0]=(int *)malloc(4*sizeof(int ));// it will created in heap as whole 2d array in heap//

      c[1]=(int *)malloc(4*sizeof(int ));
     c[2]=(int *)malloc(4*sizeof(int ));

     
     return 0;
}
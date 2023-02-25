#include<iostream>
using namespace std;

int main()
{int i,j;
    // normal method to create array in stack ;
    int a[2][3]={{3,3,4},{3,2,1}};
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j<3; i++)
        {
              printf("%d ",a[i][j]);
              
        }
        
    }
    
    int *b[2];// this inside stack only as interger pointer array named b;
    b[0]= new int(3);
    b[1]=new int (3);

    // it will form partial array inside the int b[2][3]={{2,3,4},{5,6,7}};
    int **c;

    c=(int **)malloc(3*sizeof(int *));
    c[0]=(int *)malloc(4*sizeof(int ));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));






     return 0;
}
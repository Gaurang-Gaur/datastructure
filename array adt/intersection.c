#include <stdio.h>
int main()
{
    int n, m;
    int count=0;
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("enter the value of m:");
    scanf("%d", &m);

    int a[n], b[m], i, j, k=0;
    int c[]={0};
    printf("enter the value of the set a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("entered value in set a:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nenter the value of set b:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("value at the set b:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
// find intersection of two arrays
    for (int  i = 0 ; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i]==b[j])
            {
                c[k++]=a[i];
                count++;
                break;
                
            }
            
            
        }
        
    }
    if(count==0)
    {
        
            printf("No intersection found");
    }
    printf("Intersection of the two unsorted array:");
    for (int i = 0; i < k; i++)
    {
        printf("%d  ", c[i]);
    }
    
    return 0;
}
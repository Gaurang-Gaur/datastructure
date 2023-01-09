#include <stdio.h>

int main()
{
    int set1[1000], set2[1000], inter[2000];
    int n, m, k = 0;
    printf("Enter n, m: ");
    scanf("%d%d", &n, &m);
    printf("enter the value of set 1:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &set1[i]);
    }
    printf("enter the value of set 2:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &set2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (set2[i] == set1[j])
            {
                inter[k] = set2[i];
                k += 1;
                break;
            }
        }
    }
    printf("Intersection of two sets:");
    for (int i = 0; i < k; i++)
    {
        printf("%d", inter[i]);
    }
    return 0;
}

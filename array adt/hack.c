#include <stdio.h>
void plusMinus(int arr_count, int *arr)
{
    float pos = 0;
    float neg = 0;
    float zero = 0;
    
    for (int i = 0; i < arr_count; i++)
    {
        
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    float a=0;
    a=pos/arr_count;
    float b=0;
    b=neg/arr_count;
    float c=0;
    c=zero/arr_count;

    
    printf("%0.5f\n", a);
    printf("%0.5f\n", b);
    printf("%0.5f", c);
}
int main()
{
    int count = 5;
    int ar[5] = {1, 2, -1, -2, 0};
    plusMinus(count, ar);
    return 0;
}

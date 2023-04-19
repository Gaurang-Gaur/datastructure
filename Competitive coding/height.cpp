#include <iostream>
using namespace std;

int min(int a, int b)
{
    return a <= b ? a : b;
}
int maxArea(vector<int> &height)
{
    int i = 0, j = height.length - 1;
    int maxarea = 0;
    int amount = 0;

    while (i < j)
    {

        int min = height[i];
        int max = height[j];
        int base = 0;

        amount = min(height[i], height[j]) * base;
        if (amount > maxarea)
        {
            maxarea = amount;
        }
        if (height[i] > height[j])
        {
            j--;
        }
        else
            i++;

        return maxarea;
    }
}

int main()
{

    return 0;
}
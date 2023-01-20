#include <stdio.h>
void display(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
void append(int *a, int *b, int len)
{
    for (int i = 0; i < 5; i++)
    {
        // printf("%d",b[0]);
        a[len - 5 + i] = b[i];
    }
    display(a, 10);
}
void concat(int *a,int *b,int *c,int lena,int lenb,int lenc){
for (int i = 0; i < lena; i++)
{
    c[i]=a[i];
}
int l=lena+lenb;
for (int i = lena; i < (l); i++)
{
    c[i]=b[i-10];
// printf("l:%d",l); 
}
display(c,15);

}
int compare(int *a,int *b){
for (int i = 0; i < 5; i++)
{
    if(a[i]==b[i]){
        return 1;
    }
    else
    return 0;
}

}
void check(int *a,int *b){
  if(compare(a,b))
{
    printf("yes");

}
else
printf("no");
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5};
    int b[5] = {1, 7, 8, 9, 10};
    int c[15];
    // append(a, b, 10);
    // concat(a, b, c, 10, 5,15);
//   check(a,b);

    return 0;
}
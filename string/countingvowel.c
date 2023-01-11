#include <stdio.h>
int length(char *x)
{

    int i = 0;
    while (x[i] != '\0')
    {
        i++;
    }
    return i;
}
void count(char *x, int len)
{
    int vcount = 0;
    int ccount = 0;
    for (int i = 0; i <len; i++)
    {
        
        if(x[i]=='a'||x[i]=='A'||x[i]=='e'|| x[i]=='E'|| x[i]=='o'||x[i]=='O'||x[i]=='u'||x[i]=='U'||x[i]=='i'||x[i]=='I'){
            vcount++;
        }
        else
        ccount++;
    }
    printf("\n%d \n", vcount);
    printf("%d\n", ccount);
}

int main()
{
    char x[20];
    int len;

    printf("enter your string to be counted:");
    gets(x);
    len = length(x);
    printf("%d\n",len);
    // printf("%s",x);
    puts(x);
    printf("\n");
    count(x, len);
    return 0;
}
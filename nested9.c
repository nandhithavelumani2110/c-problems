#include <stdio.h>
#include <string.h>
int main() 
{
    char str[] ="ABCD";
    int n =strlen(str);
    int i,j,space;
    for(i=1;i<=n;i++)     
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        for(j=i-2;j>=0;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int n=5;
    int i, j;
    for(i=0;i<n;i++)  
    {
        for(j='E'-i;j<='E';j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
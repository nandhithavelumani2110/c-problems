#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%d",max(A,B));
    return 0;
}
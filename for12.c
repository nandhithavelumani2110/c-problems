#include<stdio.h>
int main(){
    int i,x,n,p=1;
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
    {
        p*=x;
    }
    printf("%d %d =%d",x,n,p);
    return 0;
}
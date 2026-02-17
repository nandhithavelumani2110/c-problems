#include <stdio.h>
int main(){
    int n,t,d,s=0,f;
    scanf("%d",&n);
    t=n;
    for(;t>0;t/=10) {
        d=t%10;
        f=1;
        for(int i = 1; i <= d; i++)
        f*=i;
        s+=f;
    }
    if(s==n)
        printf("yes");
    else
        printf("No");
    return 0;
}
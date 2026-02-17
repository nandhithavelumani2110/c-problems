#include <stdio.h>
int main() {
    int n,temp,sum=0,digit;
    scanf("%d", &n);
    temp=n;
    for(int i=n;i>0;i=i/10) {
        digit=i%10;
        sum=sum+(digit*digit*digit);
    }
    if(sum==temp)
        printf("Yes");
    else
        printf("No");
    return 0;
}
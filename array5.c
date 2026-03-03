#include <stdio.h>
int main() {
    int n,i,num;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n-1;i++) {
        scanf("%d",&num);
        sum=sum+num;
    }
    int total=n*(n+1)/2;
    printf("%d", total-sum);
    return 0;
}
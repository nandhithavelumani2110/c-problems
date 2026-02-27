#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1,amt;
    int count=0,cons=0,fraud=0;
    while(i<=n){
        scanf("%d",&amt);
        if(amt>=50000) {
            count++;
            cons++;
        } else {
            cons=0;
        }
        if(cons==3 && fraud==0) {
            fraud=i;
        }
        i++;
    }
    printf("Fraud Triggered At Attempt: %d\n",fraud);
    printf("High-Value Transactions: %d",count);
    return 0;
}
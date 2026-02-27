#include <stdio.h>
int main() {
    int balance,n,amount;
    int i=0,count=0;
    scanf("%d",&balance);
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&amount);
        if(amount>balance)
            break;
        balance=balance-amount;
        count++;
        i++;
    }
    printf("Successful Purchases: %d\n",count);
    printf("Final Balance: %d",balance);
    return 0;
}
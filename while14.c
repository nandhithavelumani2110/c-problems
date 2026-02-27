#include <stdio.h>
int main() {
    int cash,n;
    scanf("%d",&cash);
    scanf("%d",&n);
    int i=0,amount;
    int success=0;
    while (i<n) {
        scanf("%d",&amount);
        if (cash<amount)
            break;
        cash = cash-amount;
        success++;
        i++;
    }
    printf("Successful Withdrawals: %d\n",success);
    printf("Remaining Cash: %d",cash);
    return 0;
}
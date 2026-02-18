#include <stdio.h>
int main() {
    int initialCash, n;
    int withdrawal;
    int riskCount = 0;
    scanf("%d", &initialCash);
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &withdrawal);
        initialCash=initialCash-withdrawal;

        if(initialCash<5000) {
            riskCount++;
        }
    }
    printf("Remaining Cash: %d\n",initialCash);
    printf("Risk Count: %d", riskCount);
    return 0;
}
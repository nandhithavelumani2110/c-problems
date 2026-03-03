#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int prices[n];
    int min=-1;
    for(i=0;i<n;i++) {
        scanf("%d",&prices[i]);
        if(prices[i]>0) {
            if(min==-1 || prices[i] < min) {
                min = prices[i];
            }
        }
    }
    if(min == -1)
        printf("No positive");
    else
        printf("%d", min);
    return 0;
}
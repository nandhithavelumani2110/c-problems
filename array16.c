#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
int maxProfit=-1;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            int profit=arr[j]-arr[i];
            if(profit>maxProfit) {
                maxProfit=profit;
            }
        }
    }
    printf("%d",maxProfit);
    return 0;
}ithu 16
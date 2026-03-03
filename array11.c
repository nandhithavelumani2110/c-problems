#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int total=0;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        total += arr[i];
    }
    int leftSum=0;
    for(i=0;i<n;i++) {
        int rightSum=total-leftSum-arr[i];
        if(leftSum==rightSum) {
            printf("%d",i);
                 }
        leftSum += arr[i];
    }
    return 0;
}ithu 11
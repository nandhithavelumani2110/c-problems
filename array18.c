#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int maxLen=1;
    for(i=0;i<n;i++) {
        int count=1;
        for(j=i+1;j<n;j++) {
            if(arr[j]>arr[j-1])
                count++;
            else
                break;
        }
        if(count>maxLen)
            maxLen=count;
    }
    printf("%d",maxLen);
    return 0;
}
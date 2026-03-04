#include <stdio.h>
int main() {
    int n,i,j,found=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                found=arr[i];
                break;
            }
        }
        if(found != -1) {
            break;
        }
    }
    printf("%d",found);
    return 0;
}
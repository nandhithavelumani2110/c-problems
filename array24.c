#include <stdio.h>
int main() {
    int n,i,j;
    int arr[100];
    int unique=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                unique=0;
                break;
            }
        }
        if(unique==0)
            break;
    }
    if(unique)
        printf("Yes");
    else
        printf("No");
    return 0;
}
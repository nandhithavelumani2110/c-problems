#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
int found = 0;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i] + arr[j] == target) {
                printf("%d %d",arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;          }
    if(!found)
        printf("No pair");
    return 0;
}

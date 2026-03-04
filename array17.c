#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int isPalindrome=1;
for(i=0;i<n/2;i++) {
        if(arr[i] != arr[n-1-i]) {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
        printf("Yes");
    else
        printf("No");
    return 0;
}
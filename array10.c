#include <stdio.h>
int main() {
    int n, i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int max=a[n-1];
    a[n-1]=-1;
    for(i=n-2;i>=0;i--) {
        int temp=a[i];
        a[i]=max;
        if(temp>max) {
            max=temp;
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
} ithu 10
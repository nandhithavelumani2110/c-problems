#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
        scanf("%d",&a[i]);
    int result[n];
    int count=0;
    int max=a[n-1];
    for(int i=n-1;i>=0;i--) {
        if(a[i]>=max) {
            result[count++]=a[i];
            max = a[i];
        }
    }
    for(int i=count-1;i>=0;i--) {
        printf("%d ",result[i]);
    }
    return 0;
}
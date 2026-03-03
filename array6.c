#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        int duplicate=0;
        for(int j=0;j<i;j++) {
            if(a[i]==a[j]) {
                duplicate=1;
                break;
            }
        }
        if(duplicate==0)
            printf("%d ",a[i]);
    }
    return 0;
}
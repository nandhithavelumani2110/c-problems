#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sales[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&sales[i]);
    }
    int sorted=1;   
    for(int i=0;i<n-1;i++) {
        if(sales[i]>sales[i+1]) {
            sorted=0;   
            break;
        }
    }
    if(sorted==1) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
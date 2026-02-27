#include <stdio.h>
int main() {
    int n,i=0,x;
    int inactive=0;
    scanf("%d",&n);
    while (i<n){
        scanf("%d",&x);
        if (x==0)
            inactive++;
        i++;
    }
    printf("Inactive Weeks: %d\n",inactive);
    if (inactive >= 3)
        printf("Risk Status: High");
    else
        printf("Risk Status: Low");
    return 0;
}
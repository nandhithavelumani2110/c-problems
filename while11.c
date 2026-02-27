#include <stdio.h>
int main() {
    int n,i=0,x;
    int total=0,delayed=0;
    scanf("%d",&n);
    while (i<n) {
        scanf("%d",&x);
        total=total+x;
        if (x>2)
            delayed++;
        i++;
    }
    printf("Total Delay: %d\n",total);
    printf("Delayed Days: %d",delayed);
    return 0;
}
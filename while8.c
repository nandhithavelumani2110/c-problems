#include <stdio.h>
int main() {
    int n,i=0,x;
    int count=0, max=0;
    scanf("%d",&n);
    while (i<n) {
        scanf("%d",&x);
        if (x==0) {
            count++;
            if (count>max)
                max=count;
        } else {
            count=0;
        }
        i++;
    }
    printf("Longest Default Streak: %d",max);
    return 0;
}
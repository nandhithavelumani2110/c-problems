#include <stdio.h>
int main() {
    int n,i=0,x;
    int max=0,surge=0;
    scanf("%d",&n);
    while (i<n) {
        scanf("%d",&x);
        if (x>max)
            max=x;
        if (x>5)
            surge++;
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",surge);
    return 0;
}
#include <stdio.h>
int main() {
    int n,i=0,x;
    int total=0,count=0;
    scanf("%d", &n);
    while (i<n) {
        scanf("%d",&x);
        total += x;
        if (x>4)
            count++;

        i++;
    }
    printf("Total Overtime: %d\n", total);
    printf("Burnout Days: %d", count);
    return 0;
}
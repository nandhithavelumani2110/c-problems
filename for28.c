#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int units, total = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &units);
        total += units;
    }
    printf("Total Units:%d",total);
    return 0;
}
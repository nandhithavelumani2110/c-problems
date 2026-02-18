#include <stdio.h>
int main() {
    int n,rain;
    int total=0, heavyDays=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &rain);
        total=total+rain;
        if(rain>50) {
            heavyDays++;
        }
    }
    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavyDays);
    return 0;
}
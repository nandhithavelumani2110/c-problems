#include <stdio.h>
int main() {
    int n,usage;
    int total=0,highUsage=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&usage);
        total=total+usage;
        if(usage>2) {
            highUsage++;
        }
    }
    printf("Total Data: %d\n", total);
    printf("High Usage Days: %d", highUsage);
    return 0;
}
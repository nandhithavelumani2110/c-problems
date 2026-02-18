#include <stdio.h>
int main() {
    int n,errors;
    int total=0,critical=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&errors);
        total=total+errors;
        if(errors>50) {
            critical++;
        }
    }
    printf("Total Errors: %d\n", total);
    printf("Critical Hours: %d", critical);
    return 0;
}
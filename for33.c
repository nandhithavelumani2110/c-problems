#include <stdio.h>
int main() {
    int n,loss;
    int total=0, highLossDays=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&loss);
        total = total+loss;
        if(loss>100) {
            highLossDays++;
        }
    }
    printf("Total Loss: %d\n", total);
    printf("High Loss Days: %d", highLossDays);
    return 0;
}
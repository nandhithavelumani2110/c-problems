#include <stdio.h>
int main(){
    int batteryPercent,n,drain;
    scanf("%d",&batteryPercent);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &drain);
        batteryPercent=batteryPercent-drain;
    }
    if(batteryPercent<0)
        batteryPercent=0;
    printf("Remaining Battery: %d%%", batteryPercent);
    return 0;
}
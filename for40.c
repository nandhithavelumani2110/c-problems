#include <stdio.h>
int main() {
    int n,voltage;
    int min,low=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d",&voltage);
        if(i==0){
            min=voltage;
        if(voltage<min){
            min=voltage;
        if(voltage<210){
            low++;
    }
        }
        }
    }
    printf("Minimum Voltage: %d\n", min);
    printf("Low Voltage Events: %d", low);
    return 0;
}
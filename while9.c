#include <stdio.h>
int main() {
    int fuel,n;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int i=0,x,count=0;
    while(i<n){
        scanf("%d",&x);
        if (fuel<x)
            break;
        fuel=fuel-x;
        count++;
        i++;
    }
    printf("Completed Trips: %d\n",count);
    printf("Remaining Fuel: %d",fuel);
    return 0;
}
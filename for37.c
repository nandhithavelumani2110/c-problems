#include <stdio.h>
int main() {
    int n,price;
    int highest,highDays = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&price);

        if(i==0) {
            highest=price;   
        }
        if(price>highest) {
            highest=price;   
        }
        if(price>100) {
            highDays++;       
        }
    }
    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d", highDays);
    return 0;
}
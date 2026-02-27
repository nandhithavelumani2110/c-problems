#include <stdio.h>
int main() {
    int data, n;
    scanf("%d",&data);
    scanf("%d",&n);
    int i=0,x;
    int day=0,over=0;
    while (i<n) {
        scanf("%d",&x);
        if (day==0) {   // check only until exhausted
            data=data-x;
            if (data<=0) {
                day=i+1;
                over=-data;
            }
        }
        i++;
    }
    printf("Exhausted Day: %d\n",day);
    printf("Overused Data: %d",over);
    return 0;
}
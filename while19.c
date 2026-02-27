#include <stdio.h>
int main() {
    int max, n, x;
    int treated=0,rejected=0,i=0;
    scanf("%d",&max);
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&x);
        if(treated+x>max) {
            rejected+=(treated+x-max);
            treated=max;
        } else {
            treated += x;
        }
        i++;
    }
    printf("Treated Patients: %d\n",treated);
    printf("Rejected Patients: %d",rejected);

    return 0;
}
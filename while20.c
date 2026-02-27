#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int prev,curr;
    int i=1;
    int drops=0,count=0,crash=0;
    scanf("%d",&prev);
    while(i<n) {
        scanf("%d",&curr);
        if(curr<prev) {
            drops++;
            count++;
            if(count==3 && crash==0)
                crash=i+1;
        } else {
            count=0;
        }
        prev=curr;
        i++;
    }
    printf("Crash Day: %d\n",crash);
    printf("Total Drops: %d",drops);
    return 0;
}
#include <stdio.h>
int main() {
    int n,x;
    int i=0;
    int c=0,s=0,m=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&x);
        if(x>20) {
            c++;
            s++;
            if(s>m)
                m=s;
        } else {
            s=0;
        }

        i++;
    }
    printf("Congestion Minutes: %d\n",c);
    printf("Longest Congestion Streak: %d",m);
    return 0;
}
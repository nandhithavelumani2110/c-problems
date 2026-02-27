#include <stdio.h>
int main() {
    int n,x;
    int i=1;
    int unsafe=0,c=0,b=0;
    scanf("%d", &n);
    while(i <= n) {
        scanf("%d", &x);

        if(x>70){
            unsafe++;
            c++;
            if(c==3 && b==0)
                b=i;
        } else {
            c=0;
        }

        i++;
    }
    printf("Breakdown At Reading: %d\n",b);
    printf("Unsafe Readings: %d",unsafe);
    return 0;
}
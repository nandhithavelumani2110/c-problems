#include <stdio.h>
int main() {
    int n,x;
    int i=0,fail=0,c=0,lock=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&x);
        if(x==0){
            fail++;
            c++;
            if(c==3 && lock==0)
                lock=i+1;
        } else{
            c=0;
        }
        i++;
    }
    printf("Lock Triggered At Attempt: %d\n",lock);
    printf("Total Failed Attempts: %d",fail);
    return 0;
}
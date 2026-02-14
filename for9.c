#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        count++;
    }
    printf("%d\n",count);
    return 0;
}
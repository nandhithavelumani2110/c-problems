#include <stdio.h>
int isPrime(int num) {
    int i;
    if(num<2)
        return 0;
    for(i=2;i<=num/2;i++) {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main() {
    int r,c,i,j, count=0;
    int a[50][50];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        int allPrime=1;
        for(j=0;j<c;j++) {
            if(!isPrime(a[i][j])) {
                allPrime=0;
                break;
            }
        }
        if(allPrime)
            count++;
    }
    printf("%d", count);
    return 0;
}
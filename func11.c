#include <stdio.h>
int countDigits(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",countDigits(n));
    return n;
}
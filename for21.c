#include <stdio.h>
int main(){
    int n,decimal=0;
    scanf("%d", &n);
    for(;n>0;n=n/10) {
        decimal=decimal*2+(n%10);
    }
    printf("%d",decimal);
    return 0;
}
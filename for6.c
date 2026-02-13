#include <stdio.h>
int main() {
    int i,fact=1;
    for(i=1;i<=5;i++){
        fact*=i;
    }
        printf("%d ",fact);
    return 0;
}
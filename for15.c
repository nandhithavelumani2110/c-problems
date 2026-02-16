#include <stdio.h>
int main() {
    int n, i, count = 0;
    for (i=1;i<=10;i++){
        if (i==2||i==3||i==5||i==7){
            count++;}
    }
    printf("%d", count);
    return 0;
}
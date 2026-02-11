#include <stdio.h>
int main() {
    int a=10,b=25,c=15;
    if(a>b){
        printf("%d is largest",a);
    }
    else if(b>c){
        printf("%d is largest",b);
    }
    else{
        printf("%d is largest",c);
    }
    return 0;
}
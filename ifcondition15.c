#include <stdio.h>
int main() {
    int a=60,b=60,c=60,sum;
    sum=a+b+c;
    if(sum==180){
        printf("valid triangle");
    }
    else{
        printf(" not valid");
    }
    return 0;
}
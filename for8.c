#include <stdio.h>
int main() {
    int num, rev= 0,remainder;
    num = 123;
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
    }
    printf("%d", rev); 

    return 0;
}

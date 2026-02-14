#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    scanf("%d", &num);
    for (; num > 0; num = num / 10){
        digit = num % 10;
        sum = sum + digit;
    }
    printf("%d", sum);
    return 0;
}
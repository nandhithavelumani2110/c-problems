#include <stdio.h>
int main() {
    int n, i, num, sum = 0;
    scanf("%d %d", &n,&num);
    for (i = 1; i <= n; i++) {
        sum = sum + num;
    }
    printf( "%d", sum);
    return 0;
}
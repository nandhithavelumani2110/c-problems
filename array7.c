#include <stdio.h>
int main() {
    int n,num;
    int even=0,odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&num);
        if(num % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even:%d Odd:%d", even, odd);
    return 0;
}
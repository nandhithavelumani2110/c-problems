#include <stdio.h>
int main() {
    int n,x,count=0;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&marks[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++) {
        if(marks[i]==x) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
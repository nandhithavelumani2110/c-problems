#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int marks[n];
    int sum=0;
    for(i=0;i<n;i++) {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    double average=(double)sum/n;
    int count=0;
    for(i=0;i<n;i++) {
        if(marks[i]>average) {
            count++;
        }
    }
printf("%d", count);
    return 0;
}

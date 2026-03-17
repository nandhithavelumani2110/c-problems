#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int max=*ptr;
    for(i=1;i<n;i++) {
        if(*(ptr+i)>max) {
            max=*(ptr+i);
        }
    }
    printf("%d",max);
    return 0;
}
#include <stdio.h>
int main() {
    int n,i=0,s=0,c=0,x;
    scanf("%d",&n);
    while (i<n) {
        scanf("%d",&x);
        if (x==1)
            s++;
        else
            c++;
        i++;
    }
    printf("Successful: %d\n",s);
    printf("Cancelled: %d\n",c);
    if (c>s)
        printf("Status: Risk");
    else
        printf("Status: Safe");
    return 0;
}
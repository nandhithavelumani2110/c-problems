#include <stdio.h>
int main() {
    int r,c,i,j,count = 0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++) {
        for(j=0; j<c;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        int sorted=1;
        for(j=0;j<c-1;j++) {
            if(a[i][j] > a[i][j+1]) {
                sorted = 0;
                break;
            }
        }
        if(sorted)
            count++;
    }
    printf("%d", count);
    return 0;
}
#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int sum=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<c;j++)
    sum += a[0][j];
    for(j=0;j<c;j++)
    sum += a[r-1][j];
    for(i=1;i<r-1;i++)
    sum += a[i][0];
    for(i=1;i<r-1;i++)
       sum += a[i][c-1];
    printf("%d",sum);
    return 0;
}
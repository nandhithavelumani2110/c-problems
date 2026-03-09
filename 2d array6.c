#include <stdio.h>
#include <stdlib.h>
int main() {
    int R,i,j,C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    int sum[R];
    for(i=0;i<R;i++){
        sum[i]=0;
        for(j=0;j<C;j++){
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];}
    }
    int maxDiff = 0;
    for(i=0;i<R;i++){
        for(j=i+1;j<R;j++){
            int diff = abs(sum[i]-sum[j]);
            if(diff > maxDiff)
                maxDiff = diff;}
    }
    printf("%d",maxDiff);
    return 0;
}
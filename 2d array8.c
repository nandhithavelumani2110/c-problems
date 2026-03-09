#include <stdio.h>
int main() {
    int R,i,j,C;
    scanf("%d %d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int maxSum = 0;
    for(i=0;i<R-1;i++){
        for(j=0;j<C-1;j++){
            int sum = a[i][j] + a[i][j+1] +
                      a[i+1][j] + a[i+1][j+1];
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    printf("%d",maxSum);
    return 0;
}
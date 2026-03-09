#include <stdio.h>
int main() {
    int R,C,i,j;
    scanf("%d %d",&R,&C);
    int a[R][C];
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    long long maxProduct;
    int maxRow = 0;
    for(i=0;i<R;i++){
        long long product = 1;
            product *= a[i][j];
        if(i==0 || product > maxProduct){
            maxProduct = product;
            maxRow = i;
        }
    }
    printf("%d",maxRow);
    return 0;
}
#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count = 0;
    for(i=0;i<r;i++){
        int sum = 0;
        for(j=0;j<c;j++){
            if(i != j){
                sum += a[i][j];
            }
        }
        if(a[i][i] > sum){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
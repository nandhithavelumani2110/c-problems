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
    int maxSum=-9999,index=0;
    for(j=0;j<c;j++){
        int sum=0;
        for(i=0;i<r;i++){
            sum += a[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            index=j;
        }
    }
    printf("%d", index);
    return 0;
}
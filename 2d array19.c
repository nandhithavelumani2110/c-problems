#include <stdio.h>
int main() {
    int r,c,i,j,k;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count=0;
    for(i=0;i<r;i++){
        int unique=1;
        for(j=0;j<c;j++){
            for(k=j+1;k<c;k++){
                if(a[i][j]==a[i][k]){
                    unique=0;
                }
            }
        }
        if(unique==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
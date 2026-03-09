#include <stdio.h>
#include <stdlib.h>

int main() {
    int r,c,i,j,k,l;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int max = 0;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=i+1;k<r;k++){
                for(l=0;l<c;l++){
                    int diff = abs(a[i][j] - a[k][l]);
                    if(diff > max){
                        max = diff;
                    }
                }
            }
        }
    }

    printf("%d",max);

    return 0;
}
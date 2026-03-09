#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int count=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
        int flag = 1;
        for(j=0;j<c-1;j++){
            if(a[i][j] >= a[i][j+1]){
                flag = 0;
                break;
            }
        }
        if(flag)
            count++;
    }
    printf("%d",count);
    return 0;
}
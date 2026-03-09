#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int maxLen = 0, index = 0;
    for(i=0;i<r;i++){
        int len = 1;
        for(j=0;j<c-1;j++){
            if((a[i][j]%2==0 && a[i][j+1]%2!=0) || 
               (a[i][j]%2!=0 && a[i][j+1]%2==0))
                len++;
        }
        if(len > maxLen){
            maxLen = len;
            index = i;
        }
    }
    printf("%d",index);
    return 0;
}
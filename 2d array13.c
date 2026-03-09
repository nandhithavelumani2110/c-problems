#include <stdio.h>
int main() {
    int r,c,i,j,count=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        int palindrome = 1;
        for(j=0;j<c/2;j++){
            if(a[i][j] != a[i][c-1-j]){
                palindrome = 0;
                break;
            }
        }
        if(palindrome)
            count++;
    }
    printf("%d", count);
    return 0;
}
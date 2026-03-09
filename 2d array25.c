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
        int max=a[i][0];
        int min=a[i][0];
        for(j=1;j<c;j++){
            if(a[i][j] > max)
                max=a[i][j];
            if(a[i][j] < min)
                min=a[i][j];
        }
        if(max-min<=1000)
            count++;
    }
    printf("%d",count);
    return 0;
}
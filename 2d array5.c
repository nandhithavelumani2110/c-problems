#include <stdio.h>
int main() {
    int r,c,a[10][10];
    int i,j,sum,min=100000,index=0;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);}
    }
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        if(sum<min){
            min=sum;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}
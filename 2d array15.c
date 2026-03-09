#include <stdio.h>
int main() {
    int r,c,i,j,k,count=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int num = a[i][j];
            int prime=1;
            if(num <= 1)
                prime=0;
            for(k=2;k<=num/2;k++){
                if(num % k == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}
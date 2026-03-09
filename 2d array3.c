#include <stdio.h>
int main(){
    int R,C,a[100][100];
    int i,j,k;
    int count,max=0,index = 0;
    scanf("%d %d",&R,&C);
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++) {
        count=0;
        for(j=0;j<C;j++) {
            for(k=0;k<j;k++) {
                if(a[i][j]==a[i][k])
                    break;}
            if(j==k)
                count++;}
        if(count>max){
            max = count;
            index = i;}}
    printf("%d", index);
    return 0;
}
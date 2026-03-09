#include <stdio.h>
int main(){
    int R,C;
    int salary[100][100];
    int i,j;
    int max=-1,second=-1;
    scanf("%d %d",&R,&C);
    for(i=0;i<R;i++) {
        for(j=0;j<C;j++) {
            scanf("%d",&salary[i][j]);}
    }
    for(i=0;i<R;i++) {
        for(j=0;j<C;j++) {
            if(salary[i][j]>max){
                second=max;
                max=salary[i][j];
            }
            else if(salary[i][j]>second && salary[i][j]<max){
            second=salary[i][j];
            }
        }
    }
    printf("%d", second);
    return 0;
} 

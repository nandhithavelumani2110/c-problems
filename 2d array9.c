#include <stdio.h>
int main() {
    int R,C,i,j;
    scanf("%d %d",&R,&C);
    int a[R][C];
    int balanced = 0;
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<R;i++){
        int even=0, odd=0;
        for(j=0;j<C;j++){
            if(a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
        if(even == odd)
            balanced++;
    }
    printf("%d",balanced);
    return 0;
}
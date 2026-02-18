#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int amount,total=0;
    for(int i=0;i<N;i++) {
        scanf("%d",&amount);
        total+=amount;
    }
    if(total<=10000) {
        printf("Approved");
    } else {
        printf("Limit Exceeded");
    }
    return 0;
}
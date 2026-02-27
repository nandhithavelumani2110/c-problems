#include <stdio.h>
int main() {
    int capacity,n,load;
    int safe=0,fail=0,i=0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&load);
        if(load<=capacity)
            safe++;
        else
            fail++;
        i++;
    }
    printf("Safe Hours: %d\n",safe);
    printf("Failure Count: %d",fail);
    return 0;
}
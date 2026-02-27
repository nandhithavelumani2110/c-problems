#include <stdio.h>
int main() {
    int maxweight, n;
    int weight;
    int total=0;
    int count=0;
    int i=0;
    scanf("%d",&maxweight);
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&weight);
        if(total+weight>maxweight) {
            break;
        }
        total = total+weight;
        count++;
        i++;
    }
    printf("People Entered: %d\n",count);

    if(i<n){
        printf("Overload Status: Yes");}
    else{
        printf("Overload Status: No");}
    return 0;
}
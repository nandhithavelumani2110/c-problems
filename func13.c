#include <stdio.h>
int power(int a,int b){
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    return result;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
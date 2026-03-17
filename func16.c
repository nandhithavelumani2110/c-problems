#include <stdio.h>
void fibonacci(int n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
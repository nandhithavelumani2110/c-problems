#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
float divi(int a,int b){
    return (float)a/b;
}
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+': printf("%d",add(a,b)); break;
        case '-': printf("%d",sub(a,b)); break;
        case '*': printf("%d",mul(a,b)); break;
        case '/': printf("%.2f",divi(a,b)); break;
        default: printf("Invalid");
    }
    return 0;
}
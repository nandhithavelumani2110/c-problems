#include <stdio.h>
int main(){
    int n=5;
    int size =2*n-1;
    int i,j;
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            if(i==1||i==size||j==1||j==size){
                printf("*");}
            else if(j>=n-(i-1)&&j<=n+(i-1)&&i<=n){
                printf(" ");}
            else if(j>=n-(size-i)&&j<=n+(size-i)&&i>n){
                printf(" ");}
            else{
                printf("*");}
        }
        printf("\n");
    }
    return 0;
}
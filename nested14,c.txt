#include <stdio.h>
int main(){
    int n=4;
    int size=2*n-1;
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            int x=i;
            if(j<x)x=j;
            if(size-1-i<x)x=size-1-i;
            if(size-1-j<x)x=size-1-j;
            printf("%d",n-x);
        }
        printf("\n");
    }
    return 0;
}
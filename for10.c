#include <stdio.h>
int main() {
   int n,i;
   scanf("%d",&n);
   int frst=0;
   int sec=1;
   if(1<=n){
       printf("%d",frst);
   }
   if(2<=n){
       printf("%d",sec);
   }
   for(i=2;i<n;i++){
       int temp=frst+sec;
       frst=sec;
       sec=temp;
       printf("%d",temp);
   }
    return 0;
}
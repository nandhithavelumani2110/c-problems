#include <stdio.h>
int main()
{
int n,i=0,status;
int currentstreak=0,maxstreak=0;
scanf("%d",&n);
while(i<n){
scanf("%d",&status);
if(status==0){
currentstreak++;
if(currentstreak>maxstreak){
maxstreak=currentstreak;
}
}
else{
currentstreak=0;
}
i++;
}
printf("longest failure streak:%d",maxstreak);
return 0;
}
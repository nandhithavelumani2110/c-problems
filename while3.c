#include <stdio.h>
int main()
{
int totaldata,days;
scanf("%d",&totaldata);
scanf("%d",&days);
int useddays=0;
int dailyusage;
while(useddays<days&&totaldata>0){
scanf("%d",&dailyusage);
totaldata -= dailyusage;
useddays++;
}
if(totaldata<0){
totaldata=0;
printf("days used: %d\n",useddays);
printf("remaining data :%dGB\n",totaldata);
return 0;
}
}
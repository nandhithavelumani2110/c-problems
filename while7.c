#include <stdio.h>
int main()
{
   int n,i=0;
   int change,capacity;
   int occupied=0;
   int criticalhours=0;
   scanf("%d",&capacity);
   scanf("%d",&n);
   while(i<n){
   scanf("%d",&change);
   occupied += change;
   if(occupied>0.9*capacity){
   criticalhours++;
}
i++;
}
printf("final occupied beds:%d\n",occupied);
printf("critical hours:%d",criticalhours);
return 0;
}
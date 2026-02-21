#include <stdio.h>
int main()
{
   int n,i=0,maxweight;
   int weight,total=0;
   int passengersallowed=0;
   int overload=0;
   scanf("%d",&maxweight);
   scanf("%d",&n);
   while(i<n){
   scanf("%d",&weight);
   if(total+weight>maxweight){
   overload=1;
   break;
}  
   total += weight;
   passengersallowed++;
   i++;
}
printf("passengersallowed:%d\n",passengersallowed);
  if(overload)
     printf("overload:yes");
  else
      printf("overload:no");
return 0;
}
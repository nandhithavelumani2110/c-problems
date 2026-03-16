#include <stdio.h>
float simpleInterest(int p,int r,int t){
    return (p*r*t)/100.0;
}
int main()
{
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T);
    float si=simpleInterest(P,R,T);
    printf("%.2f",si);
    return 0;
}
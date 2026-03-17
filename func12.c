#include <stdio.h>
int isLeap(int year){
    if((year%4==0&&year%100!=0)|(year%400==0))
        return 1;
    else
        return 0;
}
int main(){
    int year;
    scanf("%d",&year);
    if(isLeap(year))
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return year;
}
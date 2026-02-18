#include <stdio.h>
int main()
{
    int n, hours;
    int total=0;
    int heavyDays=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &hours);
        total=total+hours;
        if(hours>3)
            heavyDays++;
    }
    printf("Total Overtime Hours: %d\n", total);
    printf("Overtime Cost: %d\n", total * 200);
    printf("Heavy Overtime Days: %d", heavyDays);
    return 0;
}
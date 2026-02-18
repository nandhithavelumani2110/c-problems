#include <stdio.h>
int main()
{
    int n, delay;
    int total=0;
    int count=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &delay);
        total=total+delay;
        if(delay>30)
            count++;
    }
    printf("Total Delay: %d\n",total);
    printf("Delayed Deliveries: %d",count);
    return 0;
}
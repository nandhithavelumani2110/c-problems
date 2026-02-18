#include <stdio.h>
int main()
{
    int capacity, n, items;
    int overflowDays = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&items);
        capacity=capacity - items;
        if(capacity<0)
            overflowDays++;
    }
    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d", overflowDays);
    return 0;
}
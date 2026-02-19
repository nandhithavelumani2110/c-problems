#include <stdio.h>
int main()
{
    int N;
    int units;
    int totalUnits=0;
    int spikeHours=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&units);
        totalUnits+=units;
        if(units>5)
        {
            spikeHours++;
        }
    }
    printf("Total Units: %d\n",totalUnits);
    printf("Spike Hours: %d\n",spikeHours);
    return 0;
}
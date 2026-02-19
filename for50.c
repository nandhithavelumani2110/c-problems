#include <stdio.h>
int main()
{
    int N;
    int heartRate;
    int maxHeartRate = 0;
    int dangerCount = 0;

    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&heartRate);
        if(i==0)
        {
            maxHeartRate=heartRate;
        }

        if(heartRate>maxHeartRate)
        {
            maxHeartRate=heartRate;
        }
        if(heartRate>140)
        {
            dangerCount++;
        }
    }
    printf("Max Heart Rate: %d\n",maxHeartRate);
    printf("Danger Readings: %d\n",dangerCount);
    return 0;
}
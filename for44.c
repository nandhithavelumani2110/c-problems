#include <stdio.h>
int main()
{
    int n,noise;
    int max=0;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&noise);
        if(i==0)
            max=noise;
        if(noise>max)
            max=noise;
        if(noise>70)
            count++;
    }
    printf("Maximum Noise: %d\n",max);
    printf("Noisy Periods: %d",count);
    return 0;
}
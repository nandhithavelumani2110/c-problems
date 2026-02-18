#include <stdio.h>
int main()
{
    int totalData,n,usage;
    int successfulDays=0;
    scanf("%d",&totalData);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&usage);
        if(totalData>=usage)
        {
            totalData=totalData-usage;
            successfulDays++;
        }
        else
        {
            break;
        }
    }
    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d", successfulDays);
    return 0;
}
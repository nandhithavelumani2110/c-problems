#include <stdio.h>
int main()
{
    int N;
    int calls;
    int totalCalls=0;
    int overloadedHours=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&calls);
        totalCalls+=calls;
        if(calls>40)
        {
            overloadedHours++;
        }
    }
    printf("Total Calls: %d\n",totalCalls);
    printf("Overloaded Hours: %d\n",overloadedHours);

    return 0;
}
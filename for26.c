#include <stdio.h>
int main()
{
    int n,i;
    int expense,total=0;
    int overspendDays=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&expense);
        total+=expense;
        if(expense>1000)
        {
            overspendDays++;
        }
    }
    printf("Total Expense: %d\n",total);
    printf("Overspend Days: %d",overspendDays);
    return 0;
}
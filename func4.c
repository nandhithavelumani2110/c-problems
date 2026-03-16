#include <stdio.h>
float area(int r)
{
    return 3.14*r*r;
}
int main()
{
    int R;
    scanf("%d",&R);
    printf("%.2f",area(R));
    return 0;
}
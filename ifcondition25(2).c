#include<stdio.h>
int main()
{
    int choice;
    int a,b;
    scanf("%d",&choice);
    scanf("%d %d",&a,&b);
    switch(choice){
        case 1:printf("sum = %d\n",a+b);
        break;
        case 2:printf("sub = %d\n",a-b);
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int choice=1;
    int a=10,b=20;
    switch(choice){
        case 1 :printf("sum = %d",a+b);
        break;
        case 2 :printf("sub = %d",a-b);
        break;
    }
    return 0;
}
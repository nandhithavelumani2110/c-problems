#include <stdio.h>
int main() {
    
    int units=120;
    float bill_amount=0.0;
    float rate1=4.0;
    float rate2=10.0;
    printf("input:%d units\n",units);
    if(units<=100){
        bill_amount=units*rate1;
    }
    else{
        bill_amount=100*rate1;
        bill_amount+=(units-100)*rate2;
    }
    printf("bill amount=Rs.%.0f\n",bill_amount);
    return 0;
}
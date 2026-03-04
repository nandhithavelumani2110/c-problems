#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int max1=-100000,max2=-100000;
    int min1=100000,min2=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max1) {
            max2=max1;
            max1=arr[i];
        } 
        else if(arr[i]>max2) {
            max2=arr[i];
        }
        if(arr[i]<min1) {
            min2=min1;
            min1=arr[i];
        } 
        else if(arr[i]<min2) {
            min2=arr[i];
        }
    }
    int product1=max1 * max2;
    int product2=min1 * min2;
    if(product1>product2)
        printf("%d",product1);
    else
        printf("%d",product2);
    return 0;
}
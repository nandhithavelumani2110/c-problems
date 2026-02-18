#include <stdio.h>
int main() {
    int n,patients;
    int total=0,overcrowded=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&patients);
        total=total+patients;
        if(patients>100) {
            overcrowded++;
        }
    }
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d", overcrowded);

    return 0;
}
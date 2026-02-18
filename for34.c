#include <stdio.h>
int main() {
    int n,mark;
    int total=0, failed=0;
    scanf("%d",&n);
    for(int i=0; i<n;i++) {
        scanf("%d",&mark);
        total = total+mark;

        if(mark<40) {
            failed++;
        }
    }
    int average=total/n;
    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d", failed);
    return 0;
}
#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i = 0;
    int noise;
    int violations=0;
    int currentStreak=0;
    int longestStreak=0;
    while(i<N) {
        scanf("%d",&noise);
        if(noise>70) {
            violations++;
            currentStreak++;
            if(currentStreak>longestStreak) {
                longestStreak=currentStreak;
            }
        } else {
            currentStreak=0;
        }
        i++;
    }
    printf("Noise Violations: %d\n",violations);
    printf("Longest Violation Streak: %d",longestStreak);
    return 0;
}
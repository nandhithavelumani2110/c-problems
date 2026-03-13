#include <stdio.h>
#include <ctype.h>
int main() {
    int i;
    char str[100];
    int count=0;
    scanf("%s",str);
    for(i=0;str[i] != '\0';i++) {
        if(!isalnum(str[i])) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
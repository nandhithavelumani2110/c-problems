#include <stdio.h>
int main() {
    char email[100];
    int i=0;
    scanf("%s",email);
    while(email[i] != '@') {
        printf("%c",email[i]);
        i++;
    }
    return 0;
} 
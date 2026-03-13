#include <stdio.h>
#include<string.h>
int main() {
    char s;
    scanf("%c",&s);
    if(s>='A'&& s<='Z')
        printf("Valid");
    else
        printf("Invalid");
    return 0;
} 
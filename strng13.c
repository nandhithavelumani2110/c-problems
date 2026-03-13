#include <stdio.h>
int main() {
    int i;
    char str[100], ch;
    int index=-1;
    scanf("%s",str);
    scanf(" %c",&ch);
    for(i=0;str[i] != '\0';i++) {
        if(str[i]==ch) {
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}
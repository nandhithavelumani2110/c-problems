#include <stdio.h>
int main() {
    char str[100];
    int count=0;
    int i;
    scanf("%s",str);
    for(i=0;str[i] != '\0';i++) {
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
#include <stdio.h>
int main() {
    char ch;
    switch(ch='E'){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
           printf("vowel");
           break;
        default:
           printf("constant");
    }
    return 0;
}
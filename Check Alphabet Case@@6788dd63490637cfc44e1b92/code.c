#include <stdio.h>

int main() {
    char d;
    scanf("%c", &d);

    if (d >= 'a' && d <= 'z') { 
        printf("Lowercase\n");
    } 
    else if (d >= 'A' && d <= 'Z') {
        printf("Uppercase\n");
    } 
    else {  
        printf("Not an alphabet\n");
    }

    return 0;
}

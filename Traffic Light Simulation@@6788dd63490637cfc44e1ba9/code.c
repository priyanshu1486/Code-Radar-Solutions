#include <stdio.h>
int main() {
    char d;
    scanf("%c", &d);
    switch (d){
        case 'R':
            printf("Stop");
        case 'G':
            printf("Go");
        case 'Y':
            printf("Slow DOwn");
        default:
            printf("Invalid input");
        
    }

    return 0;
}
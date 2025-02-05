#include <stdio.h>
int main() {
    char d;
    scanf("%c", &d);
    switch (d){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow DOwn");
            break;
        default:
            printf("Invalid input");
        
    }

    return 0;
}
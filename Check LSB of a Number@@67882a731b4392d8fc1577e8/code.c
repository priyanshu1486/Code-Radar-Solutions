// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input from the user
    scanf("%d", &num);

    // Check the least significant bit
    if(num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

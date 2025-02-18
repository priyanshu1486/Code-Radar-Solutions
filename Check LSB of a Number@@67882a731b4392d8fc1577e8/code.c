// Your code here...#include <stdio.h>

int main() {
    unsigned int num;

    // Input from the user
    scanf("%u", &num);

    // Check the least significant bit
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

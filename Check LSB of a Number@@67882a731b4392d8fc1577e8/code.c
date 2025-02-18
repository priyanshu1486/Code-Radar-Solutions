// Your code here...#include <stdio.h>

int main() {
    unsigned int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%u", &num);

    // Check the least significant bit
    if (num & 1) {
        printf("The least significant bit is 1.\n");
    } else {
        printf("The least significant bit is 0.\n");
    }

    return 0;
}

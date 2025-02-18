// Your code here...
#include <stdio.h>

int main() {
    long int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%u", &num);

    // Check the least significant bit
    if (num | 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

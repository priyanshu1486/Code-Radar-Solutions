// Your code here...
#include <stdio.h>

int main() {
    unsigned int num, n;

    // Input the number and the bit position
    scanf("%u", &num);
    scanf("%u", &n);

    // Create a mask with the n-th bit cleared
    unsigned int mask = ~(1 << n);

    // Clear the n-th bit using bitwise AND with the mask
    unsigned int result = num & mask;

    // Output the result
    printf("%u", result);

    return 0;
}

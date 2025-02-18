// Your code here...#include <stdio.h>

int main() {
    unsigned int num;

    // Input the number
    scanf("%u", &num);
    // Find the position of the lowest set bit
    int position = 0;
    while ((num & 1) == 0) {
        position++;
        num >>= 1;  // Right shift to check the next bit
    }

    // Output the position
    printf("%d\n", position);

    return 0;
}

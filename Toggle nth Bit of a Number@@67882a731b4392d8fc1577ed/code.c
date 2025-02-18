// Your code here...#include <stdio.h>

int main() {
    unsigned int num, n;

    // Input the number and bit position
    scanf("%u", &num);
    scanf("%u", &n);

    // Toggle the n-th bit
    unsigned int result = num ^ (1 << n);

    // Output the result
    printf("%u",result);

    return 0;
}

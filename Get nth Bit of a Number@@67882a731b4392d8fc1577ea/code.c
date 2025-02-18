#include <stdio.h>

int main() {
    unsigned int num, n;
    
    // Input the number and bit positio
    scanf("%u", &num);
    scanf("%u", &n);

    // Retrieve the n-th bit
    unsigned int bit_value = (num >> n) & 1;

    // Output the bit value
    printf("%u", bit_value);

    return 0;
}

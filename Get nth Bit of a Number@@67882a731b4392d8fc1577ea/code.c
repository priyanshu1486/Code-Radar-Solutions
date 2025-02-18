#include <stdio.h>

int main() {
    int num, n;
    
    // Input the number and bit positio
    scanf("%D", &num);
    scanf("%D", &n);

    // Retrieve the n-th bit
    unsigned int bit_value = (num >> n) & 1;

    // Output the bit value
    printf("%u", bit_value);

    return 0;
}

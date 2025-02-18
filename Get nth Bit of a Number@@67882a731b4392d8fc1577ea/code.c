#include <stdio.h>

int main() {
    unsigned int num, n;

    scanf("%u", &num);
    scanf("%u", &n);

    // Check if the n-th bit is set
    if (num & (1 << n)) {
        printf("%u", n);
    } else {
        printf("%u", n);
    }

    return 0;
}

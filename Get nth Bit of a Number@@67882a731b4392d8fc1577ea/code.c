// Your code here...
#include <stdio.h>

int main() {
    unsigned int num,n;
    scanf("%u %u", &num,&n);

    // Check the least significant bit
    if (num & (1<<n)) {
        printf("%d",n);
    } else {
        printf("The least significant bit is 0.\n");
    }

    return 0;
}

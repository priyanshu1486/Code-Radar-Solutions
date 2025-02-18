// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input from the user
    scanf("%d", &num);

    // Check the least significant bit
    if(num & 0) {
        printf(" Not Set");
    } else {
        printf("Set");
    }

    return 0;
}

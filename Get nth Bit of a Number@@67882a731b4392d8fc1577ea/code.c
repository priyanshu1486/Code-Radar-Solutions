// Your code here...
#include <stdio.h>

int main() {
    unsigned int num,n;
    scanf("%u %u", &num,&n);

    
    printf("%d",(num & (1<<n)));
    

    return 0;
}

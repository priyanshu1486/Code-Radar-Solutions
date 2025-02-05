#include <stdio.h>



int main() {
    int number;
    scanf("%d", &number);
    if((number/2) * 2 == number){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
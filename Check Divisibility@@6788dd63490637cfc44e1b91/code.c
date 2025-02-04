#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int number;
    scanf("%d", &number);
    if(number%5 == 0 && number%11 == 0){
        printf("Divisible");
    }
    else{
        printf("Not divisible");
    }
    return 0;
}
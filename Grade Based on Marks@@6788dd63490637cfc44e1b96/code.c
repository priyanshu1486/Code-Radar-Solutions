#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if(number>=90 && number<=100){
        printf("A");
    }
    else if(number>=80 && number <90){
        printf("B");
    }
    else if(number>=70 && number <80){
        printf("C");
    }
    else if(number>=60 && number <70){
        printf("D");
    }
    else {
        printf("F");
    }
    
    return 0;
}
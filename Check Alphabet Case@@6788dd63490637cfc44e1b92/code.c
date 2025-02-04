#include <stdio.h>

int main() {
    char d;
    scanf("%c", &d);
    if(d>=97 && d<=122){
        printf("Lowercase");
    }
    else if(d>0 && <10000){
        printf("Not an alphabet");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}
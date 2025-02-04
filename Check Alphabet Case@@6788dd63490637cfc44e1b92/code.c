#include <stdio.h>

int main() {
    char d;
    scanf("%c", &d);
    if(d>=97 && d<=122){
        printf("Lowercase");
    }
    else if(d<=97 && d >=122){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
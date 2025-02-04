#include <stdio.h>





int main() {
    float a,b,c;
    scanf("&f", a);
    scanf("&f", b);
    scanf("&f", c);

    if((a*a) + (b*b) == (c*c)) && (b*b) + (c*c) == (a*a) && (a*a) + (c*c) == (b*b)){
        printf("Valid");
    }
    else{
        printf("Invald");
    }
    return 0;
}
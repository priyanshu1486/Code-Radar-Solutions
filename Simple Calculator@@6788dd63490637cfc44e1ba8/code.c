#include <stdio.h>

int main() {
     char operatores;
     double num1,num2,result;
     scanf("%lf %lf %c ", &num1, &num2, &operatores);
     switch (operatores){
        case '+':
        result = num1 + num2;
        printf("%l.0f", result);
        break;
        case '-':
        result = num1 - num2;
        printf("%l.0f", result);
        break;
        case '*':
        result = num1 * num2;
        printf("%l.0f", result);
        break;
        case '/':
        if(num2 !=0){
            result = num1/num2;
            printf("%l.0f", result);
            break;
        }
        else{
            printf("invalid");
        }

     }

    return 0;
}
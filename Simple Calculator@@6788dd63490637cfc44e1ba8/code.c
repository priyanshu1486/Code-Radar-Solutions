#include <stdio.h>

int main() {
     char operatores;
     int num1,num2,result;
     scanf("%d %d %c ", &num1, &num2, &operatores);
     switch (operatores){
        case '+':
        result = num1 + num2;
        printf("%d", result);
        break;
        case '-':
        result = num1 - num2;
        printf("%d", result);
        break;
        case '*':
        result = num1 * num2;
        printf("%d", result);
        break;
        case '/':
        if(num2 !=0){
            result = num1/num2;
            printf("%d", result);
            break;
        }
        else{
            printf("invalid");
        }

     }

    return 0;
}
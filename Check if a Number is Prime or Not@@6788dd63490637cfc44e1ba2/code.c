#include <stdio.h>



int main() {
    int num, not_prime=0;
    scanf("%d", &num);
    if(num == 1 || num == 0 || num<0){
        not_prime =1;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i == 0){
                not_prime=1;
            }
            
        }
        
    }
    if(not_prime){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
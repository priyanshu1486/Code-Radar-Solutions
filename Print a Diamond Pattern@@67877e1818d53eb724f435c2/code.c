// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int e=n-1;e>=1;e--){
        for(f=1;f<=n-i;f++){
            printf(" ");
        }
        for(g=1;g<=2*i-1;g++){
            printf("*")
        }
        printf("\n");
    }
}
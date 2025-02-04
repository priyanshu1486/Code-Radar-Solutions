#include <stdio.h>
int main() {
    int cost;
    int sell;
    scanf("%d %d", cost, sell);
    if(cost == sell){
        printf("No Profit No Loss");
    }
    else if(cost>sell){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
}
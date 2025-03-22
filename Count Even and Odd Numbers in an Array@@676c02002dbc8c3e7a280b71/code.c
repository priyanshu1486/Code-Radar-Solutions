#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int countevent=0,countdd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            countevent++;
        }
        else{
            countdd++;
        }
    }
    printf("%d %d", countevent,countdd);
}
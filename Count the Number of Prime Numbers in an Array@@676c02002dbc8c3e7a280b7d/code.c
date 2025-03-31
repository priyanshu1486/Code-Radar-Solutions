#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int isprime=1;
        if(arr[i]<=1){
            continue;
        }
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                isprime=0;
                break;

            }
            
        }
        if(isprime){
            count++;
        }
    }
    printf("%d", count);
}
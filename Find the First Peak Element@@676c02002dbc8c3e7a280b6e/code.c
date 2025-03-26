#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max=0;
    if(n==1 || arr[0]>arr[1]){
        max=arr[0];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            max=arr[i];
            break;
        }
        else if(arr[n-1]>arr[n-2]){
            max=arr[n-1];
        }
    }
    printf("%d", max);
    return 0;
}
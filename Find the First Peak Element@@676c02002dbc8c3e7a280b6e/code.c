#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
            max=arr[i+1];
            break;
        }
    }
    printf("%d", max);
    return 0;
}
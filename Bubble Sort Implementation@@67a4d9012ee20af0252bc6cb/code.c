// Your code here...]
#include <stdio.h>
int bubbleSort(int arr[n], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1-i;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printArray(int arr[n], int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
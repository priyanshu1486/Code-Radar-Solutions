// Your code here...]
#include <stdio.h>
int bubbleSort(arr[n], n){
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
int printArray(arr[n], n){
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
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);

    }
    int issorted=1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                issorted=0;
            }
        }
    }
    if(issorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}

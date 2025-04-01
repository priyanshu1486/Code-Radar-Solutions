// Your code here...
#include <stdio.h>
int sum(int num){
    int sum=0;
    while(num>0){
        sum += num%10;
        num=num/10;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        int digit=0;
        digit=sum(arr[i]);
        printf("%d", digit);
    }
}
// Your code here...
#include <stdio.h>
int sum(int num){
    int su=0;
    if(num<0){
        num=-num;
    }
    while(num>0){
        su += num%10;
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
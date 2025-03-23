// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int index=0;
    int flag=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            flag=0;
            

        }
        else if(arr[i]==i){
            flag=1;
            index=i;
        }
    }
    if(flag){
        printf("%d", index);
    }
    else{
        printf("%d", -1);
    }
    
    return 0;
}
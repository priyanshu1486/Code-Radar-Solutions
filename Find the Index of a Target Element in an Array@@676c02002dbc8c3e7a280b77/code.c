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
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index=i;
            return i;
            

        }
        else{
            return 0;
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
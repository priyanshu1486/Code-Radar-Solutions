// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int ispalindrome=1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            ispalindrome=0;
        }
        
    }
    if (ispalindrome){
        printf("YES");

    }
    else{
        printf("NO");
    }
    
    
    
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int issoeted=1;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                issoeted=0;
            }
            
        }
        
    }
    if (issoeted)
    {
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    
    
    return 0;
}
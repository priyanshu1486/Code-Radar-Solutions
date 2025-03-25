#include <stdio.h>
#include <limits.h>

int main(){
    int r;
    scanf("%d", &r);
    int arr[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if (smax<arr[i] && max !=arr[i])
        {
            smax=arr[i];
        }
        
        
    }
    if(smax == INT_MIN){
        printf("-1");
    }
    else{
        printf("%d", smax);
    }
    
    return 0;
}
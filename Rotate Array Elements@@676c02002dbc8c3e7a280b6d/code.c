// Your code here...
// Your code here...
#include <stdio.h>
void revrse(int arr[], int si, int ei)
    {
        for (int i = si,j = ei; i < j; i++,j--)
        {
            int temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    k=k%n;

    revrse(arr,0,n-1);
    revrse(arr,0,k-1);
    revrse(arr,k,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
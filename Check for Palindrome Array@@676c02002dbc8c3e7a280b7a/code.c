// Your code here...
#include <stdio.h>

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    int ispalindrome=1;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != arr[7-1-i])
        {
            ispalindrome=0;
        }
        
    }
    if (ispalindrome){
        printf("it is palindrom");

    }
    else{
        printf("not a palindrome.");
    }
    
    
    
    return 0;
}
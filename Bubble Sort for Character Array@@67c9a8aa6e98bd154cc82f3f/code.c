// Your code here...
int bubbleSort(char arr[], int n){
    int i,j;
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printArray(char arr[], int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%c ", arr[i]);
    }
}
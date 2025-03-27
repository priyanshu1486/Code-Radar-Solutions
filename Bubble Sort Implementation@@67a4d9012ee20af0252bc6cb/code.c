// Your code here...]
int bubbleSort(arr[n], n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1-i;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
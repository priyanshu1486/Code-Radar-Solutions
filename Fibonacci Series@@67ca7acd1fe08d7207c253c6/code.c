// Your code here...
int fibonacciSeries(int n){
    if(n<=1){
        return n;
    }
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    for(int i=0;i<n;i++){
        printf("%d ",fibonacciSeries(i));
    }
}
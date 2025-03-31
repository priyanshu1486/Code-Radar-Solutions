// Your code here...
void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    // Print the first two terms if n >= 2
    if (n >= 1) printf("%d ", first);
    if (n >= 2) printf("%d ", second);

    // Generate and print the remaining terms
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}
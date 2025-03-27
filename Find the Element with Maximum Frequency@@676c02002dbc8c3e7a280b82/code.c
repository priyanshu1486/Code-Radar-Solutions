// Your code here...#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], freq[n]; // Array to store frequency
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (freq[i] == -1) { // Check if not already counted
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicate as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequencies
    
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int longest_consecutive_zeros(int L, int K) {
    int Z = L - K;  // Total number of zeros

    // If there are no ones, longest block of zeros is L
    if (K == 0) {
        return L;
    }
    // If there are no zeros, longest block of zeros is 0
    if (K == L) {
        return 0;
    }

    // Number of gaps created by K ones
    int gaps = K + 1;

    // Base number of zeros in each gap
    int base = Z / gaps;
    // Extra zeros to distribute
    int extra = Z % gaps;

    // If there are extra zeros, the longest block is base + 1
    return (extra > 0) ? (base + 1) : base;
}

int main() {
    int L, K;
    // Read input
    scanf("%d %d", &L, &K);
    // Calculate and print the result
    printf("%d\n", longest_consecutive_zeros(L, K));
    return 0;
}

#include <stdio.h>
#include <string.h>

long long count_valid_selections(const char *trees) {
    int n = strlen(trees);
    long long count = 0;

    // Prefix sums to count 'M' and 'L'
    long long prefix_M[n + 1]; // Counts of 'M' up to index i
    long long prefix_L[n + 1]; // Counts of 'L' up to index i

    // Initialize prefix sums
    prefix_M[0] = 0;
    prefix_L[0] = 0;

    // Build prefix sum arrays
    for (int i = 0; i < n; i++) {
        prefix_M[i + 1] = prefix_M[i] + (trees[i] == 'M' ? 1 : 0);
        prefix_L[i + 1] = prefix_L[i] + (trees[i] == 'L' ? 1 : 0);
    }

    // Iterate through each tree as the middle tree
    for (int j = 1; j < n - 1; j++) {
        if (trees[j] == 'M') {
            // Count 'L's to the left and right of j
            long long left_L = prefix_L[j];           // L's to the left of j
            long long right_L = prefix_L[n] - prefix_L[j + 1]; // L's to the right of j
            count += left_L * right_L; // Valid combinations with j as 'M'
        } else { // trees[j] == 'L'
            long long left_M = prefix_M[j];           // M's to the left of j
            long long right_M = prefix_M[n] - prefix_M[j + 1]; // M's to the right of j
            count += left_M * right_M; // Valid combinations with j as 'L'
        }
    }

    return count;
}

int main() {
    char ashok_row[100001]; // Max length based on constraints
    char anand_row[100001];

    // Input
    fgets(ashok_row, sizeof(ashok_row), stdin);
    fgets(anand_row, sizeof(anand_row), stdin);

    // Remove newline characters from the input
    ashok_row[strcspn(ashok_row, "\n")] = '\0';
    anand_row[strcspn(anand_row, "\n")] = '\0';

    // Validate inputs
    if (strspn(ashok_row, "ML") != strlen(ashok_row) || 
        strspn(anand_row, "ML") != strlen(anand_row)) {
        printf("Invalid input\n");
        return 0;
    }

    // Count possibilities for Ashok and Anand
    long long ashok_count = count_valid_selections(ashok_row);
    long long anand_count = count_valid_selections(anand_row);

    // Determine the result
    if (ashok_count > anand_count) {
        printf("Ashok\n");
    } else if (anand_count > ashok_count) {
        printf("Anand\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}

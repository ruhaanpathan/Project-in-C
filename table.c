#include <stdio.h>

void printDiamond(int n) {
    int spaces = n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        spaces--;
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    spaces = 1;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        spaces++;
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}

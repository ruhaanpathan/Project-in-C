#include <stdio.h>

void printBinary(int number) {
    printf("Binary representation: ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
}

void printOctal(int number) {
    int octal[50], i = 0;
    printf("Octal representation: ");
    if (number == 0) {
        printf("0");
    } else {
        while (number > 0) {
            octal[i++] = number % 8;
            number /= 8;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", octal[j]);
        }
    }
    printf("\n");
}

void printHexadecimal(int number) {
    char hex[50];
    int i = 0;
    char hexChars[] = "0123456789ABCDEF";
    if (number == 0) {
        printf("Hexadecimal representation: 0\n");
        return;
    }
    while (number > 0) {
        hex[i++] = hexChars[number % 16];
        number /= 16;
    }
    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int number, choice;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Choose representation: \n");
    printf("1. Decimal\n2. Binary\n3. Octal\n4. Hexadecimal\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Decimal representation: %d\n", number);
            break;
        case 2:
            printBinary(number);
            break;
        case 3:
            printOctal(number);
            break;
        case 4:
            printHexadecimal(number);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

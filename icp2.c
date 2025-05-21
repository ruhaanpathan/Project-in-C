#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("String Functions Menu:\n");
    printf("1. String Length (strlen)\n");
    printf("2. String Copy (strcpy)\n");
    printf("3. String Concatenation (strcat)\n");
    printf("4. String Compare (strcmp)\n");
    printf("5. String Reverse (strrev)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length: %lu\n", strlen(str1));
            break;

        case 2:
            printf("Enter a string to copy: ");
            scanf("%s", str1);
            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            printf("Comparison result: %d\n", strcmp(str1, str2));
            break;

        case 5:
            printf("Enter a string: ");
            scanf("%s", str1);
            strrev(str1);
            printf("Reversed string: %s\n", str1);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
/* OUTPUT 
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> gcc icp2.c
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe   
String Functions Menu:
1. String Length (strlen)
2. String Copy (strcpy)
3. String Concatenation (strcat)
4. String Compare (strcmp)
5. String Reverse (strrev)
Enter your choice (1-5): 1
Enter a string: ruhaan
Length: 6


PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
String Functions Menu:
1. String Length (strlen)
2. String Copy (strcpy)
3. String Concatenation (strcat)
4. String Compare (strcmp)
5. String Reverse (strrev)
Enter your choice (1-5): 2
Enter a string to copy: ruhaan
Copied string: ruhaan


PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
String Functions Menu:
1. String Length (strlen)
2. String Copy (strcpy)
3. String Concatenation (strcat)
4. String Compare (strcmp)
5. String Reverse (strrev)
Enter your choice (1-5): 3
Enter first string: ruhaan
Enter second string: pathan
Concatenated string: ruhaanpathan

PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
String Functions Menu:
1. String Length (strlen)
2. String Copy (strcpy)
3. String Concatenation (strcat)
4. String Compare (strcmp)
5. String Reverse (strrev)
Enter your choice (1-5): 4
Enter first string: ruhaan
Enter second string: pathan
Comparison result: 1


PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
String Functions Menu:
1. String Length (strlen)
2. String Copy (strcpy)
3. String Concatenation (strcat)
4. String Compare (strcmp)
5. String Reverse (strrev)
Enter your choice (1-5): 5
Enter a string: ruhaan
Reversed string: naahur
*/
// 1

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);
    int start = 0;
    
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    } 

    printf("Reversed words: %s\n", str);
    return 0;}



/*
OUTPUT
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> gcc .\ak.c
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe   
Enter a line of text: hello hii hello 
Reversed words: olleh iih olleh*/
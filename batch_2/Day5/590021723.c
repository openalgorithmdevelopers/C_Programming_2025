#include <stdio.h>

int main() {
    int i, j;          // Declare loop variables
    char ch = 'A';     // Start from character 'A'

    for (i = 1; i <= 5; i++) {         // Outer loop for rows
        for (j = 1; j <= i; j++) {     // Inner loop for columns
            printf("%c", ch);          // Print current character
            ch++;                      // Move to next alphabet
        }
        printf("\n");                  // New line after each row
    }

    return 0;
}


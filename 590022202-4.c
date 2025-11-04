#include <stdio.h>

int main() {
    char ch = 'A';                        
    int rows[] = {6, 5, 4, 3, 2, 1, 2, 3}; 
    int i, j;

for (i = 0; i < 8; i++) {
for (j = 0; j < rows[i]; j++) {
if (ch <= 'Z') {
    printf("%c ", ch);
     ch++;
     }
    }
       printf("\n");
      }
      return 0;
 }


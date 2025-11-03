#include <stdio.h>

int main() {
    int a = 1;
    while (a <= 14) {
        if (a % 3 != 0) {
           printf("%d ",a);
        }
        a += 1;
    }
    return 0;
}

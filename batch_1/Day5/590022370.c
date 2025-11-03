#include <stdio.h>

int main() {
    int num;
    int firstDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        firstDigit = 0;
    } else {
        do {
            firstDigit = num; 
            num /= 10;        
        } while (num > 0);    
    }
    printf("The first significant digit is: %d\n", firstDigit);

    return 0;
}

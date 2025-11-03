//Write a program that takes an integer as input and prints whether it is even or odd.
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number %d is Even.\n", num);
    } else {
        printf("The number %d is Odd.\n", num);
    }
    return 0;
}

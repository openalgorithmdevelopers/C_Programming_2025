#include <stdio.h>

int countDigits(int num) {
    int count = 0;

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        return 1;
    }

    while (num != 0) {
        num = num / 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    printf("The number %d has %d digits.\n", number, countDigits(number));

    return 0;
}


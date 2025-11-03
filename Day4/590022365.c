#include <stdio.h>

int sum(int n) 
{
    if (n < 0)
    {
        printf("Provide a positive value\n");
        return 0;
    } 
    else if (n == 0)
    {
        return 0;
    }

    int total_sum = n * (n + 1) / 2;
    return total_sum;
}

int main() 
{
    int n;
    printf("Please provide the value of n: ");
    scanf("%d", &n);

    int result = sum(n);
    printf("Sum of natural numbers up to %d is %d\n", n, result);

    return 0;
}


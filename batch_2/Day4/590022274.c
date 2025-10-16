#include <stdio.h>

int main()
{
    int num, i, last, q, a;

    printf("enter any number:");
    scanf("%d", &num);

    i = num % 10;

    q = num;

    while (q >= 10)
    {
        q = q / 10;
    }

    a= q*10;

    last = a + i;
    printf("%d", last);

    return 0;
}


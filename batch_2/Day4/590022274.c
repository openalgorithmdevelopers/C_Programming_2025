#include <stdio.h>
int main()
{
    int num, i, last, q, a = 0;
    printf("enter any number:");
    scanf("%d", &num);

    i = num % 10;
    i = i * 10;

    q = num;
    while (q != 0)
    {
        q = q / 10;
        a++;
    }

    last = i + a;
    printf("%d", last);
    return 0;
}



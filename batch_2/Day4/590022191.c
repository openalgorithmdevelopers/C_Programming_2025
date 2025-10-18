#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    int count = 0;
    scanf("%d", &a);
    c = a;

    while (a > 0) {
        b = a % 10;
        a = a / 10;
        count++;
    }

    count = count / 2 + 1;
    while (count > 0) {
        d = c % 10;
        c = c / 10;
        count--;
    }

    e = b * 10 + d;

    printf("%d", e);
    return 0;
}

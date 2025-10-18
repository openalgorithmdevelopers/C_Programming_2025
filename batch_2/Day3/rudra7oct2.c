#include <stdio.h>
int main()
{
    int a=1;
    while (a<=14){
        if (a%3 == 0) {
            a++;
            continue;
        }
        printf("%d ", a);
        a++;
    }
    return 0;
}


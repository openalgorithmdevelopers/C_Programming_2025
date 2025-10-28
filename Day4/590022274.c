#include <stdio.h>

int sumofnatnum(int);

int main()
{
        int num, ans;

        printf("enter any natural number to get its sum:");
        scanf("%d",&num);

        ans= sumofnatnum(num);

        printf("%d", ans);

        return 0;
}

int sumofnatnum(int num)
{
        int sum = num*(num+1)/2;

        return sum;
}


#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int first=0;
int second=0;
while(n>0)
{
second=n%10;
n=n/10;
first=n%10;
n=n/10;
}
printf("%d",first);
printf("%d",second);
return 0;
}


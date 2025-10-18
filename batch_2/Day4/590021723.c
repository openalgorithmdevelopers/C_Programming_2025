#include <stdio.h>
int main()
{
int n,a;
printf ("enter no. ");
scanf ("%d",&n);

while ( n>10 ) {
a=n;
n /=10;
}

printf ("%d",a);

return 0;
}


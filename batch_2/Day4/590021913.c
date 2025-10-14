#include <stdio.h>
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
while (n>=100){
n=n/10;
}
printf ("%d",n);
return 0;
}

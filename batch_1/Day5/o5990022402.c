#include<stdio.h>
int main(){
int n,d=0;

printf("Enter yor n");
scanf("%d",&n);

while (n>d)
{
d++;
}

while (n>=100)
{
n=n/10;
}
printf("%d",n);
}



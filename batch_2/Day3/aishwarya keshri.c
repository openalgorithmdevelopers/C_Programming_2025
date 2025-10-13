#include<stdio.h>

int main()
{
int num =0;

while (num <= 14)
{
num++;
if(num%3==0)
continue;
printf("%d ",num);
}
return 0;
}


#include<stdio.h>
void print_n(void);
int main()
{
print_n();
return 0;
}
void print_n()
{
int n=2;
while(n <=7)
{
int digit = (n*n) -1;
printf("%d ", digit);
n++;
}
}


#include<stdio.h>
void print_A_Z(void);
int main()
{
print_A_Z();
return 0;
}
void print_A_Z(void)
{
char ch='A';
while(ch <= 'Z')
{
printf("%c", ch);
ch++;
}
}

#include<stdio.h>
int main()
{
char ch=65;
for(int i=0;i<6;i++)
{
for(int j=6;j>i;j--)
{
printf("%c ",ch);
ch++;
}
printf("\n");
}
for(int i=0;i<2;i++)
{
for(int j=0;j<i+2;j++)
{
printf("%c ",ch);
ch++;
}
printf("\n");
}
return 0;
}

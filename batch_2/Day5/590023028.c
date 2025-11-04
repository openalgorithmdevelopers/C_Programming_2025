#include <stdio.h>
int main()
{
char ch='A';
int  n=6;
for(int i=0;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
printf("%c",ch);
ch++;
}
printf("\n");
}
for(int i=0;i<2;i++){
for(int j=0;j<2+i;j++){
printf("%c",ch);
ch++;
}
printf("\n");
}
return 0;
}

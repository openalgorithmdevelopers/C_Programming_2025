#include<stdio.h>
int main()
{
char  c='A';


for(int a=0; a<5; a++)
{
for(int j =0; j<a+1; j++)
{
printf ("%c ",c);
c++;
}
printf ("\n");

}
return 0;
}

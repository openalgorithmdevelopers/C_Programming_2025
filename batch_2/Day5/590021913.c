#include <stdio.h>
void pattern1(void);
void pattern2(void);

int main()
{
int n;
printf ("enter 1 to print pattern 1\nenter 2 to print pattern 2\n => ");
scanf ("%d",&n);

switch(n)
{
case 1 : 
	pattern1();
	break;
case 2 :
	pattern2();
	break;
}

return 0;
}

void pattern1()
{
char C='A';
int i;
for (i = 6 ; i >= 1 ; i--)
{
	for ( int j=1; j <= i ; j++)
		printf ("%c",C++);
	printf ("\n");
}

while (C< 'Z')
{
	i++;
	for ( int x=0 ; x<=i ; x++)
		printf ("%c",C++);
	printf ("\n");
}
}

void pattern2()
{
char C='A';

for (int i=1 ; i <=5 ; i++)
{
	for (int j=1 ; j<= i ; j++)
		printf ("%c",C++);
	printf ("\n");
}
}

// Write a function which receives  a number and returns its Factorial

#include <stdio.h>

int get_factorial(int);
int get_power(int,int);


int main ()
	{

	int x;

	printf ("enter no.: ");
	scanf ("%d", &x);

	printf ("factorial of %d = %d", x, get_factorial(x));

	int n,m;
	
	printf ("enter number and it's power: ");
	scanf ("%d%d",&n, &m);
	
	printf ("%d to the power %d = %d", n, m , get_power(n,m));


	return 0;
	}

int get_factorial(int a)
	{

	int f=1;

	while (a>0)
		{
		f*=a;
		a--;
		}
	return f;       
	}
	
int get_power(int a , int b)
	{
	int p=1;
	
	while (b>0)
		{
		p*=a;
		b--;
		}
	return p;
	}


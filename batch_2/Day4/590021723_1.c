// Write a function which receives  a number and returns its Factorial

#include <stdio.h>

int get_factorial(int);

int main ()
	{

	int n;

	printf ("enter no.: ");
	scanf ("%d", &n);

	printf ("factorial of %d = %d", n, get_factorial(n));

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

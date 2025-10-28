// WAF to get power of a number

#include <stdio.h>

int get_power(int,int);

int main()
	{
	int n,m;
	
	printf ("enter number and it's power: ");
	scanf ("%d%d",&n, &m);
	
	printf ("%d to the power %d = %d", n, m , get_power(n,m));
	
	return 0;
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

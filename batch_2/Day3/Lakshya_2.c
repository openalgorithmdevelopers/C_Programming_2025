//WAP to print 1 2 4 5 7 8 10 11 ...14

#include <stdio.h>
int main()
{
	int a=1;

	while (a<=14)
	{
		if (a%3 == 0)
		{
			a++;
			continue;
		}
	printf("%d", a);
	a++;
}
return 0;
}


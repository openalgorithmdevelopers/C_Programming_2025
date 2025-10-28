#include <stdio.h>

int factorial(int);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	if(num < 0)
 	{
        printf("Factorial not defined for negative numbers!\n");
        } else 
	{
        printf("Factorial of %d is %d\n", num, factorial(num));
        }

	return 0;
}

int factorial(int n)
{
	int fact = 1;
	int i = 1;
	
	while (i <= n)
	{
		fact*=i;
		i++;
	}
	return fact;
}
